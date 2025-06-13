#include <stdio.h>

#include <string.h>

#define TIMES 4

struct Time
{

    char nome[30];

    int pontos;

    int golsFeitos;

    int golsSofridos;
};

int main()
{

    struct Time times[TIMES] = {

        {"Time A", 0, 0, 0},

        {"Time B", 0, 0, 0},

        {"Time C", 0, 0, 0},

        {"Time D", 0, 0, 0}

    };

    int placar[TIMES][TIMES] = {

        {0, 2, 1, 3}, // Time A contra os outros

        {1, 0, 0, 2}, // Time B contra os outros

        {2, 3, 0, 1}, // Time C contra os outros

        {0, 1, 1, 0} // Time D contra os outros

    };

    // Processa os resultados

    for (int i = 0; i < TIMES; i++)
    {

        for (int j = 0; j < TIMES; j++)
        {

            if (i != j)
            {

                // Soma gols feitos e sofridos

                times[i].golsFeitos += placar[i][j];

                times[i].golsSofridos += placar[j][i];

                // Calcula os pontos

                if (placar[i][j] > placar[j][i])
                {

                    times[i].pontos += 3; // Vitória
                }
                else if (placar[i][j] == placar[j][i])
                {

                    times[i].pontos += 1; // Empate
                }

                // Derrota = 0 ponto, nada a fazer
            }
        }
    }

    // Exibe os resultados dos times

    printf("Resultado dos Times:\n\n");

    for (int i = 0; i < TIMES; i++)
    {

        printf("Time: %s\n", times[i].nome);

        printf("Pontos: %d\n", times[i].pontos);

        printf("Gols Feitos: %d\n", times[i].golsFeitos);

        printf("Gols Sofridos: %d\n", times[i].golsSofridos);

        printf("-----------------------------\n");
    }

    return 0;
}