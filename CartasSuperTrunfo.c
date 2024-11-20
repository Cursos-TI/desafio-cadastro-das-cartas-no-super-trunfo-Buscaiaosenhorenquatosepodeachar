#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado[50], codigodacarta[50], nomedacidade[50];
    int populacao;
    float areaemkm;
    float numeros;
    float densidade, pib, pib2;
    printf("digite o estado\n");
    scanf("%s", &estado); 
    
    printf("codigo da carta\n");
    scanf("%s", &codigodacarta); 
    printf("nome da cidade\n");
    scanf("%s", &nomedacidade);
   
    printf("digite a população\n");
    scanf("%d", &populacao); 
   
    printf("digite a area em km\n");
    scanf("%f", &areaemkm); 
    
    printf("digite os numeros de pontos turisticos\n");
    scanf("%f", &numeros);
    
    printf("digite o pib do estado \n");
    scanf("%f", &pib2);

    // %.0f usei para aparecer só depois da virgula    
    printf("estado:%s\n codigo da carta:%s\n nome da cidade:%s\n", estado, codigodacarta, nomedacidade);
    printf(" numero populacional:%d\n area em km:%.0f\n numeros de pontos turísticos:%.0f\n pib:%.2f\n ", populacao, areaemkm, numeros, pib2);
      // adicionei uma quest convertendo explicitamenhte as variaveis para não se perder dados (float)
      densidade = (float)(populacao / areaemkm);
      printf("densidade populacional:%.2f\n", densidade);
      
      pib = (float)(pib2 / populacao);
      printf(" pib per capita:%.2f\n", pib);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
