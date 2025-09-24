#include <stdio.h>

int main() {
    //variáveis da primeira carta
    char estado1;
    char codigo1[3];
    char cidade1[50];
    unsigned long int populacao1 = 0; // agora unsigned long int
    float area1 = 0;
    float pib1 = 0;
    int turismo1 = 0;
    float densipop1;
    float pibpercap1;
    float superPoder1;

    //variáveis da segunda carta
    char estado2;
    char codigo2[3];
    char cidade2[50];
    unsigned long int populacao2 = 0; // agora unsigned long int
    float area2 = 0;
    float pib2 = 0;
    int turismo2 = 0;
    float densipop2;
    float pibpercap2;
    float superPoder2;

    //cadastro carta 1
    printf("Cadastro da Carta 1\n\n");
    printf("Insira a letra do estado (de A a H): ");
    scanf(" %c", &estado1);
    printf("Insira o código da cidade (de 01 a 04): ");
    scanf("%2s", codigo1);
    printf("Insira o nome da cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Insira a populacao total de habitantes: ");
    scanf("%lu", &populacao1);
    printf("Insira tamanho da area da cidade: ");
    scanf("%f", &area1);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &turismo1);

    //cadastro carta 2
    printf("\nCadastro da Carta 2\n\n");
    printf("Insira a letra do estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("Insira o código da cidade (de 01 a 04): ");
    scanf("%2s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Insira a populacao total de habitantes: ");
    scanf("%lu", &populacao2);
    printf("Insira tamanho da area da cidade: ");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &turismo2);

    //cálculos
    densipop1 = (float) populacao1 / area1;
    pibpercap1 = (float) pib1 / populacao1;
    densipop2 = (float) populacao2 / area2;
    pibpercap2 = (float) pib2 / populacao2;

    superPoder1 = (float) populacao1 + area1 + pib1 + turismo1 + pibpercap1 + (1.0f / densipop1);
    superPoder2 = (float) populacao2 + area2 + pib2 + turismo2 + pibpercap2 + (1.0f / densipop2);

    //exibir dados coletados para o usuário
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densipop1);
    printf("PIB per Capta: %.2f reais\n", pibpercap1);
    printf("Super Poder: %f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densipop2);
    printf("PIB per Capta: %.2f reais\n", pibpercap2);
    printf("Super Poder: %f\n", superPoder2);


    //comparações das cartas
    printf("\n=== Comparacao de Cartas: ===\n");
    printf("Legenda: (1) Vitória da Carta 1 | (0) Vitória da Carta 2\n\n");

    printf("Populacao: (%d)\n", populacao1 > populacao2);
    printf("Area: (%d)\n", area1 > area2);
    printf("PIB: (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: (%d)\n", turismo1 > turismo2);
    printf("Densidade Populacional: (%d)\n", densipop1 < densipop2); // menor vence
    printf("PIB per Capita: (%d)\n", pibpercap1 > pibpercap2);
    printf("Super Poder: (%d)\n", superPoder1 > superPoder2);


    return 0;
}
