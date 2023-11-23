/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:39:05 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 14:08:24 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
// int main() {
//     char buffer1[10] = "Hello";
// 	char buffer2[10] = "World";
//     printf("Befor zero\n");
//     printf("buffer1: %s\n", buffer1);
//     printf("buffer2: %s\n", buffer2);
//     bzero(buffer1, sizeof(buffer1));
// 	ft_bzero(buffer2, sizeof(buffer2));
//     printf("\nAfter zero\n");
//     printf("buffer1: %s\n", buffer1); // 
//     printf("buffer2: %s\n", buffer2); // 
//     return 0;
// }
