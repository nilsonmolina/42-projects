#include <unistd.h>

void			add_prime_sum(unsigned int num);
unsigned int	simple_atoi(char *str);

int				main(int argc, char **argv)
{
	int num;

	if (argc == 2 && (num = simple_atoi(argv[1])))
		add_prime_sum(num);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

void			add_prime_sum(unsigned int num)
{
	num = 0;
	write(1, "Got Lazy :/\n", 11);
}

unsigned int	simple_atoi(char *str)
{
	int i;
	unsigned int num;
	
	i = 0;
	num = 0;
	if (str[i] == '-' || str[i] == '0')
		return (0);
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = (10 * num) + (str[i] - '0');
		else
			return (0);
		i++;
	}
	return (num);
}
