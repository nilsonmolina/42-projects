#include <stdlib.h>

int absolute(int value)
{
	if (value < 0)
		return -value;
	else
		return value;
}

int *ft_range(int start, int end)
{
	int *range;
	int size;
	int i;

	size = absolute(end - start) + 1;
	if (size == 1)
	{
		range = malloc(1);
		range[0] = start;
		return range;
	}
	range = malloc(size);
	i = 0;
	if (start < end)
	{
		while (start <= end)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (end <= start)
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return range;
}
