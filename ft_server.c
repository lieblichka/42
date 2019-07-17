/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaykit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:28:39 by wmaykit           #+#    #+#             */
/*   Updated: 2019/07/17 13:56:47 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define port 2023

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{
	struct	sockaddr_in sockadr;
	int		sockfd;
	int		connectfd;
	int		c;
	int		key;
	char	buf[50];

	key = 0;
	sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (sockfd == -1)
	{
		printf("%s", "error creating socket\n");
		exit(1);
	}
	memset(&sockadr, 0, sizeof(sockadr));
	sockadr.sin_family = AF_INET;
	sockadr.sin_port = htons(port);
	sockadr.sin_addr.s_addr = htonl(INADDR_ANY);
	if (bind(sockfd, (struct sockaddr*) &sockadr, sizeof(sockadr)) == -1)
	{
		printf("%s", "error connect\n");
		close(sockfd);
		exit(1);
	}
	if (listen(sockfd, 10) == -1)
	{
		printf("%s", "error listen\n");
		close(sockfd);
		exit(1);
	}
	connectfd = 0;
	while (1)
	{
		connectfd = accept(sockfd, 0, 0);
		if (connectfd < 0)
		{
			printf("%s", "error fetch\n");
			close(sockfd);
			exit(0);
		}
		while (1)
		{
			buf[(c = read(connectfd, buf, 128))] = 0;
			if (!strcmp(buf, "exit"))
			{
				shutdown(sockfd, SHUT_RDWR);
				close(sockfd);
			}
			write(connectfd, buf, c);
			printf("%s\n", buf);
		}
	}
	return (0);
}
