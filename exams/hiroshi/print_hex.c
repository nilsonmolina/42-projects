#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return result * sign;
}

int print_hex(int value)
{
	char *array = "0123456789abcdef";

	if (value)
	{
		print_hex(value / 16);
		ft_putchar(array[value % 16]);
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	int value = ft_atoi(argv[1]);
	if (!value)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	if (print_hex(value))
		ft_putchar('\n');
	return (0);
}
