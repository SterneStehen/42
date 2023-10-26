/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:37:18 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/26 16:37:18 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)

{
	long num;
	char c;
	if (n == 0)
	{
		c = '0';
		//write(fd, &c, 1);
		ft_putchar_fd(c, fd);
		return;
	}
	else if (n < 0)
	{
		c = '-';
		//write(1, &c, fd);
		ft_putchar_fd(c, fd);
		num = (long) (n * -1);
	}
	else
		num = (long) n;
	
	if(num > 9)
	{
		ft_putnbr_fd(num/10, fd);
	}
	c = (num % 10) + '0';
	//write(fd, &c, 1);
	ft_putchar_fd(c, fd);	
}

// int main(void)
// {
// 	int x = -1244434;
// 	ft_putnbr_fd(x, 1);
//     return (0);
// }