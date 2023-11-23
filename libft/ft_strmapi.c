/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:46:40 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 14:09:54 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>

// char to_upper_at_even_index(unsigned int i, char c)
// {
//     if (i % 2 == 0 && c >= 'a' && c <= 'z') 
// 	{
//         return c - 'a' + 'A'; 
//     }
//     return c;
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*result;

	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int main(void)
// {
//     char *source = "abcdefgh";
//     char *result = ft_strmapi(source, to_upper_at_even_index);
//     printf("%s\n", result); 
//     free(result);
//     return (0);
// }