#include "main.h"

void print_diagonal(int n) {
   
   if (n <= 0) {
        _putchar('\n');
    } else {
        int i, j;  /* Move the declarations outside the loop */
        for (i = 0; i < n; i++) {
            for (j = 0; j < i; j++) {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
}	
