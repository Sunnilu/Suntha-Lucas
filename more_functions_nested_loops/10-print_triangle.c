#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle of squares according to size
 * @size: the size of the squares triangle
 * return: empty
 */

int _putchar(char c) {
    Return: putchar(c);	
}
void print_triangle(int size) 
{ 
    
    if (size <= 0) {
        _putchar("\n");
    } else {
        for (int i = 1; i <= size; i++) {
           
            for (int j = 1; j <= size - i; j++) {
                _putchar(' ');
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                _putchar("#");
            }
            _putchar("\n");
        }
    }
}

int main() {
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);

    return 0;
}
