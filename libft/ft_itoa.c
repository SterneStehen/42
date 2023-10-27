/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 03:12:18 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/26 03:12:18 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	
	if (n == 0)
		return 1;
	if (n < 0)
	{
    	len++;
		n = -1 * n;
	}
	while (n > 0)
	{
		n = n/10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int	len;
	char	*res;
	unsigned int	num;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	len = ft_intlen(n);
	res = (char *)malloc(len+1);
	if (!res)
	{
		return NULL;
	}
	if (n == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int) n;
	res[len] = '\0';
	while (num > 0)
	{
		res[--len] = (num%10) + '0';
		num /= 10;
	}
	return (res);
}

// int main()
// {
// 	//printf("len = %d\n", ft_intlen(1234));
// 	printf("char = %s", ft_itoa(-1234));
// }