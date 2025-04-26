#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    char estado1[10], estado2[10];
    char carta1[10], carta2[10];
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int ponto_turistico1, ponto_turistico2;

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

    sprintf(codigo1, "%s%s", estado1, carta1);

    printf("Carta 1: \n");

    printf("Estado: %s \n", estado1);

    printf("Codigo: %s \n", codigo1);

    printf("Nome da Cidade: %s \n", cidade1);

    printf("Populacao: %d \n", populacao1);

    printf("Area: %f Km² \n", area1);

    printf("PIB: %f de reais\n", PIB1);

    printf("Numeros de Pontos Turisticos: %d \n", ponto_turistico1);

 


    return 0;

}
