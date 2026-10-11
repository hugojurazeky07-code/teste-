//1.Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valor lido.
#include <stdio.h>
#include <conio.h>

#define TL 10

void carregarVetor(int vet[TL])
{
    int i;

    printf("\n<<<Carregar Vetor>>>\n");

    for(i = 0; i < TL; i++)
    {
        printf("Informe Vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

void calcularMaiorMenor(int vet[TL], int *maior, int *menor)
{
    int i;

    *maior = vet[0];
    *menor = vet[0];

    for(i = 1; i < TL; i++)
    {
        if(vet[i] > *maior)
            *maior = vet[i];

        if(vet[i] < *menor)
            *menor = vet[i];
    }
}

int main()
{
    int vet[TL], maior, menor;

    carregarVetor(vet);
    calcularMaiorMenor(vet, &maior, &menor);

    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
}

