#include <stdio.h>

int main()
{
    int movimentoTorre, movimentoBispo, movimentoRainha;

    // Introdução
    printf("--- Xadrez por códigos ---\n");
    printf("Digite o número de movimentos para cada peça:\n");

    // Entrada de movimentos para cada peça
    printf("Torre (para a direita): ");
    scanf("%d", &movimentoTorre);

    printf("Bispo (em diagonal para cima e à direita): ");
    scanf("%d", &movimentoBispo);

    printf("Rainha (para a esquerda): ");
    scanf("%d", &movimentoRainha);

    printf("\nMovimentos da Torre:\n");
    // Torre usa for (movimento para a direita)
    for (int i = 0; i < movimentoTorre; i++)
    {
        printf("Direita\n");
    }

    printf("\nMovimentos do Bispo:\n");
    // Bispo usa while (movimento diagonal: cima + direita)
    int i = 0;
    while (i < movimentoBispo)
    {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimentos da Rainha:\n");
    // Rainha usa do-while (movimento para a esquerda)
    i = 0;
    if (movimentoRainha > 0)
    {
        do
        {
            printf("Esquerda\n");
            i++;
        } while (i < movimentoRainha);
    }

    return 0;
}
