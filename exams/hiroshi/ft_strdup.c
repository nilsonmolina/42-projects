#include <stdlib.h>

int ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str++)
		size++;
	return size;
}

char *ft_strdup(char *src)
{
	int i;
	int size;
	char *new;

	size = ft_strlen(src);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (0);
	new[size] = '\0';
	i = 0;
	while (*src)
		new[i++] = *src++;
	return (new);
}
