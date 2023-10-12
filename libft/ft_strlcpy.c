/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:02:05 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/12 15:02:05 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>


char *ft_strlcpy(char *dest, const char *src, size_t l)
{
	if (l == 0)
		return (0);
	size_t i;
	i = 0;
	while (src[i] != '\0' && i < (l-1))
	{
		*dest++ = *src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
