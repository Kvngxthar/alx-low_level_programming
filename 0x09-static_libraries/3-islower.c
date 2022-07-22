#include "main.h"

/**
 * _islower - It checks for lowercase character
<<<<<<< HEAD
:* 
=======
 * @c: An input character
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	char i;
	int is_lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			is_lower = 1;
	}
	return (is_lower);
}
>>>>>>> 79b04955128aa47d757ee1edac2251cfa298322f
