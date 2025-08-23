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

    //introdução
    printf("Trabalho Super Trunfo \n");

    //carta01 entrada
    printf("Digite o número da primeira carta: \n");
    scanf("%d", &numero1);
    
    printf("Digite a letra do primeiro estado: \n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade do primeiro estado: \n");
    scanf("%s", &nome1);
    
    printf("Digite a população do primeiro estado: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a área do primeiro estado: \n");
    scanf("%f",&area1);
    
    printf("Digite o PIB do primeiro estado: \n");
    scanf("%f", &pib1);
    
    printf ("Digite o número de pontos turísticos do primeiro estado: \n");
    scanf("%d", &pontos1);

    //carta02 entrada
    printf("Digite o número da segunda carta: \n");
    scanf("%d", &numero2);
    
    printf("Digite a letra do segundo estado: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade do segundo estado: \n");
    scanf("%s", &nome2);
    
    printf("Digite a população do segundo estado: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a área do segundo estado: \n");
    scanf("%f",&area2);
   
    printf("Digite o PIB do segundo estado: \n");
    scanf("%f", &pib2);
    
    printf ("Digite o número de pontos turísticos do segundo estado: \n");
    scanf("%d", &pontos2);

    //saída carta01

    printf("Número da primeira carta é: %d \n", numero1);
    printf("A letra do primeiro estado é: %c \n", estado1);
    printf("O código da primeira carta é: %s \n", codigo1);
    printf("O nome da cidade do primeiro estado é: %s \n", nome1);
    printf("A população do primeiro estado é: %d habitantes \n", populacao1);
    printf("A área do primeiro estado é: %f km² \n", area1);
    printf("O PIB do primeiro estado é: R$ %f \n", pib1);
    printf("O número de pontos turísticos do primeiro estado é: %d \n", pontos1);

    //saída carta02

    printf("Número da segunda carta é: %d \n", numero2);
    printf("A letra do segundo estado é: %c \n", estado2);
    printf("O código da segunda carta é: %s \n", codigo2);
    printf("O nome da cidade do segundo estado é: %s \n", nome2);
    printf("A população do segundo estado é: %d habitantes \n", populacao2);
    printf("A área do segundo estado é: %f km²\n", area2);
    printf("O PIB do segundo estado é: R$ %f \n", pib2);
    printf("O número de pontos turísticos do segundo estado é: %d \n", pontos2);





    

     return 0;

}