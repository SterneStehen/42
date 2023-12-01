#include "get_next_line.h"

int main()
{
	int fd;
	char *line;
	printf("test");
	line = ft_strnew(1);
	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	puts(line);
	free(line);
	line = get_next_line(fd);
	puts(line);
	free(line);
	line = get_next_line(fd);
	puts(line);
	free(line);
	line = get_next_line(fd);
	puts(line);
	free(line);
	return 0;
}