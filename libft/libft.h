#ifndef LIBFT_H
#define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_atoi(const char *nptr);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strlen(const char *str);
int	strncmp(const char *s1, const char *s2, size_t n);
int	tolower(int c);
int	ft_toupper(int c);

char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t l);
size_t	ft_strlcpy(char *dest, const char *src, size_t l);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset2(void *s, int c, size_t n);


#endif