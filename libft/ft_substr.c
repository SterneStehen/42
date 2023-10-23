/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:20:25 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/21 15:20:25 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	substr = malloc(len+1*sizeof(char));
	size_t i = 0;
	while (start < len)
	{
		substr[i++] = s[start++];
	}
	return substr;
}

int main()
{
	char const s1[20] = "sergiiMorarenko";
	
	unsigned int star = 3;
	size_t lenght = 8;
	char *resul = ft_substr(s1, star, lenght);
	puts(resul);

}
