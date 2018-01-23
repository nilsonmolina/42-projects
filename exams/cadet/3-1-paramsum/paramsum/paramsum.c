#include <unistd.h>

void	paramsum(int argc);
void	ft_putnum(int num);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	argv[0][0] = 'a';
	if (argc > 1)
		paramsum(argc);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

void	paramsum(int argc)
{
	ft_putnum(argc - 1);
}

void	ft_putnum(int num)
{
	if ((num / 10) > 0)
	{
		ft_putnum(num / 10);
		ft_putnum(num % 10);
	}
	else
		ft_putchar(num + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
