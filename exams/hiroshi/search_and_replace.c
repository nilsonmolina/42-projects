#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int ft_strlen(char *str)
{
	int size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	return (size);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	char *str1 = argv[1];
	char *str2 = argv[2];
	char *str3 = argv[3];
	
	if (ft_strlen(str2) > 1 || ft_strlen(str3) > 1)
	{
		ft_putchar('\n');
		return (0);
	}
	while (*str1)
	{
		if (*str1 == *str2)
			ft_putchar(*str3);
		else
			ft_putchar(*str1);
		str1++;
	}
	ft_putchar('\n');
	return (0);
}
