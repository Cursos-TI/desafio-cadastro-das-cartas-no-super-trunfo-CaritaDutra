#include <stdio.h>

// Desafio Super Trunfo Novatos
// Criar codigos para criação de 2 cartas para o jogo super trunfo
// Inclusão de Densidade Populacional e PIB per Capita - Nivel aventureiro

int main() {
     
    // criação das variaveis para cadastros de duas cartas:
    
    char estado1[10], estado2[10];
    char carta1[10], carta2[10];
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int ponto_turistico1, ponto_turistico2;


//Codigo para descrição do cadastro da primeira carta


    printf("Dados para cadastro da Primeira Carta: \n");


//codigos para criação dos dados da primeira carta

    printf("Digite o Estado 1: \n");
    scanf("%s", estado1);
  
    printf("Digite o numero da carta 1: \n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB cidade 1: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da cidade 1: \n");
    scanf("%d", &ponto_turistico1);

 

//codigos para criação dos dados da segunda carta

    printf("Dados para cadastro da Segunda Carta: \n");


    printf("Digite o Estado 2: \n");
    scanf("%s", estado2);
  
    printf("Digite o numero da carta 2: \n");
    scanf("%s", carta2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB cidade 2: \n");
    scanf("%f", &PIB2);
    
    printf("Digite o numero de pontos turisticos da cidade 2: \n");
    scanf("%d", &ponto_turistico2);


// Criação do codigo da carta - concactenar os campos estado e carta

    sprintf(codigo1, "%s%s", estado1, carta1);

    sprintf(codigo2, "%s%s", estado2, carta2);

// Codigos para a exibição dos dados das cartas
// Primeira carta


    printf("Carta 1: \n");

    printf("Estado: %s \n", estado1);

    printf("Codigo: %s \n", codigo1);

    printf("Nome da Cidade: %s \n", cidade1);

    printf("Populacao: %d \n", populacao1);

    printf("Area: %f Km² \n", area1);

    printf("PIB: %f bilhoes de reais\n", PIB1);

    printf("Numeros de Pontos Turisticos: %d \n", ponto_turistico1);

// Calculo da Densidade Populacional da cidade 1

    float densidade1 = populacao1 / area1;

    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);

// Calculo do PIB per-capita da cidade 1

    float percapita1 = PIB1 / populacao1;

    printf("PIB per-Capita: %.2f reais/habitante\n", percapita1);


// Segunda Carta
    printf("Carta 2: \n");

    printf("Estado: %s \n", estado2);

    printf("Codigo: %s \n", codigo2);

    printf("Nome da Cidade: %s \n", cidade2);

    printf("Populacao: %d \n", populacao2);

    printf("Area: %f Km² \n", area2);

    printf("PIB: %f bilhoes de reais\n", PIB2);

    printf("Numeros de Pontos Turisticos: %d \n", ponto_turistico2);

// Calculo da Densidade Populacional da cidade 2
     
     float densidade2 = populacao2 / area2;

    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);

  // Calculo do PIB per-capita da cidade 2

    float percapita2 = PIB2 / populacao2;

    printf("PIB per Capita: %.2f reais/habitante\n", percapita2);

 


    return 0;

}
