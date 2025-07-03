#include <stdio.h>

int main()
{
    int numero1; // Declara váriavel que recebera o primeiro número
    int numero2; // Declara váriavel que recebera o segundo número
    scanf("%d", &numero1); // lê a primeira váriavel
    scanf("%d", &numero2); // lê a segunda váriavel

    int produto = numero1 * numero2; // declara a variável produto e atribui o valor da multiplicação dos dois números
    
    printf("PROD = %d\n", produto); // exibe o resultado da multiplicação ao usuário

    return 0; // encerra o programa
}