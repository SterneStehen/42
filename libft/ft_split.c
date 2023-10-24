/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:44:55 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/23 13:44:55 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
 #include <stdlib.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int world_count;
	int ind_arr;
	int long_world;
	char **result;
	int tmp;
	int i;
	int j;
	int len;
	world_count = 1;
	long_world = 0;
	tmp = 0;
	len = 0;
	j = 0;
	i = 0;
	ind_arr = 0;
	while (s[len])
	{
		if (s[len] == c)
		{
			world_count++;
			len++;
			tmp = 0;
		}
		else
		{
			len++;
			tmp++;
			printf("test tmp = %d", tmp);
			if (tmp > long_world)
				long_world = tmp;
		}
	}
	printf("%c\n", s[0]);
	printf("test wold_counter = %d, long_world = %d\n", world_count, long_world);
	// result = (char**)malloc(long_world * world_count + 1);
 	// if(!result)
 	// 	return NULL;
	//i = 0;
	// while (s[i])
	// {
	// 	printf("%c\n", s[0]);
 	// 	if (s[i] != c)
 	// 	{
 	// 		result[0][0] = s[i++];
 	// 		printf("%c\n", s[i]);			
 	// 	}
 	// 	else
 	// 	{
 	// 		result[ind_arr++][j++] = '\0';
 	// 		j = 0;
 	// 	}
 	// }
	
	// for (int i = 0; i < ind_arr; i++)
	// {
	// 	for (int j = 0; i < long_world; i++)
	// 	{
	// 		printf("%c\n", s[i]);
	// 	}		
	// }	
	//return NULL;
}
// int main()
// {
// 	char str[] = "Hello_world_hay_your_day";
// 	char **result = ft_split(str, '_');
// }