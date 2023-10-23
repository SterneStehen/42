/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:41:00 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/23 01:41:00 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int i;
	i = 0;
	res = (char*)malloc(sizeof(s1));
	if(!res)
		return NULL;
	while (s1[i])
	{
		if (s1[i] == set[0])
		{
			i++;
			continue;
		}
		else
		{
			res[i] = s1[i]; 
			i++;
		}
	}
	res[i] = '\0';
	return res;	
}

int main()
{
	char const str1[] = "pHellop";
	char const str2[] = "p";
	char *new_str = ft_strtrim(str1, str2);
	puts(new_str);
}