/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:08:15 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 14:25:25 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	to_copy;
	size_t	dst_len;
	size_t	src_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	if (src_len >= (size - dst_len))
		to_copy = size - dst_len - 1;
	else
		to_copy = src_len;
	while (j < to_copy)
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}
// int main() {
//     char dest[50] = "hello, ";
//     const char *src = "World!";
// 	size_t result;
//     result = ft_strlcat(dest, src, sizeof(dest));
// 	printf("result is %d\n", result);
//     printf("%s\n", dest);
//     return 0;
// }