#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades
// utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // --- Área para definição das variáveis ---
  // (Como o desafio pede 2 cartas, duplicamos as variáveis)

  // Variáveis para a Carta 1
  char estado_1;
  char codigo_1[5];        // Array para strings (ex: "A01" + '\0')
  char nome_cidade_1[50];  // Array para o nome da cidade
  int populacao_1;
  float area_1;
  float pib_1;
  int pontos_turisticos_1;

  // Variáveis para a Carta 2
  char estado_2;
  char codigo_2[5];
  char nome_cidade_2[50];
  int populacao_2;
  float area_2;
  float pib_2;
  int pontos_turisticos_2;


  // --- Área para entrada de dados ---

  // Leitura dos dados da Carta 1
  printf("--- Cadastro da Carta 1 ---\n");

  printf("Digite o Estado (A-H): ");
  // O espaço antes de %c ignora quebras de linha (Enter) anteriores
  scanf(" %c", &estado_1);

  printf("Digite o Código da Carta (ex: A01): ");
  // Para strings (array de char), não usamos o &
  scanf("%s", codigo_1);

  printf("Digite o Nome da Cidade: ");
  // " %[^\n]" lê a string inteira, incluindo espaços, até o Enter
  scanf(" %[^\n]", nome_cidade_1);

  printf("Digite a População: ");
  scanf("%d", &populacao_1);

  printf("Digite a Área (em km²): ");
  scanf("%f", &area_1);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib_1);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos_1);

  printf("\n"); // Adiciona uma linha em branco para separar

  // Leitura dos dados da Carta 2
  printf("--- Cadastro da Carta 2 ---\n");

  printf("Digite o Estado (A-H): ");
  // O espaço aqui é crucial para consumir o 'Enter' do scanf anterior
  scanf(" %c", &estado_2);

  printf("Digite o Código da Carta (ex: B02): ");
  scanf("%s", codigo_2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nome_cidade_2);

  printf("Digite a População: ");
  scanf("%d", &populacao_2);

  printf("Digite a Área (em km²): ");
  scanf("%f", &area_2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib_2);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos_2);


  // --- Área para exibição dos dados das cidades ---

  printf("\n\n======================================\n");
  printf("      CARTAS CADASTRADAS\n");
  printf("======================================\n");

  // Exibindo a Carta 1
  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", codigo_1);
  printf("Nome da Cidade: %s\n", nome_cidade_1);
  printf("População: %d\n", populacao_1);
  // %.2f formata o float para 2 casas decimais
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);

  // Exibindo a Carta 2
  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c\n", estado_2);
  printf("Código: %s\n", codigo_2);
  printf("Nome da Cidade: %s\n", nome_cidade_2);
  printf("População: %d\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);


  return 0;
}
