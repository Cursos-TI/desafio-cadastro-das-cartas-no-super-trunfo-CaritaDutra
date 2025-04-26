#include <stdio.h>

// Desafio Super Trunfo Novatos
// Criar codigos para criação de 2 cartas para o jogo super trunfo


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


//espaço para inicio da solicitação dos dados da segunda carta

    printf(" \n");
    printf(" \n");

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


//espaço para inicio da solicitação dos dados da segunda carta

    printf(" \n");
    printf(" \n");


//codigos para criação dos dados da segunda carta

    printf("Dados para cadastro da Primeira Carta: \n");

    printf(" \n");
    printf(" \n");


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

//espaço para inicio da exibição dos dados

    printf(" \n");
    printf(" \n");

    printf("Carta 1: \n");

    printf("Estado: %s \n", estado1);

    printf("Codigo: %s \n", codigo1);

    printf("Nome da Cidade: %s \n", cidade1);

    printf("Populacao: %d \n", populacao1);

    printf("Area: %2f Km² \n", area1);

    printf("PIB: %2f bilhoes de reais\n", PIB1);

    printf("Numeros de Pontos Turisticos: %d \n", ponto_turistico1);

//espaço para inicio da exibição dos dados da segunda carta

    printf(" \n");
    printf(" \n");


// Segunda Carta
    printf("Carta 2: \n");

    printf("Estado: %s \n", estado2);

    printf("Codigo: %s \n", codigo2);

    printf("Nome da Cidade: %s \n", cidade2);

    printf("Populacao: %d \n", populacao2);

    printf("Area: %2f Km² \n", area2);

    printf("PIB: %2f bilhoes de reais\n", PIB2);

    printf("Numeros de Pontos Turisticos: %d \n", ponto_turistico2);

    printf(" \n");
    printf(" \n");

 


    return 0;

}
