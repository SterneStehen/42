/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:13:26 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/12 23:13:26 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	i = 0;
	char *d = dest;
	const char*s = src;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int main()
{
	char s[16] = "SergiiMorarenko";
	char s1[16] = "SergiiMorarenko";
	printf("befor memmove = %s\n", s);
	printf("befor ft_memmove = %s1\n", s1);
	memmove(s+1, s, 5);
	ft_memmove(s1+1, s1, 5);
	printf("after memmove = %s\n", s);
	printf("after ft_memmove = %s1\n", s1);
}