#include <stdio.h>
#include <stdlib.h>

void fprime(int value)
{
	int i;

	if (value == 1)
	{
		printf("1");
		return ;
	}
	while (value)
	{
		i = 2;
		while ((value % i) && (i < value))
			i++;
		value /= i;
		if (value > 1)
			printf("%d*", i);
		else if (value)
			printf("%d", i);
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return 0;
	}
	fprime(atoi(argv[1]));
	printf("\n");
	return 0;
}
