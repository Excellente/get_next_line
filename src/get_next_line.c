/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 08:40:05 by emsimang          #+#    #+#             */
/*   Updated: 2016/11/01 08:42:03 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_reset(int *i, int *j)
{
	*i = 0;
	*j = 0;
}

int		ft_isempty(char *tmp)
{
	int i;

	i = 0;
	while (tmp[i] != '\0')
		i++;
	if (i > 0)
		return (1);
	return (0);
}

int		ft_last_buff(int *i, int *last, char buff[], char **line)
{
	ft_strclr(*line);
	while (buff[*last] == '\n')
		(*last)++;
	while (buff[*last] != '\n' && buff[*last] != '\0')
	{
		line[0][(*i)++] = buff[(*last)++];
	}
	if (buff[*last] == '\n')
		return (1);
	return (0);
}

int		get_next_line(int fd, char **line)
{
	int				i;
	int				ret;
	int				index;
	static	int		last;
	static	char	buff[BUFF_SIZE + 1];

	ft_reset(&i, &index);
	buff[BUFF_SIZE] = '\0';
	if (buff[last] != '\0')
		if ((ret = ft_last_buff(&i, &last, buff, line)) == 1)
			return (1);
	ft_strclr(buff);
	while (buff[index] != '\n' && (ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		ft_reset(&last, &index);
		while (buff[index] != '\0' && buff[index] != '\n')
		{
			line[0][i++] = buff[index++];
			last = index;
		}
	}
	line[0][i] = '\0';
	if (ret > 0)
		return (1);
	return (ret);
}
