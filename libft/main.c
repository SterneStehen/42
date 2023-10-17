#include "libft.h"


int main()
{
	char *str = "sergiiMorarenko";
	printf("len string is %d\n", ft_strlen(str));
	

	char *s = "sergiiMorarenko";
	char d[16];
	printf("befor use ft_strlcpy : %s\n", d);
	ft_strlcpy(d, s, sizeof(d));
	printf("after use ft_strlcpy: %s\n", d);

	int i;
	
	i = 0;
	int *arr = (int *)ft_calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Erorr memory");
		return 1;
	}
	while (arr[i] != '\0')
	{
		if (arr[i] != 0)
		{
			printf("ERROR");
			//free(arr);
			return 1;
		}		
		i++;
	}
	printf("success! memory allocated\n");
	//free(arr);
	return 0;

}

