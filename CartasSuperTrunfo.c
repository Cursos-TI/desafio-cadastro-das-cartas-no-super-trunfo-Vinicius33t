#include <stdio.h>

int main(){

  char estado; 
  char codigo [20];
  char nome [50];
  int população;
  float área;
  float pib;
  int Número;
  float densidade = (float) população / área;
  float PIB = (float) pib / população;

  printf("Carta 1: \n");

  printf("digite o estado: \n");
  scanf("%c", &estado);

  printf("digite o código da carta: \n");
  scanf("%s", &codigo);

  printf("digite o nome da cidade: \n");
  scanf("%s", &nome);

  printf("digite a populção: \n");
  scanf("%d", &população);

  printf("digite a área em km²: \n");
  scanf("%f",&área);

  printf("digite o pib: \n");
  scanf("%f", &pib);

  printf("digite o número e pontos turísticos: \n");
  scanf("%d", &Número);

  printf("Densidade populacional: %.2f\n");

  printf("Pib per capta: %.2f\n");

  printf("Estado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\n", estado, codigo, nome, população);
  printf("Área: %f\nPib: %f\nNúmero de pontos turísticos: %d\nDensidade populacional: %f\n", área, pib, Número, densidade, PIB);

printf("Carta 2: \n");

  printf("digite o estado: \n");
  scanf("%c", &estado);

  printf("digite o código da carta: \n");
  scanf("%s", &codigo);

  printf("digite o nome da cidade: \n");
  scanf("%s", &nome);

  printf("digite a populção: \n");
  scanf("%d", &população);

  printf("digite a área em km²: \n");
  scanf("%f",&área);

  printf("digite o pib: \n");
  scanf("%f", &pib);

  printf("digite o número e pontos turísticos: \n");
  scanf("%d", &Número);


  printf("Estado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\n", estado, codigo, nome, população);
  printf("Área: %f\nPib: %f\nNúmero de pontos turísticos: %d\nDensidade populacional: %f\nPib percapta", área, pib, Número, densidade, PIB);

  return 0;

}
























