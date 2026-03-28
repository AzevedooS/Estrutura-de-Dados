

// RA:2223108777
// Patrick dos Santos Azevedo

// Parte 14

#include <stdio.h>

void LocalizarProduto(int precos[], int tamanho, int alvo) {
	int encontrou = 0;

	for (int indiceAtual = 0; indiceAtual < tamanho; indiceAtual++) {
		for (int indiceComparacao = indiceAtual + 1; indiceComparacao < tamanho; indiceComparacao++) {
			if (precos[indiceAtual] + precos[indiceComparacao] == alvo) {
				printf("Indices encontrados: [%d, %d]\n", indiceAtual, indiceComparacao);
				encontrou = 1;
				return;
			}
		}
	}

	if (!encontrou) {
		printf("Nenhum par foi encontrado.\n");
	}
}

int main() {
	int precos[] = {10, 20, 35, 50, 75};
	int tamanho = sizeof(precos) / sizeof(precos[0]);
	int alvo = 55;

	LocalizarProduto(precos, tamanho, alvo);

	return 0;
}
