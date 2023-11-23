/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:23:35 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 01:46:42 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	int i = 0;
// 	char str[15] = "SergiiMorarenko";
// 	char str1[15] = "SergiiMorarenko";
// 	char str2[15] = "SergiiMorarenko";
// 	size_t num = 2;
// 	printf("my_func1 =\n %s\n", ft_memset(str1, 'd', 2));
// 	printf("func =\n %s\n", memset(str, 'd', 2));
// 	printf("my_func2 =\n %s\n", ft_memset2(str2, 'd', 2));
// 	printf("func after while=\n");
// 	while(str[i] != '\0')
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("MY_func after while=\n");
// 	i=0;
// 	while(str1[i] != '\0')
// 	{
// 		printf("%c", str1[i]);
// 		i++;
// 	}
// }