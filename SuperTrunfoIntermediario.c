#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    int numero1, numero2;
    float pibpc1, pibpc2, densidade1, densidade2;

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
    scanf("%d", &populacao1);
    
    printf("Digite a área da primeira cidade: \n");
    scanf("%f",&area1);
    
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);
    
    printf ("Digite o número de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontos1);

    pibpc1 = (float) pib1 / populacao1;
    densidade1 = (float) populacao1 / area1;

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
    scanf("%d", &populacao2);
    
    printf("Digite a área da segunda cidade: \n");
    scanf("%f",&area2);
   
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);
    
    printf ("Digite o número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontos2);

     pibpc2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;

    //saída carta01

    printf("Número da primeira carta é: %d \n", numero1);
    printf("A letra da primeira carta é: %c \n", estado1);
    printf("O código da primeira carta é: %s \n", codigo1);
    printf("O nome da cidade da primeira carta é: %s \n", nome1);
    printf("A população da primeira cidade é: %d habitantes \n", populacao1);
    printf("A área da primeira cidade é: %f km² \n", area1);
    printf("O PIB da primeira cidade é: R$ %f \n", pib1);
    printf("O número de pontos turísticos da primeira cidade é: %d \n", pontos1);
    printf("O PIB per capita da primeira cidade é: R$ %.2f \n ", pibpc1);
    printf("A densidade demográfica da primeira cidade é de: %f hab/km²", densidade1);

    //saída carta02

    printf("Número da segunda carta é: %d \n", numero2);
    printf("A letra da segunda carta é: %c \n", estado2);
    printf("O código da segunda carta é: %s \n", codigo2);
    printf("O nome da cidade da segunda carta é: %s \n", nome2);
    printf("A população da segunda cidade é: %d habitantes \n", populacao2);
    printf("A área da segunda cidade é: %f km²\n", area2);
    printf("O PIB da segunda cidade é: R$ %f \n", pib2);
    printf("O número de pontos turísticos da segunda cidade é: %d \n", pontos2);
    printf("O PIB per capita da segunda cidade é: R$ %.2f \n ", pibpc2);
    printf("A densidade demográfica da segunda cidade é de: %f hab/km²", densidade2);





    

     return 0;

}
