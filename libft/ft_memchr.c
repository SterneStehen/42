/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:39:50 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/16 14:39:50 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	i = 0;
	const unsigned char *str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return (void *)(str + i);
		}
		i++;
	}
	return NULL;
}

// int main()
// {
// 	char str[17] = "Sergii Morarenko";
// 	char *ptr;
// 	ptr = memchr(str, 'o', sizeof(str));
// 	//ptr = ft_memchr(str, 'o', sizeof(str));
// 	printf("%ld", ptr-str);
// }