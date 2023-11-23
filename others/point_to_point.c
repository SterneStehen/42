#include <stdio.h>
#include <stdlib.h>
char *ft_funct(char *n)
{
	int i;
	i = 0;

	while(i<5)
	{
		n[i] = 'O';
		i++;
	}
	n[i] = '\0';
	return n;
}

int ft_funct2(char **line)
{
	int j;
	j = 0; 

	while(j<5)
	{
		(*line)[j] = 'S';
		j++;
	}
	(*line)[j] = '\0';
	return (0);
}

int main()
{
	char name[] = "sergii";
	char *new = ft_funct(name);
	char *name2 = malloc(5);
	ft_funct2(&name2);
	printf("%s\n", new);
	printf("%c\n", name[1]);
	printf("%s\n", name2);
	free(name2);
	return 0;
}