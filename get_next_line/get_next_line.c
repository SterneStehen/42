/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:47:39 by smoreron          #+#    #+#             */
/*   Updated: 2023/12/01 05:55:11 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//  #include <stdio.h>
//  #include <stdlib.h>
//  #include <fcntl.h>
//  #include <stdio.h>
// #include <stdlib.h>
// #include <fcntl.h>
// #include <unistd.h>
// #include <stdbool.h>
// #define BUFFER_SIZE 50
// char *ft_strnew(size_t size)
// {
// 	char *str;
// 	size_t i;
// 	i = 0;
// 	str = malloc(size + 1);
// 	if(!str)
// 		return NULL;
// 	while (i <= size)
// 		str[i++] = '\0';
// 	return (str);
// }

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!str)
// 		return (0);
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strchr(char *s, int c)
// {
// 	if (!s)
// 		return (0);
// 	while (*s++)
// 	{
// 		if (*s == (char)c)
// 			return s;	
// 	}
// 	if ((char)c == '\0')
// 		return s;
// 	return (NULL);
// }

// char	*ft_strjoin_free(char *s1, char *s2)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*str;

// 	if (s2 == 0)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	if (s1 == 0)
// 		s1 = ft_strnew(1);
// 	str = ft_strnew((ft_strlen(s1) + ft_strlen(s2)) + 1);
// 	while (s1[i])
// 	{
// 		str[i] = s1[i];
// 		i++;
// 	}
// 	while (s2[j])
// 	{
// 		str[i] = s2[j];
// 		i++;
// 		j++;
// 	}
// 	str[i] = '\0';
// 	free(s1);
// 	return (str);
// }

char	*ft_strjoin_free( char	*s1, char	*s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s2 == 0)
		return (NULL);
	i = 0;
	j = 0;
	if (s1 == 0)
		s1 = ft_strnew(1);
	str = ft_strnew((ft_strlen(s1) + ft_strlen(s2)) + 1);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}

char	*ft_newline(int fd, char *remainder)
{
	char	*buffer;
	int		len;
	int		flag;

	flag = 1;
	buffer = ft_strnew(BUFFER_SIZE + 1);
	while (flag != 0)
	{
		len = ft_read(fd, &buffer);
		remainder = ft_strjoin_free(remainder, buffer);
		if ((ft_strchr (remainder, '\n')) || len == 0)
			flag = 0;
	}
	free(buffer);
	return (remainder);
}

char	*ft_returnline(char *remainder)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	if (remainder[0] == 0)
		return (NULL);
	j = ft_lennewstr(remainder);
	s = ft_strnew((j + 1));
	while (remainder[i])
	{
		s[i] = remainder[i];
		if (remainder[i] == '\n')
		{
			s[i + 1] = '\0';
			break ;
		}
		i++;
	}
	return (s);
}

char	*ft_remainderline(char *remainder)
{
	char	*s;
	int		i;
	int		j;
	int		len;

	j = 0;
	len = ft_strlen(remainder);
	s = NULL;
	i = ft_lennewstr (remainder);
	if (!remainder [i])
	{
		free(remainder);
		return (NULL);
	}
	s = ft_strnew((len - i + 1));
	while (remainder[i] != '\0')
		s[j++] = remainder[++i];
	s[j] = '\0';
	free(remainder);
	return (s);
}

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*join;

	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
	{
		free (remainder);
		remainder = NULL;
		return (NULL);
	}
	remainder = ft_newline(fd, remainder);
	join = ft_returnline(remainder);
	remainder = ft_remainderline(remainder);
	return (join);
}

// int main()
// {
// 	int fd;
// 	char *line;
// 	fd = open("text.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	puts(line);
// 	free(line);
// 	line = get_next_line(fd);
// 	puts(line);
// 	free(line);
// 	line = get_next_line(fd);
// 	puts(line);
// 	free(line);
// 	line = get_next_line(fd);
// 	puts(line);
// 	free(line);
// 	line = get_next_line(fd);
// 	puts(line);
// 	free(line);line = get_next_line(fd);
// 	puts(line);
// 	free(line);
// 	return 0;
// }
