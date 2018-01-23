#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	do_op(int number1, int number2, char c)
{
	if (c == '+')
		return (number1 + number2);
	if (c == '-')
		return (number1 - number2);
	if (c == '*')
		return (number1 * number2);
	if (c == '/')
		return (number1 / number2);
	if (c == '%')
		return (number1 % number2);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int		number1;
	int		number2;
	char	c;

	if (argc != 4)
	{
		printf("%c", '\n');
		return (0);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	c = argv[2][0];
	printf("%d\n", do_op(number1, number2, c));
	return (0);
}
