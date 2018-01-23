#include <unistd.h>

int ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;

	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int value)
{
	if (value > 9)
	{
		ft_putnbr(value / 10);
		ft_putnbr(value % 10);
	}
	else
		ft_putchar(value + '0');
}

int is_prime(int value)
{
	int i = 2;

	if (value == 0 || value == 1)
	{
		return (0);
	}
	while (i < value)
	{
		if ((value % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2 || ft_atoi(argv[1]) < 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	int i = 1;
	int sum = 0;
	int value = ft_atoi(argv[1]);

	while (i <= value)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
	return (0);
}
