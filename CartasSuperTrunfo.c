#include <stdio.h>

int main(){
    // Aqui estou declarando as variaveis

    char cidade01[50], cidade02[30];
    char estado1[50], estado2[50];
    char codigo_de_carta1[20], codigo_de_carta2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    
    // informações da carta 01

    printf(" Carta 01\n ");
    printf("Digite uma letra de A-H para representar um estado:\n");
    printf("Digite nome do estado:\n");
    scanf("%s, \n", estado1);
    printf("digite o codigo de carta 01:\n");
    scanf("%s, /n", codigo_de_carta1);
    printf("Digite o nome da cidade:\n");
    scanf("%s, \n", cidade01); 
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d, \n", &populacao1);
    printf("Digite a area em quilometros quadrados:\n");
    scanf("%f, \n", &area1);
    printf("Digite o produto interno bruto da cidade (PIB):\n");
    scanf("%f, \n", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d, \n", &pontosturisticos1);


    // informações da carta 02 

    printf(" Carta 02\n ");
    printf("Digite uma letra de A-H para representar um estado:\n");
    printf("Digite nome do estado:\n");
    scanf("%s, \n", estado2);
    printf("digite o codigo de carta2:\n");
    scanf("%s, /n", codigo_de_carta2);
    printf("Digite o nome da cidade:\n");
    scanf("%s, \n", cidade02); 
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d, \n", &populacao2);
    printf("Digite a area em quilometros quadrados:\n");
    scanf("%f, \n", &area2);
    printf("Digite o produto interno bruto da cidade (PIB):\n");
    scanf("%f, \n", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d, \n", &pontosturisticos2);

    // exibições da carta 01


    printf("carta 01\n");
    printf("estado: %s\n", estado1);
    printf("codigo de carta: %s\n", codigo_de_carta1);
    printf("cidade: %s\n", cidade01);
    printf("quantidade de habitantes: %d\n", populacao1);
    printf("area em quilometros quadrados: %f\n", area1);
    printf("Produto interno bruto(pib): %f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

    // exibições da carta 02

    printf("carta 02\n");
    printf("estado: %s\n", estado2);
    printf("codigo de carta: %s\n", codigo_de_carta2);
    printf("cidade: %s\n", cidade02);
    printf("quantidade de habitantes: %d\n", populacao2);
    printf("area em quilometros quadrados: %f\n", area2);
    printf("Produto interno bruto(pib): %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}


   
