#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigocarta [2];
    char nomecidade [15];
    int população;
    float area;
    float pib;
    int pontosturisticos;
    
//Área para introduzir os dados pelo usuário para CARTA 1
  printf("Digite uma letra de 'A' a 'H':\n");// O usuário deverá digitar uma letra de A a H
  scanf("%c", &estado);

  printf("Digite um número de 1 a 4: \n");// O usuário deverá digitar um número de 1 a 4
  scanf("%d", codigocarta);

  printf("Digite o nome da cidade: \n");// O usuário deverá digitar o nome da cidade
  scanf("%s", &nomecidade);

  printf("Digite a população da cidade: \n"); // O usuário deverá digitar a população da cidade
  scanf("%d", &população);

  printf("Digite a área da cidade em quilômetros quadrados: \n");//O usuário deverá digitar a área da cidade em km²
  scanf("%f", &area);

  printf("Digite o PIB da cidade:\n");// O usuário deverá digitar o PIB
  scanf("%f", &pib);
  
  printf("Digite o número de pontos turísticos da cidade:\n");
  scanf("%d", &pontosturisticos);

  printf("Carta SuperTrunfo1 \n");
  
  return 0;

}