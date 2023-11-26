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

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

//#define SIZE 300
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	const unsigned char	*str2;

	if (n == 0 || (!dest && !src))
		return (dest);
	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (const unsigned char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s);
	dst = (char *)malloc((sizeof(char) * len) + 1);
	if (!dst)
		return (0);
	ft_memcpy(dst, s, len);
	dst[len] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*result;

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

char *ft_get_next_line(int fd)
{
	char		*buff_str;
	char 		*join;
	char		*occurrent_buff;
	char		*occurrent_remaind;
	char		*tmp;
	static char *remainder;
	int 		buff_len;
	
	buff_str = malloc(buff_len);
	join = malloc(2);
	occurrent_buff = malloc(2);
	occurrent_remaind = malloc(2);
	int read_buf;	
	int i;
	int j;
	int flag;
	buff_len = 1000;
	
	
	i = 0;
	j = 0;
	flag = 1;
	join[0] = '\0';
	occurrent_buff[0] = '\0';
	occurrent_remaind[0] = '\0';
	
	if(remainder)
	{
		// while (remainder[i] != '\n' && remainder[i] != '\0')
		// {
		// 	i++;
		// }
		if ((occurrent_remaind = ft_strchr(remainder, '\n')))
		{
			*occurrent_remaind = '\0';
			//join = ft_strjoin(join, remainder);
			join = ft_strdup(remainder);
			flag = 0;
			//occurrent_remaind++;
			remainder = ft_strdup(++occurrent_remaind);
			free(occurrent_remaind);
			//remainder[0] = '\0';
			return join;
		}
		// if(remainder[i-1]=='\n')
		// {
		// 	while (j<i)
		// 	{
		// 		join[j] = remainder[j];
		// 		j++;
		// 	}
		// 	join[j] = '\0';
		// 	flag = 0;			
		// }
		else
		{
			join = ft_strjoin(join, remainder);
			free(remainder);
		}
		i = 0;
	}
	else
	{
		remainder = malloc(2);
		remainder[0] = '\0';
	}
	
	//join = ft_strjoin(join, remainder);
	while (flag && (read_buf = read(fd, buff_str, buff_len-1)))
	{
		buff_str[read_buf] = '\0';
		;
		if ((occurrent_buff = ft_strchr(buff_str, '\n')))
		{
			flag = 0;
			//buff_str[read_buf] = '\0';
			*occurrent_buff = '\0';
			//occurrent_buff++;
			remainder = ft_strdup(++occurrent_buff);
			free(occurrent_buff);
			// while (occurrent_buff[i] != '\0')
			// {
			// 	remainder[i] = occurrent_buff[i];
			// 	i++;
			// }
			// remainder[i-1] = '\0';
			//printf("Occurent = %s\n", occurrent);
		}
		// while (buff[i++] != '\0')
		// {
  		// 	if(buff[i] == '\n')
		// 	{
		// 		flag = 0;
		// 		buff[i] = '\0';
		// 		while (buff[++i] != '\0')
		// 		{
		// 			remainder[j++] = buff[i];
		// 			//j++;
		// 		}
		// 		remainder[j-1] = '\0';
		// 		//puts(remainder);
		// 		break;;
		// 	}
		//}
		i = 0;
		tmp = join;
		join = ft_strjoin(join, buff_str);
		free(tmp);
		//if (flag == 0)
		//	break;
		//puts(buff);
	}
	free(buff_str);
	//free(occurrent_buff);
	
	return join;
}

int main()
{
	int fd;
	char *line;
	line = "Hello";
	fd = open("text.txt", O_RDONLY);
	line = ft_get_next_line(fd);
	puts(line);
	free(line);
	line = ft_get_next_line(fd);
	puts(line);
	free(line);
	line = ft_get_next_line(fd);
	puts(line);
	free(line);
	line = ft_get_next_line(fd);
	puts(line);
	free(line);
	return 0;
}