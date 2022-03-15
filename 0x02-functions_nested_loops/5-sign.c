
Search or jump to…
Pulls
Issues
Marketplace
Explore
 
@lucymell 
tenmark86
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
More
alx-low_level_programming/0x02-functions_nested_loops/5-sign.c
@tenmark86
tenmark86 added 5-sign.c
Latest commit 609f170 1 hour ago
 History
 1 contributor
Executable File  30 lines (29 sloc)  414 Bytes
   
#include "main.h"

/**
 * print_sign - Determines if the input number
 * greater, iqual or less than zero.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
