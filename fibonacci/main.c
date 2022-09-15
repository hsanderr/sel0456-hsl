#include <stdio.h>
#include "fib.h"

int main (void)
{
    unsigned int n = 5;
    unsigned int acc = 0;
    
    // n-ésimo termo da sequência fibonacci por laço de repetição
    for (int i = 1; i <= n; i++)
    {
        acc += i;
    }
    
    printf("\nResultado por for: %d\n", acc);
    printf("\nResultado por recursão: %d\n\n", fib(5));
    return 0;
}