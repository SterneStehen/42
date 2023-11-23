/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 03:12:18 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 16:46:21 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static char	*ft_char(char *str, unsigned int n, long int l)
{
	str[l] = '\0';
	while (n > 0)
	{
		str[--l] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -1 * n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	num;
	char			*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
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
	res = ft_char(res, num, len);
	return (res);
}

// int main()
// {
// 	//printf("len = %d\n", ft_intlen(1234));
// 	printf("char = %s", ft_itoa(-1234));
// }