/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:37:18 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 01:47:18 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	num;

	num = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
		ft_putchar_fd(num + '0', fd);
}
// 	long	num;
// 	char	c;
// 	if (n == 0)
// 	{
// 		c = '0';
// 		ft_putchar_fd(c, fd);
// 		return;
// 	}
// 	else if (n == -2147483648)
// 	{
// 		ft_putstr_fd("-2147483648", fd);
// 		return;
// 	}
// 		else if (n < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		num = -num;
// 	}
// 	else
// 		num = (long long) n;
// 	if(num > 9)
// 	{
// 		ft_putnbr_fd(num/10, fd);
// 	}
// 	c = (num % 10) + '0';
// 	ft_putchar_fd(c, fd);	
// }
// int main(void)
// {
// 	int x = -1244434;
// 	ft_putnbr_fd(x, 1);
//     return (0);
// }