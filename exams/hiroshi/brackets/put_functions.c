// Written by Yener Tuz (ytuz)

#include "header.h"

void	pc(char c)
{
	write(1, &c, 1);
}

void	ps(char *string)
{
	while (*string)
	{
		pc(*string);
		string++;
	}
}
