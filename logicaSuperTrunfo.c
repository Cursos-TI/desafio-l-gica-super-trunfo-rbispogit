#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    // Declaração das variáveis
    char state1[5], state2[5];
    char code1[5], code2[5];
    char city1[50], city2[50];
    unsigned long int population1, population2;
    int touristSpot1, touristSpot2;
    float area1, area2;
    float pib1, pib2;
    float popDensity1, popDensity2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da primeira carta
    printf("#Enter first card atributes#\n");
    printf("State: ");
    scanf("%s", state1);

    printf("Card code: ");
    scanf("%s", code1);

    printf("City: ");
    scanf("%s", city1);

    printf("Population: ");
    scanf("%lu", &population1);

    printf("Area(km): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Number of tourist spots: ");
    scanf("%d", &touristSpot1);

    popDensity1 = (float)population1 / area1;
    pibPerCapita1 = (float)pib1 / population1;


    // Cadastro da segunda carta
    printf("\n#Enter second card atributes#\n");
    printf("State: ");
    scanf(" %s", state2);

    printf("Card code: ");
    scanf("%s", code2);

    printf("City: ");
    scanf("%s", city2);

    printf("Population: ");
    scanf("%lu", &population2);

    printf("Area(km): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Number of tourist spots: ");
    scanf("%d", &touristSpot2);

    popDensity2 = (float)population2 / area2;
    pibPerCapita2 = (float)pib2 / population2;

    // Comparando atributos das cartas
    printf("Cards comparison (Atribute: Population):\n\n");
    printf("Card 1 - %s (%s): %lu\n", city1, state1, population1);
    printf("Card 2 - %s (%s): %lu\n", city2, state2, population2);

    // Exibe a carta vencedora
    if (population1 > population2) {
        printf("Result: Card 1 (%s) wins!\n", city1);
    } else {
        printf("Result: Card 2 (%s) wins!\n", city2);
    }

    return 0;
}
