/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:42:11 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/13 14:42:11 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char tmp = (char)c;
	i = 0;
	while (s[i])
	{
		if(s[i] == tmp)
		{
			//printf("test occurence is %c\n", s[i]);
			return (char *)&s[i];
		}
		i++;
	}
	if (s[i] == '\0')
		return (char *)&s[i];
	return 0;	
}

// int main()
// {
// 	char str[15] = "sergiiMorarenko";
// 	char *ptr = ft_strchr(str, 'o');
// 	//char *ptr = strchr(str, 'o');
// 	printf("first occurence is %ld", ptr - str);
// }