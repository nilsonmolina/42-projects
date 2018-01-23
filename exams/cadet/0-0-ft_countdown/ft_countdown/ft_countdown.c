#include <unistd.h>

void	ft_countdown(void);

int		main(void)
{
	ft_countdown();
	return (0);
}

void	ft_countdown(void)
{
	write(1, "9876543210\n", 11);
}
