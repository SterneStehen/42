/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:56:30 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 14:21:40 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#include "libft.h"

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
// int main()
// {
// 	const char str[20] = "SergiiMorarenko";
// 	char *new = "1";
// 	printf("Befor string is %s\n", new);
// 	new = ft_strdup(str);
// 	printf("new string is %s", new);
// }
