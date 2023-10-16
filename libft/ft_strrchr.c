/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:36:24 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/16 12:36:24 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *tmp;
	int i;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			tmp = (char *)&s[i];
		i++;
	}
	if	(c == '\0')
		return (char *)&s[i];
	return (tmp);
	
}

// int main()
// {
// 	const char str[15] = "SergiiMorarenko";
// 	char *ptr = strrchr(str, 'e');
// 	//char *ptr = ft_strrchr(str, 'e');
// 	printf("result occurent is %ld", ptr - str);

// }