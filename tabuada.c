#include <stdio.h>

int main() {
    int i, numero, multiplicacao;

    printf("Digite um número para calcular a tabuada: ");
    scanf("%i", &numero);

    for (i=0; i<=100; i++) {
        multiplicacao = numero * i;
        printf("%i X %i = %i\n", numero, i, multiplicacao);
    }

    return 0;
}