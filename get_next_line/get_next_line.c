/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:47:39 by smoreron          #+#    #+#             */
/*   Updated: 2023/11/22 23:47:39 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_SIZE 10

char *get_next_line(int fd)
{
	char *buffer = malloc(BUFF_SIZE+1);
	char *text = malloc(20);
	int size_buf;
	size_buf = read(fd, buffer, BUFF_SIZE);
	
	return buffer;
}

int main()
{
	int fd;
	char *line;
	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
}