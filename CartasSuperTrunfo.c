#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Variaveis da carta 1

  char estado1;
  char codigo1[20];
  char nomecidade[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Variaveis da carta 2

  char estado2;
  char codigo2[20];
  char nomeCidade[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Entrada de dados para carta 1
  printf("Cadastro da Carta 1:\n");
  printf("Digite o estado (letra): ");
  scanf(" %c", &estado1);
  printf("Digite o código da carta: ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", nomecidade);
  printf("Digite a população: ");
  scanf("%d", &populacao1);
  printf("Digite a área: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Entrada de dados para carta 2
  printf("\nCadastro da Carta 2:\n");
  printf("Digite o estado (letra): ");
  scanf(" %c", &estado2);
  printf("Digite o código da carta: ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade);
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("Digite a área: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Exibição dos dados da carta 1
  printf("\nDados da Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nomecidade);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos turísticos: %d\n", pontosTuristicos1);

  // Exibição dos dados da carta 2
  printf("\nDados da Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontosTuristicos2);

  return 0;
} 
