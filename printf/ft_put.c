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

int	ft_put_print_ptr(unsigned long long num)
{
	int	count;

	count = 0;
	if (num > 15)
	{
		count += ft_put_print_ptr((num / 16));
		count += ft_put_print_ptr((num % 16));
	}
	else
	{
		if (num < 10)
		{
			count += ft_putchar(num + '0');
		}
		else
		{
			count += ft_putchar(num - 10 + 'a');
		}
	}
	return (count);
}

int	ft_putptr(unsigned long long ptr)
{
	int	count;

	count = write(1, "0x", 2);
	if (ptr == 0)
		count += write(1, "0", 1);
	else
		count += ft_put_print_ptr(ptr);
	return (count);
}

int	ft_puthexadecimal(unsigned int n, int low_up_case)
{
	int				count;
	long long int	num;

	count = 0;
	num = (long long int)n;
	if (num > 15)
	{
		count += ft_puthexadecimal((num / 16), low_up_case);
		count += ft_puthexadecimal((num % 16), low_up_case);
	}
	else
	{
		if (num < 10)
			count += ft_putchar(num + '0');
		else
		{
			if (low_up_case == 0)
				count += ft_putchar(num - 10 + 'a');
			else
				count += ft_putchar(num - 10 + 'A');
		}
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long long int	num;
	int				count;

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
	return (count);
}

int	ft_putunisignet(unsigned int n)
{
	static char	number[11] = "0123456789";
	int			count;

	count = 0;
	if (n > 9)
	{
		count += ft_putunisignet (n / 10);
	}
	count++;
	write(1, &number[n % 10], 1);
	return (count);
}
