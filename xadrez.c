#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    /* Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

     Implementação de Movimentação do Bispo
     Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

     Implementação de Movimentação da Torre
     Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

     Implementação de Movimentação da Rainha
     Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.*/

     int
     bispo,
     torre,
     rainha;

     int
     contador = 1;

     printf("\nDigite quantas casas o bispo irá avançar: ");
     scanf("%d", &bispo);

     printf("\n------------------------------------------------------------------");

     //bispo ganhará o looping for
     for (int i = 1; i <= bispo; i++){
        printf("\nBispo avançando para a diagonal superior direita %d casas\n", i);
     }

     printf("\n------------------------------------------------------------------");

     printf("\nDigite quantas casas a torre irá avançar: ");
     scanf("%d", &torre);

     printf("\n------------------------------------------------------------------");

     //torre ganhará o looping while
     while (contador <= torre){
        printf("\nTorre avançando para a direita %d casas\n", contador);
        contador ++;
     }

     contador = 1; //voltando o contador a numeracao inicial (caso contrario ele terá o valor adicionado nos movimentos da torre);

     //rainha ganhará o looping do-while
     printf("\n------------------------------------------------------------------");
     
     printf("\nDigite quantas casas a rainha irá avançar: ");
     scanf("%d", &rainha);

     printf("\n------------------------------------------------------------------");

     do {
         printf("\nRainha avançando para a esquerda %d casas", contador);
         contador++;
     } while (contador <= rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    /* Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
     Um loop pode representar a movimentação horizontal e outro vertical.*/

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    /* Sugestão: Substitua as movimentações das peças por funções recursivas.
     Exemplo: Crie uma função recursiva para o movimento do Bispo.

     Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
     Inclua o uso de continue e break dentro dos loops.*/

    return 0;
}
