/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaykit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:28:37 by wmaykit           #+#    #+#             */
/*   Updated: 2019/07/17 12:53:42 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define port 2004 
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h> 
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
	struct	sockaddr_in sockadr;
	int		sockres;
	int		connectfd;
	int		c;
	int		sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	char	buf[50];

	c = 0;
	if (ac == 4)
	{
		if (sockfd == -1)
		{
			printf("error creating socket\n");
			return (1);
		}
		memset(&sockadr, 0, sizeof(sockadr));	
		sockadr.sin_family = AF_INET;
		sockadr.sin_port = htons(atoi(av[2]));
		sockres = inet_pton(PF_INET, av[1], &sockadr.sin_addr);
		
		if (sockres < 0)
		{
			printf("incorrect address in first param\n");
			close(sockfd);
			return (1);
		}
		else if (!sockres)
		{
			printf("incorrect address in second param\n");
			close(sockfd);
			return (1);
		}
		if (connect(sockfd, (struct sockadrr*) &sockadr, sizeof(sockadr)) == -1)
		{
			printf("Error: connect");
			close(sockfd);
			return (1);
		}
		while (1)
		{
			read(0, buf, 50);
			write(sockfd, buf, strlen(buf));
			c = read(sockfd, buf, 128);
			write(1, buf, c);
			if (!strcmp(buf, "exit"))
			{
				shutdown(sockfd, SHUT_RDWR);
				close(sockfd);
			}
		}
	}
	return (0);
}
