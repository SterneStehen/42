/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:02:05 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 03:14:29 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t l)
{
	size_t	i;

	i = 0;
	if (l == 0)
		return (ft_strlen(src));
	while (src[i] && i < (l - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
// int main()
// {
// 	char dest[10];
// 	const char *source = "Hello, World!";
// 	size_t result;
// 	result = ft_strlcpy(dest, source, sizeof(dest));
// 	printf("Copied string: %s\n", dest);
// 	printf("Total characters in source: %zu\n", result);
// }