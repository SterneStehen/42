/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:17:44 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/30 03:09:11 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"
//#include <strings.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb && size && (size_t)-1 / nmemb < size)
		return (NULL);
	array = (void *) malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	ft_bzero(array, nmemb * size);
	return (array);
}

// int main()
// {
// 	int i;	
// 	i = 0;
// 	int *arr = (int *)calloc(5, sizeof(int));
// 	if (arr == NULL)
// 	{
// 		printf("Erorr memory");
// 		return 1;
// 	}
// 	while (arr[i] != '\0')
// 	{
// 		if (arr[i] != 0)
// 		{
// 			printf("ERROR");
// 			free(arr);
// 			return 1;
// 		}		
// 		i++;
// 	}
// 	printf("success! memory allocated\n");
// 	free(arr);
// 	return 0;
// }
