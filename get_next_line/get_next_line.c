/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:47:39 by smoreron          #+#    #+#             */
/*   Updated: 2023/11/28 03:38:58 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:47:43 by smoreron          #+#    #+#             */
/*   Updated: 2023/11/22 23:47:43 by smoreron         ###   ########.fr       */
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

// #define BUFFER_SIZE 300


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
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t				i;
// 	unsigned char		*str1;
// 	const unsigned char	*str2;
// 	if (n == 0 || (!dest && !src))
// 		return (dest);
// 	i = 0;
// 	str1 = (unsigned char *)dest;
// 	str2 = (const unsigned char *)src;
// 	while (i < n)
// 	{
// 		str1[i] = str2[i];
// 		i++;
// 	}
// 	return (dest);
// }

// char	*ft_strdup(const char *s)
// {
// 	char	*dst;
// 	size_t	len;

// 	len = ft_strlen(s);
// 	dst = (char *)malloc((sizeof(char) * len) + 1);
// 	if (!dst)
// 		return (0);
// 	ft_memcpy(dst, s, len);
// 	dst[len] = '\0';
// 	return (dst);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*result;
	
	if (!s1 && !s2)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	result = (char *) malloc(sizeof(char) * (i + j + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s1)
		result[i++] = *s1++;
	while (*s2)
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

void ft_check_remainder (char **remainder, char  **line, int *flag)
{
	char		*occurrent_remaind;

	//occurrent_remaind = NULL;

 	if(*remainder)
	{
		if ((occurrent_remaind = ft_strchr(*remainder, '\n')))
		{
			*flag = 0;
			*occurrent_remaind = '\0';
			*line = ft_strjoin(*remainder, "\n");
		}
		else
		{
			// line = ft_strjoin(line, *remainder);
			// return line;
			*line = ft_strjoin(*line, *remainder);
            free(*remainder);
            *remainder = NULL;
            //return line;
		}
	}
	else
	{
		free(*remainder);
		*remainder = NULL;
	}
	//return line;
}

char *get_next_line(int fd)
{
	char		*buff_str;
	char 		*join;
	char		*occurrent_buff;
	char		*temp;
	static char *remainder;
	int 		read_len;	
	int 		flag;
	
	
	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0 || fd > 4095)
	{
		return (NULL);
	}
	flag = 1;
	buff_str = ft_strnew(BUFFER_SIZE);
	if(!buff_str)
	 	return NULL;
	join = ft_strnew(1);
	if(!join)
	{
		free(buff_str);
	 	return NULL;
	}
	occurrent_buff = NULL;
	ft_check_remainder(&remainder, &join, &flag);
	while (flag == 1)
	{
		read_len = read(fd, buff_str, BUFFER_SIZE);
		if (read_len <= 0)
		{
			free(buff_str);
			free(join);
			free(remainder);
			return (NULL);
		}
		buff_str[read_len] = '\0';
		if ((occurrent_buff = ft_strchr(buff_str, '\n')))
		{
			flag = 0;
			//*occurrent_buff = '\0';
			remainder = ft_strdup(++occurrent_buff);
			//occurrent_buff++;
			*occurrent_buff = '\0';
		} 
		temp = join;
		join = ft_strjoin(temp, buff_str);
		//join = ft_strjoin(temp, buffer);
		free (temp);
		if (!join)
			return (NULL);
	}
	free(buff_str);
	if (join == NULL)
	{
		free(join);
		return (NULL);
	}
	return join;
}

// int main()
// {
// 	int fd;
// 	char *line;
// 	line = "Hello";
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
// 	return 0;
// }