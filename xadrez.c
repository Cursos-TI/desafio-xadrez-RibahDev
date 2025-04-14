#include <stdio.h>

int main()
{
    int movimentoTorre, movimentoBispo, movimentoRainha;
    int repeticoesCavalo;

    // Introdução
    printf("--- Xadrez por códigos ---\n");
    printf("Digite o número de movimentos para cada peça:\n");

    // Entradas das peças
    printf("Torre (para a direita): ");
    scanf("%d", &movimentoTorre);

    printf("Bispo (em diagonal para cima e à direita): ");
    scanf("%d", &movimentoBispo);

    printf("Rainha (para a esquerda): ");
    scanf("%d", &movimentoRainha);

    printf("Cavalo (quantas vezes deseja repetir o movimento em L - 2 baixo + 1 esquerda): ");
    scanf("%d", &repeticoesCavalo);

    // Movimento da Torre - for
    printf("\nMovimentos da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++)
    {
        printf("Direita\n");
    }

    // Movimento do Bispo - while
    printf("\nMovimentos do Bispo:\n");
    int i = 0;
    while (i < movimentoBispo)
    {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha - do-while
    printf("\nMovimentos da Rainha:\n");
    i = 0;
    if (movimentoRainha > 0)
    {
        do
        {
            printf("Esquerda\n");
            i++;
        } while (i < movimentoRainha);
    }

    // Movimento do Cavalo - loops aninhados
    printf("\nMovimentos do Cavalo:\n");
    for (int j = 0; j < repeticoesCavalo; j++)
    {
        int k = 0;

        // Duas casas para baixo
        while (k < 2)
        {
            printf("Baixo\n");
            k++;
        }

        // Uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
