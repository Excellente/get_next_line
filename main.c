/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 09:18:38 by emsimang          #+#    #+#             */
/*   Updated: 2016/11/01 09:42:34 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

int main()
{
	int ret;
	int fd;
	char *line;

	line = (char *)malloc(sizeof(char) * 1024);
	fd = open("text.txt", O_RDONLY);
	ret = get_next_line(fd, &line);
	printf("%s\n\n", line);
	ret = get_next_line(fd, &line);
	printf("%s\n", line);
	close(fd);
	return (0);
}
