#include <stdio.h>

int main()
{
    int A, B, C, D; // declara as váriaveis inteiras
    scanf("%d", &A); // lê o valor A
    scanf("%d", &B); // lê o valor B
    scanf("%d", &C); // lê o valor C
    scanf("%d", &D); // lê o valor D

    int diferenca = (A * B - C * D); // calcula a diferença dos produtos
    
    printf("DIFERENCA = %d\n", diferenca); // imprime o resultado da diferença

    return 0; // retorna 0 para indicar que o programa terminou com sucesso
}
