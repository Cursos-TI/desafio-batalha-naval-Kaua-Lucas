#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

char linhaHorizontal = 'A';
int linhaVertical = 1;

void letras(){

    int i;

    printf("  ");//basicamente o tab pra dar um espaço inicial para as letras

    for(i = 1; i <= 5; i++){

        printf("%c ", linhaHorizontal);
        linhaHorizontal++; //Aqui ira incrementar as letras pra A,B,C...

    }
    linhaHorizontal = 'A';
    printf("\n");
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    
    int tabuleiro[5][5] = {0}, x = 0 , y = 0, navio = 0;
    
    // Coordenadas dos dois navios (um horizontal e um vertical)
    int positionPequenoX[10] = {2,3,4   ,0,0,0};
    int positionPequenoY[10] = {0,0,0   ,0,1,2};

    // Posicionamento dos navios no tabuleiro pequeno
    for(int i = 0 ; i <=9; i++)
    {
        tabuleiro[positionPequenoX[i]][positionPequenoY[i]] = 3;
    }
    
    letras();

    for(y = 0 ; y <= 4 ; y++)
    {
        printf("%d ", linhaVertical);

        for(x = 0 ; x <= 4 ; x++)
        {
            printf("%d ", tabuleiro[x][y]);
        }
        
        printf("\n");
        linhaVertical++;
    }
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    printf("\n");

    linhaHorizontal = 'A';
    printf("  ");//basicamente o tab pra dar um espaço inicial para as letras

    for(int i = 1; i <= 10; i++){

        printf("%c ", linhaHorizontal);
        linhaHorizontal++; //Aqui ira incrementar as letras pra A,B,C...

    }
    printf("\n");

    // Tabuleiro expandido para 10x10 já iniciado com 0
    int tabuleiroGrande[10][10] = {0};//deixa todo o tabuleiro com 0

    //coordenadas do navio
    //                  navio1  navio2    navio3    navio4  
    int positionX[12] = {0,0,0   ,3,4,5  ,7,6,5     ,4,3,2};
    int positionY[12] = {0,1,2   ,0,0,0  ,2,3,4     ,2,3,4};

    // Posiciona os 4 navios (horizontal, vertical, diagonal crescente e decrescente)
    for( int i = 0 ; i <= 11 ; i++){
        tabuleiroGrande[positionX[i]][positionY[i]] = 3;
    }

    linhaVertical = 1;
    
    for(y = 0 ; y <= 9 ; y++)
    {
        printf("%d ", linhaVertical);

        for(x = 0 ; x <= 9 ; x++)
        {
            printf("%d ", tabuleiroGrande[x][y]);
        }
        
        printf("\n");
        linhaVertical++;
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
