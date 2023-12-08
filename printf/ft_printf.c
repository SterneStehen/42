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

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	count ;

	count = 0;
	if (!s)
		s = "(null)";
	while (*s)
	{
		ft_putchar(*s);
		count++;
		s++;
	}
	return (count);
}

int	ft_case(char str, va_list args)
{
	if (str == 'c')
		return (ft_putchar (va_arg (args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str == 'p')
		return (ft_putptr(va_arg(args, unsigned long long int)));
	else if (str == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (str == 'u' )
		return (ft_putunisignet(va_arg(args, int)));
	else if (str == 'X')
		return (ft_puthexadecimal(va_arg(args, unsigned long long int), 1));
	else if (str == 'x')
		return (ft_puthexadecimal(va_arg(args, unsigned long long int), 0));
	else if (str == '%')
		return (write (1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			count;
	int			i;

	i = 0;
	count = 0;
	va_start(ap, format);
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
	return (count);
}
