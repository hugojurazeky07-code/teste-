//6.Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
#include <stdio.h>
#include <conio.h>

#define TL 10

void carregarVetor(int vet[TL], char nome)
{
    int i;

    printf("\n<<<Carregar Vetor %c>>>\n", nome);

    for(i = 0; i < TL; i++)
    {
        printf("Informe %c[%d]: ", nome, i);
        scanf("%d", &vet[i]);
    }
}

void multiplicarVetores(int A[TL], int B[TL], int C[TL])
{
    int i;

    for(i = 0; i < TL; i++)
        C[i] = A[i] * B[i];
}

void exibirVetor(int vet[TL])
{
    int i;

    for(i = 0; i < TL; i++)
        printf("%d ", vet[i]);
}

int main()
{
    int A[TL], B[TL], C[TL];

    carregarVetor(A, 'A');
    carregarVetor(B, 'B');

    multiplicarVetores(A, B, C);

    printf("\n<<<Vetor Resultante>>>\n");
    exibirVetor(C);
}

