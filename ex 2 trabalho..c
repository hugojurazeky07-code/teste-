// 2.Fazer uma rotina que recebe como parâmetro um array de 5 posições contendo as notas de um aluno ao longo do ano e retornar a média.
#include <stdio.h>
#include <conio.h>

#define TL 5

void carregarNotas(float notas[TL])
{
    int i;

    printf("\n<<<Carregar Notas>>>\n");

    for(i = 0; i < TL; i++)
    {
        printf("Informe Nota[%d]: ", i);
        scanf("%f", &notas[i]);
    }
}

float calcularMedia(float notas[TL])
{
    int i;
    float soma = 0;

    for(i = 0; i < TL; i++)
        soma += notas[i];

    return soma / TL;
}

int main()
{
    float notas[TL], media;

    carregarNotas(notas);
    media = calcularMedia(notas);

    printf("\nMedia do aluno: %.2f", media);
}

