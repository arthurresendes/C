#include <stdio.h>
#include <stdlib.h>

void simNao(){
    printf("(1-sim 2-nao)");
}

void lembrete(){
    printf("Vale lembrar que se preencher nos sintomas qualquer outro numero ele ira contar como nao e se escrever letras não iremos conseguir identificar!!");
}

int lerResposta(){
    int resposta;
    while(1){
        simNao();
        if(scanf("%d" , &resposta) == 1 &&(resposta == 1 || resposta == 2)){
            break;
        }else{      printf("Entrada invalida! Digite 1 para sim ou 2 para nao.\n");
            while (getchar() != '\n'); 
        }
    }
    return resposta;
    
}
int main(){

    int febre , contador, coriza , dorCabeca , dorGarganta;
    char repetir;
    do{
        contador = 0;
    printf("Iremos te diagnosticar \n");
    lembrete();

    printf("\n Voce tem febre ?");
    febre = lerResposta();
    if(febre == 1){
        contador++;
    }

    printf(" \n Voce tem coriza ?");
    coriza = lerResposta();
    if(coriza == 1){
        contador++;
    }

    printf("\n Voce tem dor de cabeca ?");
        dorCabeca = lerResposta();
    if(dorCabeca == 1){
        contador++;
    }

    printf(" \n Voce tem dor de garganta ?");
    dorGarganta = lerResposta();

    if(dorGarganta == 1){
        contador++;
    }


    if(contador == 1){
        printf("Voce so tem um sintoma , procure um medico para te auxiliar");
    }else if (contador == 2){
        printf("Voce esta com resfriado , busque tomar os seguintes remedios: Ibuprofeno Paracetamol");
    }else if (contador == 3){
        printf("Voce esta com gripe , tome os seguintes remedios: Analgésicos (paracetamol, ibuprofeno), antitérmicos, descongestionantes e expectorantes.");
    }else if (contador == 4 ){printf("Consulte um medico , pois pode ser urgente");
    }else printf("Sem correspondencias \n");

    printf("\nDeseja fazer outro diagnóstico? (s/n): ");
        scanf(" %c", &repetir);
        while (getchar() != '\n'); 

    } while (repetir == 's' || repetir == 'S'); 

    if(repetir == 'n') printf("Obrigado por visitar");
    return 0;
}