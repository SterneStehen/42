/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:13:26 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 15:42:31 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dest;
	s = src;
	if (!s && !d)
		return (NULL);
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
// 	char s[16] = "SergiiMorarenko";
// 	char s1[16] = "SergiiMorarenko";
// 	printf("befor memmove = %s\n", s);
// 	printf("befor ft_memmove = %s1\n", s1);
// 	memmove(s+1, s, 5);
// 	ft_memmove(s1+1, s1, 5);
// 	printf("after memmove = %s\n", s);
// 	printf("after ft_memmove = %s1\n", s1);
// }