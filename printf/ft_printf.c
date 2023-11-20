/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:21:47 by smoreron          #+#    #+#             */
/*   Updated: 2023/11/18 19:21:47 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <stdarg.h>


int ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_putnrb(int n)
{
	long long int	num;

	num = n;
	if (n < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}
int ft_putstr(char *s)
{
	int counter = 0;
	while (*s)
	{
		ft_putchar(*s);
		count++;
		s++;
	}
	return counter;
}
void ft_putunisignet(unisigned int n)
{
	static char number[11] = "0123456789";

	if(n > 9)
	{
		ft_putunisignet(n/10);
	}
	write(1, &number[n%10], 1);
}
int ft_case(char str, va_list arg)
{
	switch (str)
	{
	case '%':
		return (write(1, "%", 1));
	case 'c':
		ft_putchar(va_arg(args, int));
		return(1); 
	case 's':
		return(ft_putstr(va_arg(args, char *)));
	case 'p':
		return(ft_putnrb(va_arg(args, void *)));
	case 'd':
		return(ft_putnrb(va_arg(args, int)));
	case 'i':
		return(ft_putnrb(va_arg(args, int)));
	case 'u':


	
	default:
		break;
	}
}
int ft_printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	int count;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += ft_case(format, ap);
		}
	}
	
	return 0;
}
