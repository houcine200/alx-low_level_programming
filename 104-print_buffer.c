#include "main.h"
#include <stdio.h>

/**
 * print_buffer - displays the content of a buffer
 * @buffer: buffer to be displayed
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *buffer, int size)
{
    int i;

    for (i = 0; i <= (size - 1) / 10 && size; i++)
    {
        printf("%08x: ", i * 10);
        if (i < size / 10)
        {
            for (int j = 0; j <= 9; j++)
            {
                if (j <= size)
                    printf("%02x", buffer[i * 10 + j]);
                else
                    printf("  ");
                if (j % 2)
                    putchar(' ');
            }
        }
        else
        {
            for (int k = 0; k <= size % 10 - 1; k++)
            {
                if (buffer[i * 10 + k] > 31 && buffer[i * 10 + k] < 127)
                    putchar(buffer[i * 10 + k]);
                else
                    putchar('.');
            }
        }
        putchar('\n');
    }
    if (size == 0)
        putchar('\n');
}

