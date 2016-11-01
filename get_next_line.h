/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 08:48:28 by emsimang          #+#    #+#             */
/*   Updated: 2016/11/01 09:45:53 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

#include <unistd.h>
# include "../libft/libft.h"

int		ft_isempty(char *tmp);
int		ft_last_buff(int *i, int *last, char buff[], char **line);
int		get_next_line(const int fd, char **line);
void	ft_reset(int *i, int *j);

#endif
