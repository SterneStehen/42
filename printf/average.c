#include <stdio.h>
#include <stdarg.h>

float ft_average(int n, ...)
{
	int total;
	va_list ap;
	int i;

	i = 0;
	total = 0;
	va_start(ap, n);
	while (i < n)
	{
		total += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (float)total/n;
}

int main()
{
	float result;
	result = ft_average(5, 10, 15, 20, 25, 30);
	printf("average age is %.2f", result);
}