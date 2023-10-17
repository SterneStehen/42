#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "libft.h"


 void *calloc(size_t nmemb, size_t size)
 {
	void *arr;
	arr = (void *)malloc(size * nmemb);
	if (arr == NULL)
	{
		return NULL;
	}
	ft_bzero(arr, sizeof(nmemb*size));
	return(arr);
 }

int main()
{
	int *arr = (int *)calloc(5, sizeof(int));
	for(int i = 0; arr[i] != '\0'; i++)
	{
		if(arr[i] != 0)
			return 0;
			free(arr);
	}
	printf("success! memory ...");
}