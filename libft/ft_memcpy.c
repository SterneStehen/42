/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:20:31 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 15:42:07 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

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

// int main()
// {
// 	char d[10] = "Sergii";
// 	char s[10] = "Morarenko";
// 	char d1[10] = "Sergii";
// 	char s1[10] = "Morarenko";
// 	size_t num = 3;
// 	printf("Befor func: %s\n", d);
// 	printf("Befor My_func: %s\n", d1);
// 	memcpy(d, s, num);
// 	ft_memcpy(d1, s1, num);
// 	printf("After func: %s\n", d);
// 	printf("After My_func: %s", d);
// }