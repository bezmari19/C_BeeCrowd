#include <stdio.h> 

int main() {
    double raio; // Variável para o raio
    double area; // Variável para a área
    const double PI = 3.14159; // PI como constante

    scanf("%lf", &raio); // Lê o valor do raio

    area = PI * (raio * raio); // Calcula a área

    printf("A=%.4f\n", area); // Imprime o resultado formatado

    return 0; // Finaliza o programa
}