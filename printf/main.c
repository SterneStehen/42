#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int output_OG;
	int output_FT;

/////////////////////////////////
//  	  NO SPECIFIERS		   //
/////////////////////////////////
	ft_printf("----------------NO SPECIFIERS---------------\n");
	output_OG = printf("OG -> Test String \t TEeeEEEeEEsT String\n");
	output_FT = ft_printf("FT -> Test String \t TEeeEEEeEEsT String\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
}