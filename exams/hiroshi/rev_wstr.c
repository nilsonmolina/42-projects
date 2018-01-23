#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int count_words(char *str)
{
	int new_word = 1;
	int count = 0;

	while (*str)
	{
		if (*str == ' ')
			new_word = 1;
		else if (!(*str == ' ' || *str == '\t') && new_word)
		{
			new_word = 0;
			count++;
		}
		str++;
	}
	return (count);
}

int count_word_length(char *str)
{
	int count = 0;

	while (!(*str == ' ' || *str == '\0'))
	{
		count++;
		str++;
	}
	return (count);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	char **words;
	char *str;
	str = argv[1];
	int word_count = count_words(str);
	words = (char **)malloc(sizeof(char *) * word_count + 1);
	words[word_count] = 0;
	int i = 0;
	int j;
	int length = 0;
	while (i < word_count)
	{
		length = count_word_length(str);
		words[i] = (char *)malloc(sizeof(char) * length + 1);
		words[i][length] = '\0';
		j = 0;
		while (!(*str == ' ' || *str == '\0'))
		{
			words[i][j] = *str;
			j++;
			str++;
		}
		if (*str == ' ')
			str++;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putstr(words[i]);
		if (i != 0)
			ft_putchar(' ');
		i--;
	}
	ft_putchar('\n');
	return (0);
}
