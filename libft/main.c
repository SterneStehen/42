#include "libft.h"
// #include <strlib.h>

// int main()
// {
	// char *str = "sergiiMorarenko";
	// printf("len string is %d\n", ft_strlen(str));
	// char *s = "sergiiMorarenko";
	// char d[16];
	// printf("befor use ft_strlcpy : %s\n", d);
	// ft_strlcpy(d, s, sizeof(d));
	// printf("after use ft_strlcpy: %s\n", d);

	// int i;
	
	// i = 0;
	// int *arr = (int *)ft_calloc(5, sizeof(int));
	// if (arr == NULL)
	// {
	// 	printf("Erorr memory");
	// 	return 1;
	// }
	// while (arr[i] != '\0')
	// {
	// 	if (arr[i] != 0)
	// 	{
	// 		printf("ERROR");
	// 		//free(arr);
	// 		return 1;
	// 	}		
	// 	i++;
	// }
	// printf("success! memory allocated\n");
	// //free(arr);
	// return 0;
	// //puts('_________________________');

	// const char str1[] = "Sergii";
	// const char str2[] = "Morarenko";
	// char *res;
	// res = ft_strjoin(str1, str2);
	// puts(res);	
	// free(res);
	
	// char str[25] = "Hello_world_haw_your_day";
	// char *test = ft_strdup(str);
	// puts(test);
	// char **result = ft_split(str, '_');
// }
// int main()
// {
// 	const char *source = "Hello, World!_test";
//     char destination[20];
//     size_t len;

//     len = ft_strlcpy(destination, source, sizeof(source));  

//     printf("Copied string: %s\n", destination);
//     printf("Length of the source string: %zu\n", len);
// }
// #include <stdio.h>

// int main()
// {
//     char *original = "Hello, World!";
//     char *substring = ft_substr(original, 7, 5);
    
//     printf("Original: %s\n", original);
//     printf("Substring: %s\n", substring);

//     free(substring); 
//     return 0;
// }

// int main(void)
// {
//     char **words;
//     char *str = "Hello,how,are,you,today?";
//     char delim = ',';
//     int i = 0;

//     words = ft_split(str, delim);
//     if (!words)
//     {
//         printf("Error in splitting\n");
//         return (1);
//     }

//     while (words[i])
//     {
//         printf("Word[%d]: %s\n", i, words[i]);
//         free(words[i]);
//         i++;
//     }
//     free(words);
//     return (0);
// }
int main(void)
{
    char *source = "abcdefgh";
    char *result = ft_strmapi(source, to_upper_at_even_index);
    printf("%s\n", result); // Ожидаемый вывод: "AbCdEfGh"
    free(result);
    return (0);
}