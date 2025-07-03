#include <stdio.h>

int main()
{
    double A, B; // declara as variáveis A e B que receberão as notas dos alunos
    scanf("%lf", &A); // lê a primeira nota
    scanf("%lf", &B); // lê a segunda nota
    const double pesoA = 3.5; // constante que define o pesoa da primeira nota 
    const double pesoB = 7.5; // constante que define o peso da segunda nota

    double nota_do_aluno = (A * pesoA + B * pesoB) / 11; // variável que armazena o cálculo da média ponderada das notas
    
    printf("MEDIA = %.5lf\n", nota_do_aluno); // exibe a média calculada com 5 casas decimais 

    return 0; // encerra o programa 
}