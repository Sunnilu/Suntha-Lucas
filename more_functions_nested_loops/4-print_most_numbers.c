#include "main.h"

/**
 * 'print_most_numbers' - function that prints the numbers from 0 to 9, except for the number 2
 * Return: 0
 */
void print_most_numbers(void)
{
    int c;

    for (c = 48; c < 58; c++)
    {
        if (c != 50)
        {
            _putchar(c);
        }
    }

    _putchar('\n');
}

