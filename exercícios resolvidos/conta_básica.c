/*Programa básico para somar dois números*/
#include <stdio.h>

int main()
{
    int A; /*declara a variável A*/
    int B; /*declara a variável B*/
    scanf("%d", &A); /*lê o valor da variável A que o usuário irá digitar*/
    scanf("%d", &B); /*lê o valor da variável B que o usuário irá digitar*/

    int soma = A + B; /*declara a variável que armazena os números digitados e realiza a soma pedida no exercício*/

    printf("X = %d\n", soma); /*imprime o resultado da soma*/

return 0; /*indica que o programa foi executado com sucesso*/

}