#include "main.h"

/**
 * print_alphabet - prints alphabet -- Lower case.
 *
 * Return: Always 0.
 */
int main()
{
	int print_alphabet(void)
	{
		char alphs;

		for (alphs = 'a'; alphs <= 'z'; alphs++)
		{
			_putchar(alphs);
		}

		_putchar('\n');
		return (0);
	}
	print_alphabet();
}
