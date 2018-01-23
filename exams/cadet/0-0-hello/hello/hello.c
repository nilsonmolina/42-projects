#include <unistd.h>

void	hello();

int		main()
{
	hello();
	return (0);
}

void	hello()
{
	write(1, "Hello World!\n", 13);
}
