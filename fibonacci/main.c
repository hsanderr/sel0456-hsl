#include <stdio.h>
#include "fib.h"

int main (void)
{
    printf("\nEste programa dá o n-ésimo termo da sequência Fibonacci, considerando:");
    printf("\n\nn\tTermo");
    printf("\n-------------");
    printf("\n0\t  0\n1\t  1\n2\t  1\n3\t  2\n4\t  3\n...\t  ...");

    // Variável para guardar entrada do usuário
    unsigned int n = 10;
    
    // Acumuladores para cálculo por laço de repetição for
    unsigned int ultimoTermo = 0;
    unsigned int penultimoTermo = 0;
    unsigned int termoAtual = 0;

    printf("\n\nInsira o termo da sequência Fibonacci desejado: ");
    scanf("%d", &n);
    
    // n-ésimo termo da sequência fibonacci por laço de repetição for
    for (int i = 0; i <= n; i++)
    {
        if (i == 1)
        {
            ultimoTermo = 0;
            termoAtual = 1;
        } 
        else 
        {
            penultimoTermo = ultimoTermo;
            ultimoTermo = termoAtual;
            termoAtual = penultimoTermo + ultimoTermo;
        }
    }
    
    // Imprime resultado por laço de repetição for
    printf("\nResultado por for: %d\n", termoAtual);

    // Imprime resultado por recursão
    printf("\nResultado por recursão: %d\n\n", fib(n));
    return 0;
}