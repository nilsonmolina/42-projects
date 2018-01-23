#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int to_upper(char c)
{
	if ('a' <= c & c <= 'z')
		return c - 32;
	return c;
}

int to_lower(char c)
{
	if ('A' <= c & c <= 'Z')
		return c + 32;
	return c;
}

int is_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return 1;
	return 0;
}

int is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return 1;
	return 0;
}

int main()
{
	int i;
	char letter;

	i = 1;
	letter = 'a';
	while (letter <= 'z')
	{
		if (i % 2 == 1)
			ft_putchar(to_lower(letter));
		if (i % 2 == 0)
			ft_putchar(to_upper(letter));
		i++;
		letter++;
	}
	ft_putchar('\n');
}
