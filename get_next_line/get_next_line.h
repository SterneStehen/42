/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:47:36 by smoreron          #+#    #+#             */
/*   Updated: 2023/12/01 05:48:26 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
 #include <stdlib.h>
//  #include <fcntl.h>
//  #include <stdio.h>
//  #include <stdbool.h>


# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 90
# endif

size_t	ft_strlen(const char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_returnline(char *remainder);
char	*ft_remainderline(char *remainder);
char	*ft_newline(int fd, char *remainder);
char	*get_next_line(int fd);
char 	*ft_strnew(size_t size);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int ft_read(int fd,char  **buffer);
int ft_lennewstr(char *remainder);

#endif