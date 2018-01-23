// Written by Yener Tuz (ytuz)

#include "header.h"

int	bracket_convert(char c)
{
	if (c == '(')
		return (1);
	else if (c == ')')
		return (-1);
	else if (c == '[')
		return (2);
	else if (c == ']')
		return (-2);
	else if (c == '{')
		return (3);
	else if (c == '}')
		return (-3);
	else
		return (0);
}

int	bracket_close_check(char *string)
{
	int	opening_brackets;
	int	closing_brackets;

	opening_brackets = 0;
	closing_brackets = 0;
	while (*string)
	{
		if (bracket_convert(*string) < 0)
			closing_brackets++;
		else if (bracket_convert(*string) > 0)
			opening_brackets++;
		string++;
	}
	if (opening_brackets == closing_brackets)
		return (1);
	else
		return (0);
}

int	bracket_mismatch_check(char *string)
{
	int	index;

	while (*string)
	{
		if (bracket_convert(*string) > 0)
		{
			index = 1;
			while (bracket_convert(string[index]) == 0)
			{
				if (string[index] == 0)
					return (0);
				index++;
			}
			if (bracket_convert(string[index]) < 0 &&
					bracket_convert(string[index]) +
					bracket_convert(*string) != 0)
				return (0);
		}
		string++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	if (argc == 1)
	{
		pc('\n');
		return (0);
	}
	while (argv[index])
	{
		if (bracket_close_check(argv[index]) * bracket_mismatch_check(argv[index]) == 1)
			ps("OK\n");
		else
			ps("Error\n");
		index++;
	}
	return (0);
}
