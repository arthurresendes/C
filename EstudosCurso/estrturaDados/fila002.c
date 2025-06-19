#include <stdio.h>

#define TAMSENHA 10
int fila[TAMSENHA] = {0};
int head = 0;
int tail = 0;
int senhaAtual = 1;

void adicionarPaciente() {
    if (tail < TAMSENHA) {
        fila[tail] = senhaAtual;
        printf("Paciente com senha %d adicionado!\n", senhaAtual);
        senhaAtual++;
        tail++;
    } else {
        printf("Fila cheia\n");
    }
}


void removerPaciente(){
    if(head < tail){
        printf("Proximo paciente: %d\n" , fila[head]);
        for(int i =  head ; i < tail - 1 ; i++){
            fila[i] = fila[i + 1];
        }
        fila[tail - 1] = 0;
        tail--;
    }else{
        printf("Fila vazia\n");
    }
}

void verFila(){
    printf("============Fila atual==========\n");
    for(int i = 0 ; i <TAMSENHA ; i++){
        printf("-");
        printf("|%d|", fila[i]);
        printf("-\n");
    }
}

void quantidadesPacientes(){
    printf("Quantidade de pacientes na fila: %d\n", tail);
}

void limparFila(){
    for(int i = 0 ; i < TAMSENHA ; i++){
        fila[i] = 0;
    }
    printf("Fila limpa\n");
}

int main(){
    int opcao = 0;
    do
    {
        printf("============Menu============\n");
        printf("[1] Inserir paciente\n");
        printf("[2] Remover paciente\n");
        printf("[3] Fila de paciente\n");
        printf("[4] Quantidade de paciente\n");
        printf("[5] Limpar fila\n");
        printf("[0] Para sair\n");
        printf("===========================\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            adicionarPaciente();
            break;
        case 2:
            removerPaciente();
            break;
        case 3:
            verFila();
            break;
        case 4:
            quantidadesPacientes();
            break;
        case 5:
            limparFila();
            break;
        case 0:
            printf("Saindo... \n");
            return 0;
        default:
            printf("Opcao invalida , digite novamente!\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}

