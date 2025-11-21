#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigocarta [5];
    char nomecidade [50];
    int população;
    float area;
    float pib;
    int pontosturisticos;
    
//Área para introduzir os dados pelo usuário para CARTA 1
  printf("Digite uma letra de 'A' a 'H':\n");// O usuário deverá digitar uma letra de A a H
  scanf("%c", &estado);

  printf("Digite um número de 1 a 4: \n");// O usuário deverá digitar um número de 1 a 4
  scanf("%d", codigocarta);


  return 0;

}