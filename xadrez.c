#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void move_bispo(int casas);

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int BISPO = 5;
    const int TORRE = 5;
    const int RAINHA = 8;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do bispo:\n");
    for (int i = 0; i < BISPO; i++)
    {
        printf("CimaDireita\n");
    }
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimento da torre:\n");
    for (int i = 0; i < TORRE; i++)
    {
        printf("Direita\n");
    }
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimento da Rainha:\n");
    for (int i = 0; i < RAINHA; i++)
    {
        printf("Esquerda\n");
    }
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do cavalo (nível aventureiro):\n");
    for (int i = 0; i < 1; i++)
    {
        int j = 0;
        while (j<2)
        {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("Movimento do bispo com função recursiva:\n");
    move_bispo(5);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Movimento avançado do cavalo:\n");
    int baixo = 2;
    int esquerda = 1;
    for(;;)
    {
        if (baixo > 0)
        {
            printf("Baixo\n");
            baixo--;
            continue;
        }
        if (esquerda == 0)
        {
            break;
        }
        printf("Esquerda\n");
        esquerda--;
    }
    return 0;
}


void move_bispo(int casas)
{
    if (casas == 0)
    {
        return;
    }
    printf("CimaDireita\n");
    move_bispo(casas - 1);
}