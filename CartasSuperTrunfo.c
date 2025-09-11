#include <stdio.h>

int main() {
 
    //variáveis da primeira carta
    char estado1;
    char codigo1[3];
    char cidade1[50];
    int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int turismo1 = 0;
    float densipop1; //incremento de novos dados
    float pibpercap1; //incremento de novos dados

    //variáveis da segunda carta
    char estado2;
    char codigo2[3];
    char cidade2[50];
    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int turismo2 = 0;
    float densipop2; //incremento de novos dados
    float pibpercap2; //incremento de novos dados

    //instruções para o usuário inserir dados da carta 1
    printf("Cadastro da Carta 1\n \n");
    printf("Insira a letra do estado (de A a H): \n");
    scanf(" %c", &estado1);
    printf("Insira o código da cidade (de 01 a 04): \n");
    scanf("%2s", codigo1);
    printf("Insira o nome da cidade: \n");
    scanf("%19s", cidade1);
    printf("Insira a populacão total de habitantes: \n");
    scanf("%d", &populacao1);
    printf("Insira tamanho da área da cidade: \n");
    scanf("%f", &area1);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &turismo1);

    //instruções para o usuário inserir dados da carta 2
    printf("\nCadastro da Carta 2\n \n");
    printf("Insira a letra do estado (de A a H): \n");
    scanf(" %c", &estado2);
    printf("Insira o código da cidade (de 01 a 04): \n");
    scanf("%2s", codigo2);
    printf("Insira o nome da cidade: \n");
    scanf("%19s", cidade2);
    printf("Insira a populacão total de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Insira tamanho da área da cidade: \n");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &turismo2);

    densipop1 = (float) populacao1 / area1;
    pibpercap1 = (float) pib1 / populacao1;
    densipop2 = (float) populacao2 / area2;
    pibpercap2 = (float) pib2 / populacao2;

    //exibir dados coletados para o usuário
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densipop1);
    printf("PIB per Capta: %.2f reais\n", pibpercap1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densipop2);
    printf("PIB per Capta: %.2f reais\n", pibpercap2);


    return 0;
}
