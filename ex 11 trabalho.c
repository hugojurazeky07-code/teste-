//11.Faça um algoritmo que leia um vetor A[10]. Inverta então os valores de A. troque o primeiro pelo último, segundo pelo penúltimo e assim por diante. Mostre o vetor A após as alterações.
#include <stdio.h>
#include <conio.h>

#define TL 10

void carregarVetor(int vetor[TL])
{
    int i;

    printf("\n<<<Carregar Vetor>>>\n");

    for(i = 0; i < TL; i++)
    {
        printf("Informe o Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}

void inverterVetor(int vetor[TL])
{
    int i, aux;

    for(i = 0; i < TL / 2; i++)
    {
        aux = vetor[i];
        vetor[i] = vetor[TL - 1 - i];
        vetor[TL - 1 - i] = aux;
    }
}

void exibirVetor(int vetor[TL])
{
    int i;

    printf("\n<<<Vetor Invertido>>>\n");

    for(i = 0; i < TL; i++)
        printf("%d ", vetor[i]);
}

int main()
{
    int vetor[TL];

    carregarVetor(vetor);
    inverterVetor(vetor);
    exibirVetor(vetor);
}

