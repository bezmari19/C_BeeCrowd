#include <stdio.h>

int main()
{
    int valor1; // Declara váriavel do primeiro valor
    int valor2; // Declara váriavel do segundo valor

    scanf("%d", &valor1); // lê o primeiro valor
    // A função scanf lê a entrada do usuário e armazena o valor na variável valor
    scanf("%d", &valor2); // lê o segundo valor
    // A função scanf lê a entrada do usuário e armazena o valor na variável valor2

    int soma = valor1 + valor2; // Calcula a soma dos dois valores
    // A variável soma armazena o resultado da soma de valor1 e valor2
    
    printf("SOMA = %d\n", soma); // Imprime o resultado da soma
    // A função printf exibe a string "SOMA = " seguida do valor da variável

    return 0;
}