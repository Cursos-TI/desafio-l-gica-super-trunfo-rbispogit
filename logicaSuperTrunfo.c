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
    char country1[50], country2[50];

    unsigned long int population1, population2;
    int touristSpot1, touristSpot2;
    int option1, option2;

    float area1, area2;
    float pib1, pib2;
    float popDensity1, popDensity2;
    float pibPerCapita1, pibPerCapita2;
    float result1, result2;
    double sum1, sum2;

    // Cadastro da primeira carta
    printf("#Enter first card atributes#\n");

    printf("Country: ");
    scanf("%s", country1);

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

    printf("Country: ");
    scanf("%s", country2);

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

    // Menu principal
    printf("\n# MAIN MENU #\n");
    printf("Select the FIRST atribute:\n");
    printf("1. Population\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Tourist Spots\n");
    printf("5. Population Density\n");
    printf("Option: ");
    scanf("%d", &option1);

    // Lógica da seleção do primeiro atributo, e soma dos valores
    switch (option1)
    {
    case 1:
        printf("Selected atribute: Population\n");
        result1 = population1 > population2 ? 1 : 0;
        sum1 = population1;
        sum2 = population2;
        break;
    case 2:
        printf("Selected atribute: Area\n");
        result1 = area1 > area2 ? 1 : 0;
        sum1 = area1;
        sum2 = area2;
        break;
    case 3:
        printf("Selected atribute: PIB\n");
        result1 = pib1 > pib2 ? 1 : 0;
        sum1 = pib1;
        sum2 = pib2;
        break;
    case 4:
        printf("Selected atribute: Tourist Spots\n");
        result1 = touristSpot1 > touristSpot2 ? 1 : 0;
        sum1 = touristSpot1;
        sum2 = touristSpot2;
        break;
    case 5:
        printf("Selected atribute: Population Density\n");
        result1 = popDensity1 < popDensity2 ? 1 : 0;
        sum1 = popDensity1;
        sum2 = popDensity2;
        break;

    default:
        printf("Invalid command.\n");
        break;
    }

    printf("\nSelect a different atribute:\n");
    printf("1. Population\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Tourist Spots\n");
    printf("5. Population Density\n");
    printf("Option: ");
    scanf("%d", &option2);

    // Estrutura que não deixa escolher o mesmo atributo
    if (option2 == option1)
    {
        printf("You have selected the same atribute has the first atribute! Try again.\n");
    }
    else
    {
        // Lógica do segundo atributo, e soma dos valores
        switch (option2)
        {
        case 1:
            printf("Selected atribute: Population\n");
            result2 = population1 > population2 ? 1 : 0;
            sum1 += population1;
            sum2 += population2;
            break;
        case 2:
            printf("Selected atribute: Area\n");
            result2 = area1 > area2 ? 1 : 0;
            sum1 += area1;
            sum2 += area2;
            break;
        case 3:
            printf("Selected atribute: PIB\n");
            result2 = pib1 > pib2 ? 1 : 0;
            sum1 += pib1;
            sum2 += pib2;
            break;
        case 4:
            printf("Selected atribute: Tourist Spots\n");
            result2 = touristSpot1 > touristSpot2 ? 1 : 0;
            sum1 += touristSpot1;
            sum2 += touristSpot2;
            break;
        case 5:
            printf("Selected atribute: Population Density\n");
            result2 = popDensity1 < popDensity2 ? 1 : 0;
            sum1 += popDensity1;
            sum2 += popDensity2;
            break;
        default:
            break;
        }
        printf("\n%s X %s\n", country1, country2);
        printf("Sum for %s: %.2lf\n", country1, sum1);
        printf("Sum for %s: %.2lf\n", country2, sum2);

        // Exibição dos resultados
        if (sum1 == sum2)
        {
            printf("We have a tie!\n");
        }
        else if (sum1 > sum2)
        {
            printf("%s is the WINNER!\n", country1);
        }
        else
        {
            printf("%s is the WINNER!\n", country2);
        }
    }

    return 0;
}
