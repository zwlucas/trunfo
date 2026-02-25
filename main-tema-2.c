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
    printf("Código da carta (01-04): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Qual o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%i", &pturisticos1);

    printf("\n===========================\n");
    printf("  Super Trunfo - Carta 2\n");
    printf("===========================\n");

    printf("Digite uma letra (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (01-04): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Qual o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%i", &pturisticos2);

    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;

    float superpoder1 = (float)populacao1 + area1 + pib1 + pturisticos1 + pibpercapita1 + (1 / densidade1);
    float superpoder2 = (float)populacao2 + area2 + pib2 + pturisticos2 + pibpercapita2 + (1 / densidade2);

    printf("\n===========================\n");
    printf("       Cartas Cadastradas\n");
    printf("===========================\n");

    printf("\nCarta 1 - %s (%c%s)\n", cidade1, estado1, codigo1);
    printf("População: %lu | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f | PIB per Capita: %.2f\n",
           populacao1, area1, pib1, pturisticos1, densidade1, pibpercapita1);

    printf("\nCarta 2 - %s (%c%s)\n", cidade2, estado2, codigo2);
    printf("População: %lu | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f | PIB per Capita: %.2f\n",
           populacao2, area2, pib2, pturisticos2, densidade2, pibpercapita2);

    int opcao1, opcao2;
    printf("\n===========================\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("===========================\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao1);

    printf("\n===========================\n");
    printf("Escolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i == opcao1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica (menor vence)\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
            case 7: printf("7 - Super Poder\n"); break;
        }
    }
    printf("===========================\n");
    printf("Digite a segunda opção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("\nVocê escolheu o mesmo atributo duas vezes! Reinicie o programa.\n");
        return 0;
    }

    float valorA1, valorA2, valorB1, valorB2;
    char nomeA[50], nomeB[50];

    switch (opcao1) {
        case 1: valorA1 = populacao1; valorA2 = populacao2; sprintf(nomeA, "População"); break;
        case 2: valorA1 = area1; valorA2 = area2; sprintf(nomeA, "Área"); break;
        case 3: valorA1 = pib1; valorA2 = pib2; sprintf(nomeA, "PIB"); break;
        case 4: valorA1 = pturisticos1; valorA2 = pturisticos2; sprintf(nomeA, "Pontos Turísticos"); break;
        case 5: valorA1 = densidade1; valorA2 = densidade2; sprintf(nomeA, "Densidade Demográfica"); break;
        case 6: valorA1 = pibpercapita1; valorA2 = pibpercapita2; sprintf(nomeA, "PIB per Capita"); break;
        case 7: valorA1 = superpoder1; valorA2 = superpoder2; sprintf(nomeA, "Super Poder"); break;
    }

    switch (opcao2) {
        case 1: valorB1 = populacao1; valorB2 = populacao2; sprintf(nomeB, "População"); break;
        case 2: valorB1 = area1; valorB2 = area2; sprintf(nomeB, "Área"); break;
        case 3: valorB1 = pib1; valorB2 = pib2; sprintf(nomeB, "PIB"); break;
        case 4: valorB1 = pturisticos1; valorB2 = pturisticos2; sprintf(nomeB, "Pontos Turísticos"); break;
        case 5: valorB1 = densidade1; valorB2 = densidade2; sprintf(nomeB, "Densidade Demográfica"); break;
        case 6: valorB1 = pibpercapita1; valorB2 = pibpercapita2; sprintf(nomeB, "PIB per Capita"); break;
        case 7: valorB1 = superpoder1; valorB2 = superpoder2; sprintf(nomeB, "Super Poder"); break;
    }

    float pontos1 = 0, pontos2 = 0;

    pontos1 += (opcao1 == 5) ? (valorA1 < valorA2) : (valorA1 > valorA2);
    pontos2 += (opcao1 == 5) ? (valorA2 < valorA1) : (valorA2 > valorA1);

    pontos1 += (opcao2 == 5) ? (valorB1 < valorB2) : (valorB1 > valorB2);
    pontos2 += (opcao2 == 5) ? (valorB2 < valorB1) : (valorB2 > valorB1);

    float soma1 = valorA1 + valorB1;
    float soma2 = valorA2 + valorB2;

    printf("\n===========================\n");
    printf("   Resultado da Comparação\n");
    printf("===========================\n");
    printf("%s - %s: %.2f e %.2f (Soma: %.2f)\n", cidade1, nomeA, valorA1, valorB1, soma1);
    printf("%s - %s: %.2f e %.2f (Soma: %.2f)\n", cidade2, nomeA, valorA2, valorB2, soma2);

    if (soma1 > soma2)
        printf("\n Vencedora: Carta 1 (%s)\n", cidade1);
    else if (soma2 > soma1)
        printf("\nVencedora: Carta 2 (%s)\n", cidade2);
    else
        printf("\nEmpate!\n");

    return 0;
}
