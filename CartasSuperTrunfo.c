#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char Estado;
    char código[20];
    char nome[20];
    int população;
    float área;
    float PIB;
    int Número;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
     
    printf("Carta 1: \n");

    printf("Digite o estado:\n ");
    scanf("%c", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &código);

    printf("Digite o nome da cidade: \n")
    scanf("%s", &nome);

    printf("Digite a população: \n")
    scanf("%d", &população);

    printf("Digite a área em km²: \n")
    scanf("%f", &área);

    printf("Digite o PIB: \n")
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Número);

    printf("Estado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\n", Estado, código, nome, população);
    printf("Área: %f\nPib: %f\nNúmero de pontos turísticos: %d\n", área, Número);


    printf("Carta 2:\n");

    printf("Digite o estado: \n");
    scanf("%c", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &código);

    printf("Digite o nome da cidade: \n")
    scanf("%s", &nome);

    printf("Digite a população: \n")
    scanf("%d", &população);

    printf("Digite a área em km²: \n")
    scanf("%f", &área);

    printf("Digite o PIB: \n")
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Número);

    printf("Estado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\n", Estado, código, nome, população);
    printf("Área: %f\nPib: %f\nNúmero de pontos turísticos: %d\n", área, Número);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    return 0;
}
