#include <stdio.h>

// ==== Funções Recursivas ====

/**
 * Movimento recursivo da Torre: move-se para a direita.
 */
void moverTorre(int passos)
{
    if (passos <= 0)
        return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

/**
 * Movimento recursivo da Rainha: move-se para a esquerda.
 */
void moverRainha(int passos)
{
    if (passos <= 0)
        return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

/**
 * Movimento recursivo do Bispo com loop aninhado:
 * Movimento diagonal: cima + direita.
 */
void moverBispo(int passos)
{
    if (passos <= 0)
        return;

    // Loop aninhado para simular movimento diagonal (linha e coluna)
    for (int linha = 1; linha <= 1; linha++)
    {
        for (int coluna = 1; coluna <= 1; coluna++)
        {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passos - 1);
}

// ==== Lógica complexa para o Cavalo ====

/**
 * Movimento em L do Cavalo: 2 para cima e 1 para direita
 * Usando loops aninhados e controle de fluxo (continue/break)
 */
void moverCavalo(int repeticoes)
{
    printf("\nMovimentos do Cavalo (2 Cima + 1 Direita):\n");

    for (int i = 0; i < repeticoes; i++)
    {
        int movimento = 0;

        // Loop para duas casas para cima
        for (int cima = 1; cima <= 2; cima++)
        {
            if (cima == 2 && i % 2 == 0)
                continue; // Pula se par na 2ª casa
            printf("Cima\n");
            movimento++;
        }

        // Loop separado para a direita com condição
        int direita = 1;
        while (direita <= 1)
        {
            if (movimento < 2)
                break; // Garante que só move se subiu 2 vezes
            printf("Direita\n");
            direita++;
        }
    }
}

// ==== Função Principal ====

int main()
{
    // Quantidade de movimentos definida no código
    int passosTorre = 5;
    int passosBispo = 5;
    int passosRainha = 8;
    int repeticoesCavalo = 3;

    // Título
    printf("--- Simulação de Xadrez com Movimentos Complexos ---\n");

    // Torre (Recursão)
    printf("\nMovimentos da Torre:\n");
    moverTorre(passosTorre);

    // Bispo (Recursão + Loop Aninhado)
    printf("\nMovimentos do Bispo:\n");
    moverBispo(passosBispo);

    // Rainha (Recursão)
    printf("\nMovimentos da Rainha:\n");
    moverRainha(passosRainha);

    // Cavalo (Loops Complexos)
    moverCavalo(repeticoesCavalo);

    return 0;
}
