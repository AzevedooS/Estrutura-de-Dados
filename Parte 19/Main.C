

// RA:2223108777
// Nome: Patrick dos Santos Azevedo

// Parte 19

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1
    int numeros1[] = {1, 2, 3, 4, 5};
    int tamanho1 = 5;

    printf("1) Vetor de tras para frente:\n");
    for (int posicao = tamanho1 - 1; posicao >= 0; posicao--) {
        printf("%d ", numeros1[posicao]);
    }
    printf("\n\n");


    // 2 
    int numeros2[10];

    srand(time(NULL)); // Aleatórios diferentes a cada execução

    printf("2) Numeros que são maiores que 5:\n");
    for (int posicao = 0; posicao < 10; posicao++) {
        numeros2[posicao] = rand() % 10;

        if (numeros2[posicao] > 5) {
            printf("%d ", numeros2[posicao]);
        }
    }
    printf("\n");

    char sobrenome[] = "Silva";

    printf("Letras alternadas:\n");
    for (int posicao = 0; sobrenome[posicao] != '\0'; posicao += 2) {
        printf("%c", sobrenome[posicao]);
    }
    printf("\n\n");

    // 3 
    int idades[] = {18, 21, 30, 25, 40, 33};
    int tamanho3 = 6;

    printf("3) Idades impares:\n");
    for (int posicao = 0; posicao < tamanho3; posicao++) {
        if (idades[posicao] % 2 != 0) {
            printf("%d ", idades[posicao]);
        }
    }
    printf("\n");

    return 0;
}
