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

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int s, e, i;
	s = 0;
	i = 0;
	e = 0;
	char *res;
	if (!s1 || !set)
		return NULL;
	while (s1[e+1])
		e++;
	while (s1[s] == set[0])
		s++;
	while (s1[e] == set[0] && s < e)
		e--;
	res =  (char*)malloc(s+e+1);
	if(!res)
		return NULL;
	while (s <= e)
	{
		res[i++] = s1[s++];
	}
	res[i] = '\0';
	return res;
}

// int main()
// {
// 	char const str1[] = "pppHelppLop";
// 	char const str2[] = "p";
// 	char *new_str = ft_strtrim(str1, str2);
// 	puts(new_str);
// }