#include "main.h"
void print_alphabet_x10(void)
{
    char c, a;
    for (a = 1; a <=10; a++){   
        for (c = 'a'; c <= 'z'; c++){
            _putchar(c);
        } 
         _putchar('\n');
    }
    _putchar('\n');  
}