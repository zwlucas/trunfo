#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;

    printf("===========================\n");
    printf("  Super Trunfo - Carta 1\n");
    printf("===========================\n");

    printf("Digite uma letra (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (01-04): %c", estado1);
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%i", &populacao1);
    printf("Digite a Area da cidade (Em km2): ");
    scanf("%f", &area1);
    printf("Qual o PIB: "); 
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%i", &pturisticos1);

    printf("===========================\n");
    printf("  Super Trunfo - Carta 2\n");
    printf("===========================\n");

    printf("Digite uma letra (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (01-04): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%i", &populacao2);
    printf("Digite a Area da cidade (Em km2): ");
    scanf("%f", &area2);
    printf("Qual o PIB (Em Bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%i", &pturisticos2);

    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;

    float superpoder1 = (float)populacao1 + area1 + pib1 + pturisticos1 + pibpercapita1 + (1 / densidade1);
    float superpoder2 = (float)populacao2 + area2 + pib2 + pturisticos2 + pibpercapita2 + (1 / densidade2);

    int comppopulacao = populacao1 > populacao2;
    int comparea = area1 > area2;
    int comppib = pib1 > pib2;
    int comppontos = pturisticos1 > pturisticos2;
    int compdensidade = densidade1 < densidade2;
    int comppibpercapita = pibpercapita1 > pibpercapita2;
    int compsuperpoder = superpoder1 > superpoder2;

    printf("===========================\n");
    printf("Super Trunfo - Cartas 1 e 2\n");
    printf("===========================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao %i\n", populacao1);
    printf("Area: %f km2\n", area1);
    printf("PIB: %f Bilhoes de Reais\n", pib1);
    printf("Numero de Pontos Turisticos: %i\n", pturisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB Per Capita %f\n", pibpercapita1);
  
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao %i\n", populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f Bilhoes de Reais\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", pturisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB Per Capita %f\n", pibpercapita2);

    printf("\n===========================\n");
    printf("  Comparacao de Cartas:\n");
    printf("===========================\n");

    printf("Populacao: Carta %d venceu (%d)\n", (comppopulacao ? 1 : 2), comppopulacao);
    printf("Area: Carta %d venceu (%d)\n", (comparea ? 1 : 2), comparea);
    printf("PIB: Carta %d venceu (%d)\n", (comppib ? 1 : 2), comppib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (comppontos ? 1 : 2), comppontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (compdensidade ? 1 : 2), compdensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (comppibpercapita ? 1 : 2), comppibpercapita);
    printf("Super Poder: Carta %d venceu (%d)\n", (compsuperpoder ? 1 : 2), compsuperpoder);


    return 0;
}
