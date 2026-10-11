//8.Escreva um algoritmo que leia 7 valores para um vetor de 7 posições. Mostre depois somente os positivos.
#include <stdio.h>
#include <conio.h>

#define TL 7

void carregarVetor(int vet[TL])
{
    int i;

    for(i = 0; i < TL; i++)
    {
        printf("Informe Vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

void exibirPositivos(int vet[TL])
{
    int i;

    printf("\n<<<Valores Positivos>>>\n");

    for(i = 0; i < TL; i++)
    {
        if(vet[i] > 0)
            printf("%d ", vet[i]);
    }
}

int main()
{
    int vet[TL];

    carregarVetor(vet);
    exibirPositivos(vet);
}

