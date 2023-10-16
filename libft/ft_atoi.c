/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:46:08 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/16 20:46:08 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i, neg;
	unsigned long int num;
	
	i = 0;
	num = 0;
	neg = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 &&  nptr[i] <= 13))
	{		
			i++;
			printf("test1 i %d\n", i);
	}
	while (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
		{
			neg = -1*neg;
			i++;
		}
		else
		{
			i++;
		}
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num*10 + (nptr[i] - '0');
		i++;
		printf("test2 i = %d n = %d\n", i, num);
	}
	return (num * neg);	
}

int main()
{
	char s[20] = " 	-+--2349jl";
	printf("Atoi result is %d\n", atoi(s));
	printf("My_function is %d\n", ft_atoi(s));
}