#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1 = 'A'; //Letra de referência ao Estado da carta, sendo uma letra de "A" até "H"
    char codigo1 [3] = 'A00'; //Letra referente ao Estado mais um número de 01 a 04.
    char cidade1 [20] = 'JOINVILLE'; //Nome da cidade.
    int populacao1 = 1;
    float area1 = 1; //Área da cidade em km².
    float pib1 = 1;
    int ponto_turistico1 = 1;
    char estado2 = 'A'; //Letra de referência ao Estado da carta, sendo uma letra de "A" até "H"
    char codigo2 [3] = 'A00'; //Letra referente ao Estado mais um número de 01 a 04.
    char cidade2 [20] = 'JOINVILLE'; //Nome da cidade.
    int populacao2 = 1;
    float area2 = 1; //Área da cidade em km².
    float pib2 = 1;
    int ponto_turistico2 = 1;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite uma letra referente ao Estado da Carta: \n");
    scanf("%c", &estado1);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turisticos existem na cidade: \n");
    scanf("%d", &ponto_turistico1);

    printf("Digite uma letra referente ao Estado da Carta: \n");
    scanf("%c", &estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos existem na cidade: \n");
    scanf("%d", &ponto_turistico2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB:R$ %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", ponto_turistico1);
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB:R$ %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", ponto_turistico2);







    return 0;
}
