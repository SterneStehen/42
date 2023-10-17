/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:56:30 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/17 15:56:30 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strdup(const char *s)
{
	char *pnt;
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		pnt[i] = s[i];
		i++;
	}
	pnt[i] = '\0';
	return (char *)pnt;	
}
int main()
{
	const char str[20] = "SergiiMorarenko";
	char *new = "1";
	printf("Befor string is %s\n", new);
	new = ft_strdup(str);
	printf("new string is %s", new);
}