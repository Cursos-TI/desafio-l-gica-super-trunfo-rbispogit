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
    int option, option2;

    float area1, area2;
    float pib1, pib2;
    float popDensity1, popDensity2;
    float pibPerCapita1, pibPerCapita2;
    float firstCard1Atribute, secondCard1Atribute;
    float firstCard2Atribute, secondCard2Atribute;

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
    printf("Select the first atribute:\n");
    printf("1. Population\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Tourist Spots\n");
    printf("5. Population Density\n");
    printf("Option: ");
    scanf("%d", &option);
    printf("\n%s Vs %s\n", country1, country2);

    // Estrutura do menu principal
    switch (option)
    {
    case 1:
        printf("Selected Atribute: Population\n");
        printf("First atribute - Card 1: %lu inhabitants\n", population1);
        printf("First atribute - Card 2: %lu inhabitants\n\n", population2);
        firstCard1Atribute = (float) population1;
        firstCard2Atribute = (float) population2;
        printf("Select the second atribute:\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Tourist Spots\n");
        printf("5. Population Density\n");
        printf("Option: ");
        scanf("%d", &option2);

        switch (option2)
        {
        case 2:
            printf("Selected Atribute: Area\n");
            printf("Second atribute - Card 1: %.2f kilometers\n", area1);
            printf("Second atribute - Card 2: %.2f kilometers\n", area2);
            break;
        case 3:
            printf("Selected Atribute: PIB\n");
            printf("Second atribute - Card 1: %.2f billions of dollars\n", pib1);
            printf("Second atribute - Card 2: %.2f billions of dollars\n", pib2);
            break;
        case 4:
            printf("Selected Atribute: Tourist Spots\n");
            printf("Second atribute - Card 1: %d tourist spots\n", touristSpot1);
            printf("Second atribute - Card 2: %d tourist spots\n", touristSpot2);
        case 5:
            printf("Selected Atribute: Population Density\n");
            printf("Second atribute - Card 1: %.2f inhab/km²\n", popDensity1);
            printf("Second atribute - Card 2: %.2f inhab/km²\n", popDensity2);
            break;
        default:
            printf("Invalid command.");
            break;
        }
        break;
    case 2:
        printf("Selected Atribute: Area\n");
        printf("First atribute - Card 1: %.2f kilometers\n", area1);
        printf("First atribute - Card 2: %.2f kilometers\n", area2);
        printf("Select the second atribute:\n");
        printf("1. Population\n");
        printf("3. PIB\n");
        printf("4. Tourist Spots\n");
        printf("5. Population Density\n");
        printf("Option: ");
        scanf("%d", &option2);

        switch (option2)
        {
        case 1:
            printf("Selected Atribute: Population\n");
            printf("Second atribute - Card 1: %lu inhabitants\n", population1);
            printf("Second atribute - Card 2: %lu inhabitants\n\n", population2);
            break;
        case 3:
            printf("Selected Atribute: PIB\n");
            printf("Second atribute - Card 1: %.2f billions of dollars\n", pib1);
            printf("Second atribute - Card 2: %.2f billions of dollars\n", pib2);
            break;
        case 4:
            printf("Selected Atribute: Tourist Spots\n");
            printf("Second atribute - Card 1: %d tourist spots\n", touristSpot1);
            printf("Second atribute - Card 2: %d tourist spots\n", touristSpot2);
        case 5:
            printf("Selected Atribute: Population Density\n");
            printf("Second atribute - Card 1: %.2f inhab/km²\n", popDensity1);
            printf("Second atribute - Card 2: %.2f inhab/km²\n", popDensity2);
            break;
        default:
            printf("Invalid command.");
            break;
        }
        break;
    case 3:
        printf("Selected Atribute: PIB\n");
        printf("First atribute - Card 1: %.2f billions of dollars\n", pib1);
        printf("First atribute - Card 2: %.2f billions of dollars\n", pib2);
        printf("Select the second atribute:\n");
        printf("1. Population\n");
        printf("2. Area\n");
        printf("4. Tourist Spots\n");
        printf("5. Population Density\n");
        printf("Option: ");
        scanf("%d", &option2);

        switch (option2)
        {
        case 1:
            printf("Selected Atribute: Population\n");
            printf("Second atribute - Card 1: %lu inhabitants\n", population1);
            printf("Second atribute - Card 2: %lu inhabitants\n\n", population2);
            break;
        case 2:
            printf("Selected Atribute: Area\n");
            printf("Second atribute - Card 1: %.2f kilometers\n", area1);
            printf("Second atribute - Card 2: %.2f kilometers\n", area2);
            break;
        case 4:
            printf("Selected Atribute: Tourist Spots\n");
            printf("Second atribute - Card 1: %d tourist spots\n", touristSpot1);
            printf("Second atribute - Card 2: %d tourist spots\n", touristSpot2);
        case 5:
            printf("Selected Atribute: Population Density\n");
            printf("Second atribute - Card 1: %.2f inhab/km²\n", popDensity1);
            printf("Second atribute - Card 2: %.2f inhab/km²\n", popDensity2);
            break;
        default:
            printf("Invalid command.");
            break;
        }
        break;
    case 4:
        printf("Selected Atribute: Tourist Spots\n");
        printf("First atribute - Card 1: %d tourist spots\n", touristSpot1);
        printf("First atribute - Card 2: %d tourist spots\n", touristSpot2);
        printf("Select the second atribute:\n");
        printf("1. Population\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("5. Population Density\n");
        printf("Option: ");
        scanf("%d", &option2);

        switch (option2)
        {
        case 1:
            printf("Selected Atribute: Population\n");
            printf("Second atribute - Card 1: %lu inhabitants\n", population1);
            printf("Second atribute - Card 2: %lu inhabitants\n\n", population2);
            break;
        case 2:
            printf("Selected Atribute: Area\n");
            printf("Second atribute - Card 1: %.2f kilometers\n", area1);
            printf("Second atribute - Card 2: %.2f kilometers\n", area2);
            break;
        case 3:
            printf("Selected Atribute: PIB\n");
            printf("Second atribute - Card 1: %.2f billions of dollars\n", pib1);
            printf("Second atribute - Card 2: %.2f billions of dollars\n", pib2);
        case 5:
            printf("Selected Atribute: Population Density\n");
            printf("Second atribute - Card 1: %.2f inhab/km²\n", popDensity1);
            printf("Second atribute - Card 2: %.2f inhab/km²\n", popDensity2);
            break;
        default:
            printf("Invalid command.");
            break;
        }
        break;
    case 5:
        printf("Selected Atribute: Population Density\n");
        printf("First atribute - Card 1: %.2f inhab/km²\n", popDensity1);
        printf("First atribute - Card 2: %.2f inhab/km²\n", popDensity2);
        printf("Select the second atribute:\n");
        printf("1. Population\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Tourist Spots\n");
        printf("Option: ");
        scanf("%d", &option2);

        switch (option2)
        {
        case 1:
            printf("Selected Atribute: Population\n");
            printf("Second atribute - Card 1: %lu inhabitants\n", population1);
            printf("Second atribute - Card 2: %lu inhabitants\n\n", population2);
            break;
        case 2:
            printf("Selected Atribute: Area\n");
            printf("Second atribute - Card 1: %.2f kilometers\n", area1);
            printf("Second atribute - Card 2: %.2f kilometers\n", area2);
            break;
        case 3:
            printf("Selected Atribute: PIB\n");
            printf("Second atribute - Card 1: %.2f billions of dollars\n", pib1);
            printf("Second atribute - Card 2: %.2f billions of dollars\n", pib2);
        case 4:
            printf("Selected Atribute: Tourist Spots\n");
            printf("Second atribute - Card 1: %d tourist spots\n", touristSpot1);
            printf("Second atribute - Card 2: %d tourist spots\n", touristSpot2);
            break;
        default:
            printf("Invalid command.");
            break;
        }
        break;
    default:
        break;
    }

    // Estrutura lógica de exibição dos resultados
    if (population1 == population2 || area1 == area2 ||
        pib1 == pib2 || touristSpot1 == touristSpot2 ||
        popDensity1 == popDensity2)
    {
        printf("Result: That's a draw!!");
    }
    else if (population1 > population2 || area1 > area2 ||
             pib1 > pib2 || touristSpot1 > touristSpot2 ||
             popDensity1 < popDensity2)
    {
        printf("Result: Card 1 (%s) wins!\n", country1);
    }
    else
    {
        printf("Result: Card 2 (%s) wins!\n", country2);
    }

    return 0;
}
