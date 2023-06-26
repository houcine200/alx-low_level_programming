#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char passwd[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	for (; sum < 2772; index++)
	{
		passwd[index] = 33 + rand() % 94;
		sum += passwd[index];
	}

	passwd[index] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (index = 0; passwd[index]; index++)
		{
			if (passwd[index] >= (33 + diff_half1))
			{
				passwd[index] -= diff_half1;
				break;
			}
		}

		for (index = 0; passwd[index]; index++)
		{
			if (passwd[index] >= (33 + diff_half2))
			{
				passwd[index] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", passwd);

	return (0);
}

