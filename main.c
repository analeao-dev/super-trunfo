#include <stdio.h>

int main()
{
  char estado1, estado2;
  char codigoCarta1[3] = "", codigoCarta2[3] = "";
  char cidade1[30] = "", cidade2[30] = "";
  int populacao1, populacao2;
  int pontosTuristicos1, pontosTuristicos2;
  float area1, area2;
  float pib1, pib2;

  // Primeira Carta: Entradas de dados
  printf("Digite o estado da 1ª carta: ");
  scanf("%c", &estado1);

  printf("Digite o código da 1ª carta: ");
  scanf("%s", codigoCarta1);

  printf("Digite a cidade da 1ª carta: ");
  scanf("%s", cidade1);

  printf("Digite número da população da 1ª carta: ");
  scanf("%d", &populacao1);

  printf("Digite número dos pontos turísticos da 1ª carta: ");
  scanf("%d", &pontosTuristicos1);

  printf("Digite a área da 1ª carta: ");
  scanf("%f", &area1);

  printf("Digite o PIB da pra 1ª carta: ");
  scanf("%f", &pib1);

  // Primeira Carta: Saída de dados
  // printf("Estado: %c\n", estado1);

  return 0;
}