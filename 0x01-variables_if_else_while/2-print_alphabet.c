#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase
* Return: Always 0 (Success)
*/
int main(void)
{
	/* Variable declaration */
	char letter;

	/* Loop through the alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
