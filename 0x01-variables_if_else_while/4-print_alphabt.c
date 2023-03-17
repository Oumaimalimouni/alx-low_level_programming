#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' && x == 'q')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}

