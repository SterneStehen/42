/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:47:43 by smoreron          #+#    #+#             */
/*   Updated: 2023/12/01 06:03:25 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <fcntl.h>

#include "get_next_line.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(size + 1);
	if (! str)
		return (NULL);
	while (i <= size)
		str[i++] = '\0';
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_lennewstr(char	*remainder)
{
	int	i;

	i = 0;
	while (remainder[i] != '\0' && remainder[i] != '\n')
	{
		i++;
	}
	return (i);
}

int	ft_read( int fd, char	**buffer)
{
	int	len;

	len = read(fd, *buffer, BUFFER_SIZE);
	if (len < 0)
	{
		free (*buffer);
		buffer = (NULL);
		return (0);
	}
	(*buffer)[len] = '\0';
	return (len);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (0);
	while (*s++)
	{
		if (*s == (char)c)
			return (s);
	}
	if ((char)c == '\0')
		return (s);
	return (NULL);
}