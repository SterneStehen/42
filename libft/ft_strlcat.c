/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:08:15 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/13 13:08:15 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i,j, dst_len, src_len;
	
	i = 0;
	j = 0;

	while (src[i])
	{
		i++;
	}
	src_len = i;
	i = 0;
	while (dst[i] && i < size)
	{
		i++;
	}
	dst_len = i;	
	
	if ((dst_len) == size)
		return(dst_len+src_len);

	while (src[j] && ((i + j) <= (size-1)))
		{
			dst[i+j] = src[j];
			j++;
		}
		dst[i+j] = '\0';		
	
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