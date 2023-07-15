#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
    int i;
    if (n <= 98)
        for (i = n; i <= 98; i++)
        {


            if(i >= 10)
            {
                putchar (i / 10 + '0');
                putchar (i % 10+ '0');
            }

            else if(i < 10 && i >= 0)
                putchar (i + '0');

            else if (i < 0)
            {
                putchar('-');
            if (-i >= 100)
                putchar(-i / 100 + '0');
            putchar ((-i / 10) % 10 + '0');
            putchar (-i % 10 + '0');


            }

            if (i != 98)
            {
            putchar (',');
            putchar (' ');
            }
            else
                putchar ('\n');
        }


    else if (n >= 98)
        for (i = n; i >= 98; i--)
        {
            if (i >= 100)
                putchar (i / 100 + '0');
            putchar ((i / 10) % 10 + '0');
            putchar (i % 10 + '0');
            if (i != 98)
            {
             putchar (',');
            putchar (' ');
            }
            if (i == 98)
                putchar ('\n');
        }



}
