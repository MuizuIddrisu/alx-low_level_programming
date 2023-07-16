#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase, excluding 'q' and 'e'
* Return: Always 0 (Success)
*/
int main(void)
{
	/* Variable declaration */
	char letter;

	/* Loop through the alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		/* Exclude 'q' and 'e' */
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
