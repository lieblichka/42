/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: team0420 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 08:12:09 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/18 01:35:10 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFILLIT_H
# define LIBFILLIT_H

# define BUFF_SIZE 546
# define F01 34952
# define F02 61440
# define F03 58368
# define F04 19968
# define F05 35968
# define F06 19520
# define F07 52224
# define F08 50688
# define F09 27648
# define F10 19584
# define F11 35904
# define F12 51328
# define F13 50240
# define F14 35008
# define F15 17600
# define F16 59392
# define F17 57856
# define F18 36352
# define F19 11776

# include <unistd.h>
# include <fcntl.h>
# include "libft.h"

void			ft_figure_color(char **tetra, char c);
void			ft_change_figure_position(char **tetra);
int				ft_convert_str(char *str);
int				ft_count_square(char **tetra);
int				ft_valid_figure(char **tetra);
int				ft_figure_next_step(char **tetra);
char			**ft_valid_file(int fd, char **tetra);
char			**ft_create_finish_map(char **tetra);

#endif
