

// RA:2223108777
// Nome: Patrick dos Santos Azevedo

// Parte 18

#include <stdio.h>

int main() {
    char texto[51];
    int vogais = 0;
    int consoantes = 0;

    printf("Digite uma string: ");
    fgets(texto, 51, stdin); 

    for (int posicao = 0; texto[posicao] != '\0'; posicao++) {
        char caractere = texto[posicao];

        
        if (caractere >= 'a' && caractere <= 'z') {

           
            if (caractere == 'a' || caractere == 'e' || 
                caractere == 'i' || caractere == 'o' || 
                caractere == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
        
    }

    printf("%d %d\n", vogais, consoantes);

    return 0;
}
