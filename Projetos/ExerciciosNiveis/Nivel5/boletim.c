#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHA 200

void arquivo();

int main() {
	arquivo();
	return 0;
}



void arquivo() {
	FILE *ler, *saida;
	char linha[MAX_LINHA];
    char nome[100];
    float nota1, nota2, nota3, media;
	ler = fopen("alunos.txt", "r");

	if (ler == NULL) {
		printf("Erro ao abrir o arquivo de entrada (alunos.txt).\n");
		return;
	}

	saida = fopen("boletim.txt", "w");
	if (saida == NULL) {
		printf("Erro ao criar o arquivo de saC-da (boletim.txt).\n");
		fclose(ler);
		return;
	}
	
	while(fgets(linha , sizeof(linha), ler) != NULL){
	    sscanf(linha, "%s %f %f %f", nome, &nota1, &nota2, &nota3);
        media = (nota1 + nota2 + nota3) / 3;
        fprintf(saida, "%s - Média: %.2f\n", nome, media);
	}

	fclose(ler);
	fclose(saida);
	printf("Boletim gerado com sucesso em 'boletim.txt'\n");
}

//Compilador online esta funcionando