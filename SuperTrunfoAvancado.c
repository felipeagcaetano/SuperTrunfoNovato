#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    int numero1, numero2;
    float pibpc1, pibpc2, densidade1, densidade2, iDenPop1, iDenPop2;
    float superPoder1, superPoder2;
    int resultadoPop, resultadoArea, resultadoPib, resultadoPibpc, resultadoDen, resultadoSuper;

    //introdução
    printf("Trabalho Super Trunfo \n");

    //carta01 entrada
    printf("Digite o número da primeira carta: \n");
    scanf("%d", &numero1);
    
    printf("Digite a letra da primeira carta: \n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", &nome1);
    
    printf("Digite a população da primeira cidade: \n");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da primeira cidade: \n");
    scanf("%f",&area1);
    
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);
    
    printf ("Digite o número de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontos1);

    pibpc1 = (float) (pib1 / populacao1);
    densidade1 = (float) (populacao1 / area1);
    iDenPop1 = (float) 1/ (populacao1 / area1);
    superPoder1 = (float) (populacao1 + area1 + pib1 + pontos1 + pibpc1 + iDenPop1);

    //carta02 entrada
    printf("Digite o número da segunda carta: \n");
    scanf("%d", &numero2);
    
    printf("Digite a letra da segunda carta: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", &nome2);
    
    printf("Digite a população da segunda cidade: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite a área da segunda cidade: \n");
    scanf("%f",&area2);
   
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);
    
    printf ("Digite o número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontos2);

     pibpc2 = (float) (pib2 / populacao2);
    densidade2 = (float) (populacao2 / area2);
    iDenPop2 = (float) 1/ (populacao2 / area2);
    superPoder2 = (float) (populacao2 + area2 + pib2 + pontos2 + pibpc2 + iDenPop2);

    //saída carta01

    printf("Número da primeira carta é: %d \n", numero1);
    printf("A letra da primeira carta é: %c \n", estado1);
    printf("O código da primeira carta é: %s \n", codigo1);
    printf("O nome da cidade da primeira carta é: %s \n", nome1);
    printf("A população da primeira cidade é: %lu habitantes \n", populacao1);
    printf("A área da primeira cidade é: %f km² \n", area1);
    printf("O PIB da primeira cidade é: R$ %.2f \n", pib1);
    printf("O número de pontos turísticos da primeira cidade é: %d \n", pontos1);
    printf("O PIB per capita da primeira cidade é: R$ %.2f \n ", pibpc1);
    printf("A densidade demográfica da primeira cidade é de: %f hab/km² \n", densidade1);
    printf("O super poder da carta 1 é: %f \n", superPoder1);

    //saída carta02

    printf("Número da segunda carta é: %d \n", numero2);
    printf("A letra da segunda carta é: %c \n", estado2);
    printf("O código da segunda carta é: %s \n", codigo2);
    printf("O nome da cidade da segunda carta é: %s \n", nome2);
    printf("A população da segunda cidade é: %lu habitantes \n", populacao2);
    printf("A área da segunda cidade é: %f km²\n", area2);
    printf("O PIB da segunda cidade é: R$ %.2f \n", pib2);
    printf("O número de pontos turísticos da segunda cidade é: %d \n", pontos2);
    printf("O PIB per capita da segunda cidade é: R$ %.2f \n ", pibpc2);
    printf("A densidade demográfica da segunda cidade é de: %f hab/km² \n", densidade2);
    printf("O super poder da carta 2 é: %f \n", superPoder2);

    //comparação entre as duas cartas
    
    resultadoPop = populacao1 > populacao2;
    printf("A população da carta 1: %lu habitantes é maior que a população da carta 2: %lu habitantes? %d \n", populacao1, populacao2, resultadoPop);
    
    resultadoArea = area1 > area2;
    printf("A área da carta 1: %f km² é maior que a área da carta 2: %f km²? %d \n", area1, area2, resultadoArea);

    resultadoPib = pib1 > pib2;
    printf("O PIB da carta 1: R$ %f é maior que o PIB da carta 2: R$ %f? %d \n", pib1, pib2, resultadoPib);

    resultadoPibpc = pibpc1 > pibpc2;
    printf("O PIB per capita da carta 1: R$ %f é maior que o PIB per capita da carta 2: R$ %f? %d \n", pibpc1, pibpc2, resultadoPibpc);

    resultadoDen = densidade1 < densidade2;
    printf("A densidade da carta 1: %f habitantes / km² é menor que a densidade da carta 2: %f habitantes / km²? %d \n", densidade1, densidade2, resultadoDen);

    resultadoSuper = superPoder1 > superPoder2;
    printf("O super poder da carta 1: %f é maior que o super poder da carta 2: %f? %d \n", superPoder1, superPoder2, resultadoSuper);
     
    return 0;

}