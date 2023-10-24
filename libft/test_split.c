#include <stdlib.h>
#include <string.h>

static int ft_count_words(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return count;
}

char **ft_split(char const *s, char c)
{
    char **result;
    int word_count = ft_count_words(s, c);
    int idx = 0;

    if (!s || !(result = (char **)malloc(sizeof(char *) * (word_count + 1))))
        return NULL;

    while (*s)
    {
        if (*s != c)
        {
            const char *start = s;
            while (*s && *s != c)
                s++;
            result[idx] = (char *)malloc(s - start + 1);
            if (!result[idx])
            {
                while (idx > 0)
                    free(result[--idx]);
                free(result);
                return NULL;
            }
            strncpy(result[idx], start, s - start);
            result[idx][s - start] = '\0';
            idx++;
        }
        else
        {
            s++;
        }
    }
    result[idx] = NULL;
    return result;
}
#include <stdio.h>

// Предположим, что функция ft_split уже определена где-то выше или в другом файле

char **ft_split(char const *s, char c);

int main(void)
{
    char *str = "Hello_World!_This_is_a_test";
    char delimiter = '_';

    char **result = ft_split(str, delimiter);

    if (!result)
    {
        printf("Error in splitting the string.\n");
        return 1;
    }

    for (int i = 0; result[i]; i++)
    {
        printf("Substring %d: %s\n", i + 1, result[i]);
        free(result[i]);  // Освобождаем память для каждой подстроки
    }

    free(result);  // Освобождаем память для массива указателей

    return 0;
}
