/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:42:11 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 14:09:01 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include "libft.h"

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

// int main()
// {
// 	char str[15] = "sergiiMorarenko";
// 	char *ptr = ft_strchr(str, 'n');
// 	//char *ptr = strchr(str, 'o');
// 	printf("first occurence is %ld", ptr - str);
// }