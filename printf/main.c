#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int output_OG;
	int output_FT;

/////////////////////////////////
//				%x			   //
/////////////////////////////////
	ft_printf("------------%%x------------\n");
	unsigned nbr_x = 520;
	output_OG = printf("OG -> %x\n", nbr_x);
	output_FT = ft_printf("FT -> %x\n", nbr_x);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> 17 in hexadecimal = %x\n", 17);
	output_FT = ft_printf("FT -> 17 in hexadecimal = %x\n", 17);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> 999999 in hexadecimal = %x\n", 999999);
	output_FT = ft_printf("FT -> 999999 in hexadecimal = %x\n", 999999);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> 4294967293 in hexadecimal = %x\n", 4294967293u);
	output_FT = ft_printf("FT -> 4294967293 in hexadecimal = %x\n", 4294967293u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");


	output_OG = printf("OG -> %d\n", -100);
	output_FT = ft_printf("FT -> %d\n", -100);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %d\n", -15);
	output_FT = ft_printf("FT -> %d\n", -15);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %x\n", 10);
	output_FT = ft_printf("FT -> %x\n", 10);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 11);
	output_FT = ft_printf("FT -> %x\n", 11);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -42);
	output_FT = ft_printf("FT -> %x\n", -42);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 42);
	output_FT = ft_printf("FT -> %x\n", 42);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 15);
	output_FT = ft_printf("FT -> %x\n", 15);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 1000);
	output_FT = ft_printf("FT -> %x\n", 1000);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %x\n", 0);
	output_FT = ft_printf("FT -> %x\n", 0);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 1);
	output_FT = ft_printf("FT -> %x\n", 1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 9);
	output_FT = ft_printf("FT -> %x\n", 9);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %x\n", -1);
	output_FT = ft_printf("FT -> %x\n", -1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -2);
	output_FT = ft_printf("FT -> %x\n", -2);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %x\n", -101);
	output_FT = ft_printf("FT -> %x\n", -101);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", INT_MAX);
	output_FT = ft_printf("FT -> %x\n", INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", INT_MIN);
	output_FT = ft_printf("FT -> %x\n", INT_MIN);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", UINT_MAX);
	output_FT = ft_printf("FT -> %x\n", UINT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 100);
	output_FT = ft_printf("FT -> %x\n", 100);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -99);
	output_FT = ft_printf("FT -> %x\n", -99);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -16);
	output_FT = ft_printf("FT -> %x\n", -16);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -9);
	output_FT = ft_printf("FT -> %x\n", -9);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -14);
	output_FT = ft_printf("FT -> %x\n", -14);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 16);
	output_FT = ft_printf("FT -> %x\n", 16);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 99);
	output_FT = ft_printf("FT -> %x\n", 99);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 101);
	output_FT = ft_printf("FT -> %x\n", 101);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -11);
	output_FT = ft_printf("FT -> %x\n", -11);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -10);
	output_FT = ft_printf("FT -> %x\n", -10);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 17);
	output_FT = ft_printf("FT -> %x\n", 17);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
//				%X			   //
/////////////////////////////////
	ft_printf("------------%%X------------\n");
	unsigned nbr_X = 520;
	output_OG = printf("OG -> %X\n", nbr_X);
	output_FT = ft_printf("FT -> %X\n", nbr_X);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
}