/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:53 by smoreron          #+#    #+#             */
/*   Updated: 2023/11/21 15:34:53 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
// # ifndef FT_PRINTF_H
// # define FT_PRINTF_H

// #include "ft_printf.h"
// #include <stdio.h>
// #include <stdarg.h>
// #include <unistd.h>
// #include <stddef.h>

int ft_printf(const char *format, ...);
int	ft_puthexadecimal(unsigned int number, int low_up_case);
int	ft_putptr(void *ptr);
int ft_putchar(char c);
int ft_putnbr(int n);
int ft_putstr(char *s);
int ft_putunisignet(unsigned int n);
int ft_case(char str, va_list args);


#endif