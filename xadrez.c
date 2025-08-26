#include <stdio.h>

int main (){
    const int bispo_diag = 5;
    const int torre_dir = 5;
    const int rainha_esq = 8;

    printf("Movimentação do bispo( Diagonal superior direita):\n");
    for (int i = 0; i <= bispo_diag; i++)
    {
        printf("Passo %d: cima + direita\n", i);
    }
    printF("\n");

    printf("Movimentação da torre ( Direita):\n");
    for (int i = 0; i <= torre_dir; i++)
    {
        printf("Passo %d: direita\n", i);
    }
    printf("\n");

    printf("Movimentação da rainha ( Esquerda):\n");
    for (int i = 0; i <= rainha_esq; i++)
    {
        printf("Passo %d: esquerda\n", i);
    }
    printf("\n");

    return 0;
}