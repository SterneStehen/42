/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:41:00 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 15:45:42 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include "libft.h"

static int	ft_isinset(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		s;
	int		e;
	int		i;

	s = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	e = ft_strlen(s1) - 1;
	while (s1[s] && ft_isinset(s1[s], set))
		s++;
	while (e >= s && ft_isinset(s1[e], set))
		e--;
	res = (char *) malloc (e - s + 2);
	if (!res)
		return (NULL);
	while (s <= e)
	{
		res[i++] = s1[s++];
	}
	res[i] = '\0';
	return (res);
}

// int main()
// {
// 	char const str1[] = "pppHelppLop";
// 	char const str2[] = "p";
// 	char *new_str = ft_strtrim(str1, str2);
// 	puts(new_str);
// }