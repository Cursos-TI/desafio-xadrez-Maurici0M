#include <stdio.h>

#include <string.h>

/* Desafio de Xadrez - MateCheck
 Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
 O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.*/

 const char* mensagemOpcaoInvalida(){
    return "\n*** Opção inválida! ***\n";
}

 const char* nomeDirecao(char direcao){
    switch (direcao){
        case 'D':
        case 'd':
            return "direita";

        case 'E':
        case 'e':
            return "esquerda";
            
        default:
            return "direita (opção padrão)";
    }
 }

 const char* mensagemTernaria(int valor){
    return  valor <= 1 ? "casa" : "casas";
 }

 void movimentoBispo(int valor, char direcao){
    if (valor > 0){
        movimentoBispo(valor -1, direcao);

        printf("\nBispo avançando para a diagonal superior %s %d %s", nomeDirecao(direcao), valor, mensagemTernaria(valor));
    } 
 }
 
 void movimentoTorre(int valor, char direcao){
    if (valor > 0){
        movimentoTorre(valor -1, direcao);
        
        printf("\nTorre avançando para a %s %d %s\n", nomeDirecao(direcao), valor, mensagemTernaria(valor));
    }
 }
 
 void movimentoRainha(int valor, char direcao){
    if (valor > 0){
        movimentoRainha(valor -1, direcao);
        
        printf("\nRainha avançando para a %s %d %s", nomeDirecao(direcao), valor, mensagemTernaria(valor));
    }
 }
 
 /*void movimentoCavalo(int valor, char direcao){
    if (valor > 0){
        movimentoCavalo(valor -1, direcao);
        
        printf("\nCavalo avançando %d %s para frente ", valor, mensagemTernaria(valor));
    } else{
        printf("\nCavalo avançando 1 casa para %s", nomeDirecao(direcao));
    }
 }*/

 void mensagemMovimentacao(int numeroPeca, int valor, char direcao){
    char 
    nomePeca[30]; 
    
    if (numeroPeca >=1 && numeroPeca <=4){

        //adicionara o nome da peça selecionada a variavel nomePeca para imprimir no terminal a mensagem
        numeroPeca == 1 ? strcpy(nomePeca, "BISPO") : 
        numeroPeca == 2 ? strcpy(nomePeca, "TORRE") : 
        numeroPeca == 3 ? strcpy(nomePeca, "RAINHA") : 
        strcpy(nomePeca, "CAVALO");

        //printf("\nDigite quantas casas a peça %s irá avançar: ", nomePeca);

        switch (numeroPeca){
            case 1:
                movimentoBispo(valor, direcao);
            break;
            
            case 2:
                movimentoTorre(valor, direcao);
            break;

            case 3:
                movimentoRainha(valor, direcao);
            break;

            case 4:
                //movimentoCavalo(valor, direcao);
            break;
            
            default:
                printf("%s", mensagemOpcaoInvalida());
            break;
        }

    } else {
        printf("%s", mensagemOpcaoInvalida());
    }
 }

void mensagemMenu(){
    printf(
        "\nQual peça você quer mover? "
        "\n0. Sair"
        "\n1. Bispo"
        "\n2. Torre"
        "\n3. Rainha"
        "\n4. Cavalo\n"
        "\nEscolha: "
    );
}

void mensagemDirecao(){
    printf(
        "\nPara qual lado será a movimentação?"
        "\nD. Direita"
        "\nE. Esquerda"
        "\nEscolha: "
    );
}

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
     bispo = 1,
     torre = 2,
     rainha = 3,
     cavalo = 4;

     int
     contador = 1,
     movimento,
     escolha = 1;

     char direcao;  

     /*printf("\nDigite quantas casas o bispo irá avançar: ");
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
     } while (contador <= rainha);*/

    // Nível Aventureiro - Movimentação do Cavalo
    /* Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
     Um loop pode representar a movimentação horizontal e outro vertical.*/

    /*contador = 1; //voltando o contador a numeracao inicial (caso contrario ele terá o valor adicionado nos movimentos da rainha);

    //movimentacao do cavalo
    printf("\n\nDigite quantas casas o cavalo irá avançar (lembrando que ele se movimenta em 'L'): ");
    scanf("%d", &cavalo);

    //ira validar se deve se movimentar para a esquerda ou direita.
    //caso opcao invalida a pergunta voltara
    do{
        printf("\nO cavalo irá se movimentar para:\n1. Direita\n2. Esquerda ");
        scanf("%d", &movimento);
        
        if (movimento != 1 && movimento !=2){
            printf("\nOpção inválida!\n");
        }
        
    } while (movimento != 1 && movimento !=2);
     
    //ira imprimir a movimentacao
     for (int i = 1; i <= cavalo; i++){
        
        while (contador <= cavalo){
            printf(contador <= 1 ? "\nCavalo avançou %d casa para cima" : "\nCavalo avançou %d casas para cima", contador);
             
            contador++;
        }

        if (i == cavalo){
            printf(movimento == 1 ? "\nAvançou 1 casa para a direita" : "\nAvançou 1 casa para a esquerda");
        }
        
    }
*/
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    /* Sugestão: Substitua as movimentações das peças por funções recursivas.
     Exemplo: Crie uma função recursiva para o movimento do Bispo.

     Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
     Inclua o uso de continue e break dentro dos loops.*/

     mensagemMenu();
     scanf("%d", &escolha);

     switch (escolha){
         case 1:
             printf("\nQuantas casas o BISPO irá percorrer? ");
             scanf("%d", &bispo);

             mensagemDirecao();
             scanf(" %c", &direcao);
             
             movimentoBispo(bispo, direcao);
         break;
         
         case 2:
             printf("\nQuantas casas a TORRE irá percorrer? ");
             scanf("%d", &torre);

             mensagemDirecao();
             scanf(" %c", &direcao);
             
             movimentoTorre(torre, direcao);
         break;

         case 3:
             printf("\nQuantas casas a RAINHA irá percorrer? ");
             scanf("%d", &rainha);

             mensagemDirecao();
             scanf(" %c", &direcao);
             
             movimentoRainha(rainha, direcao);
         break;

         case 4:
             printf("\nQuantas casas o CAVALO irá percorrer? ");
             scanf("%d", &cavalo);

             mensagemDirecao();
             scanf(" %c", &direcao);
             
             for (int i = 1, j = i * 2; i <= cavalo; i++, j--){
                 
                 printf("\nCavalo avançando %d %s para frente ", i, mensagemTernaria(i));
                 
                 if (j <= 1){
                     printf("\nCavalo avançando 1 casa para %s\n\n", nomeDirecao(direcao));
                 } 
                 
             }
             
         break;
     
         default:
             printf("\n%s", mensagemOpcaoInvalida());
         break;
     }

    return 0;
}
