#include "libft.h"
#include <stdio.h>

int main()
{
	char *str = "sergiiMorarenko";
	printf("len string is %d\n", ft_strlen(str));
	

	char *s = "sergiiMorarenko";
	char d[16];
	printf("befor use ft_strlcpy : %s\n", d);
	ft_strlcpy(d, s, sizeof(d));
	printf("after use ft_strlcpy: %s\n", d);
}

