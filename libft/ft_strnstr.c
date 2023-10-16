/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:09:24 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/16 19:09:24 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i, j, count;
	i = 0;
	j = 0;
	count = 0;
	
	while (needle[count] != '\0')
	{
		count++;
	}
	if (count == 0)
	{
		return (char *)haystack;
	}
	
	//printf("test count = %d\n", count);
	while (haystack[i] && i<len)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0' && i+j < len && haystack[i+j] == needle[j])
			{
				j++;
			}
			//printf("test j = %d\n", j);
			if (j == count)
			{
				return(char *)&haystack[i];
			}
			j = 0;			
		}
		i++;
	}
	return NULL;
}

// int main()
// {
// 	char hay[17] = "SergiiMorarenko";
// 	char need[5] = "Mor";
// 	char *result1;
// 	result1 = strstr(hay, need);
// 	char *result2;
// 	result2 = ft_strnstr(hay, need, sizeof(hay));
// 	printf("result function is %s\n", result1);
// 	printf("result MY_function is %s\n", result2);
// }