/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:21:47 by smoreron          #+#    #+#             */
/*   Updated: 2023/11/21 17:48:38 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdarg.h>

int	ft_case(char str, va_list args)
{
	switch (str)
	{
	case 'c':
		return(ft_putchar(va_arg(args, int))); 
	case 's':
		return(ft_putstr(va_arg(args, char *)));
	case 'p':
		return(ft_putptr(va_arg(args, void *)));
	case 'd':
		return(ft_putnbr(va_arg(args, int)));
	case 'i':
		return(ft_putnbr(va_arg(args, int)));
	case 'u':
		return(ft_putunisignet(va_arg(args, int)));
	case 'x':
		return(ft_puthexadecimal(va_arg(args, int), 0));
	case 'X':
		return(ft_puthexadecimal(va_arg(args, int), 1));
	case '%':
		return (write(1, "%", 1));
	}
	return (0);
}

int ft_printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	int count;
	int i;

	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_case(format[i], ap);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	return count;
}
