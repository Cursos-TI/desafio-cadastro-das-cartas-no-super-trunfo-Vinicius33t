#include <stdio.h>
#include <string.h>

struct CartasSuperTrunfo
{ char estado;
  char codigo[4];
  char cidade[50];
  int população;
};

void lerCarta(struct CartasSuperTrunfo *Carta){
 printf("\nDigite o estado (uma letra de A a H): ");
 scanf("%c",&Carta->estado);

 printf("\nDigite o código da carta:");
 scanf("%s",Carta->codigo);

 printf("Digite o nome da cidade:");
 scanf("%s",Carta->cidade);

 printf("Digite a população:");
 scanf("%d", &Carta->população);
}

int main(){
struct CartasSuperTrunfo carta1, carta2;

 printf("Insira os dados da carta 1:");
 lerCarta(&carta1);

 printf("insira os dados da carta 2:");
 lerCarta(&carta2);

 printf("\n\nDados da primeira carta:\n");
 printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\n",
    carta1.estado, carta1.codigo, carta1.cidade, carta1.população);

printf("\nDados da segunda carta:\n");
printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\n",
    carta2.estado, carta2.codigo, carta2.cidade, carta2.população);

    return 0;

}