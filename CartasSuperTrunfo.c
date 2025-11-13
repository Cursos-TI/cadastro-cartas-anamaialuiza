#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
      char estado [50];
      char codigocidade [3];
      char cidade [50]; 
      int população;
      float area;
      float pib;
      int pontosturisticos;
  
      

  // Área para entrada de dados
      printf ("Digite o nome de um estado brasileiro\n");//Usuário deverá inserir o nome de um estado do Brasil
      scanf ("%s", &estado);

      printf("Digite o código da carta que representa a cidade\n");//Usuário deverá inserir o código da cidade
      scanf("%s", &codigocidade);

      printf("Digite o nome da cidade\n");//Usuário deverá inserir o nome da cidade
      scanf("%s", &cidade);

      printf("Digite a população total\n");//Usuário deverá inserir a população total
      scanf("%d", &população);

      printf("Digite o PIB\n");//Usuário deverá inserir o PIB
      scanf("%f", &pib);

      printf("Digite os pontos turísticos\n");//Usuário deverá inserir o número de pontos turísticos
      scanf("%d", &pontosturisticos);

      printf("Digite a área total\n");//Usuário deverá inserir a área total
      scanf("%f", &area);

  // Área para exibição dos dados da cidade
      printf("Carta 1 - Supertrunfo\n");

      printf("O estado é:%s", estado);

      printf("O código da cidade é: %s", codigocidade);

      printf("O nome da cidade é: %s", cidade);

      printf("População total: %d", população);

      printf("PIB: %f", pib);

      printf("Pontos Turísticos:%d", pontosturisticos);

      printf("Área total:%f", area);


      

return 0;
} 
