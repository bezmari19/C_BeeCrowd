#include <stdio.h>

int main()
{
    double A, B, C; // Declara as variáveis A, B e C que receberão as notas dos alunos
    scanf("%lf", &A); // lê a primeira nota
    scanf("%lf", &B); // lê a segunda nota
    scanf("%lf", &C); // lê a terceira nota
    const int pesoA = 2; // constante que define o peso da primeira nota
    const int pesoB = 3; // constante que define o peso da segunda nota
    const int pesoC = 5; // constante que define o peso da terceira nota

    double nota_do_aluno = (A * pesoA + B * pesoB + C * pesoC) / 10; // variável que armazena o cálculo da média ponderada das notas

    printf("MEDIA = %.1lf\n", nota_do_aluno); // exibe a média calculada com 1 casa decimal

    return 0; // encerra o programa
}