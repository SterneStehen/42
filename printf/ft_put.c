/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:34:42 by smoreron          #+#    #+#             */
/*   Updated: 2023/11/21 16:34:42 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


int ft_putchar(char c)
{
	write(1, &c, 1);
	return 1;
}

int ft_putstr(char *s)
{
	if (!s)
		s = "(null)";
	int count = 0;
	while (*s)
	{
		ft_putchar(*s);
		count++;
		s++;
	}
	return count;
}

int ft_putptr(void *ptr)

{
	int count;

	if(ptr == NULL)
		return(write(1,"(nil)", 5));
	count = 2;
	write(1, "0x", 2);
	count += ft_puthexadecimal((long int)ptr, 1);
	return (count);
}

int ft_puthexadecimal(unsigned int number, int low_up_case)
{
	int count;
	
	count = 0;
	char low_case[17] = "0123456789abcdef";
	char up_case[17] = "0123456789ABCDEF";
	// if (number == 0)
	// {
	// 	ft_putchar('0');
	// 	count++;
	// }
	if(number > 15)
		count += ft_puthexadecimal(number/16, low_up_case);
	if(low_up_case == 0)
		count += write(1, &low_case[number%16], 1);
	else 
		count += write(1, &up_case[number%16], 1);
	return count;
}

int ft_putnbr(int n)
{
	long long int	num;
	int count;

	count = 0;
	num = n;
	if (n < 0)
	{
		ft_putchar('-');
		num *= -1;
		count++;
	}
	if (num > 9)
	{
		count += ft_putnbr(num / 10);
		count += ft_putnbr(num % 10);
	}
	else
	{
		count += ft_putchar(num + '0');
	}
	return count;
}

int ft_putunisignet(unsigned int n)
{
	static char number[11] = "0123456789";
	int count;

	count = 0;
	if(n > 9)
	{
		count += ft_putunisignet(n/10);
	}
	count++;
	write(1, &number[n%10], 1);
	
	return (count);
}