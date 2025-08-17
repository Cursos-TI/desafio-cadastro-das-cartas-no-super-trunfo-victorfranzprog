#include <stdio.h>
 
int main() {
   int populacao, pontos, populacao2, pontos2;
   float area, pib, area2, pib2;
   char estado[50], codigo[50], cidade[50], estado2[50], codigo2[50], cidade2[50];

// base referente a carta1

   printf("Cadastro da Carta 1:\n");
   printf("Digite o Estado (A-H): ");
   scanf("%s", &estado);

   printf("Digite o código (Ex:A01): ");
   scanf("%s", &codigo);

   printf("Digite o Nome da Cidade: ");
   scanf("%s", &cidade);

   printf("Digite a População: ");
   scanf("%d", &populacao);

   printf("Digite a Área (em km2): ");
   scanf("%f", &area);

   printf("Digite o PIB (em bilhoes de reais): ");
   scanf("%f", &pib);

   printf("Digite o Numero de Pontos Turisticos: ");
   scanf("%d", &pontos);

// base referente a carta2

   printf("\nCadastro da Carta 2:\n");
   printf("Digite o Estado (A-H): ");
   scanf("%s", &estado2);

   printf("Digite o código (Ex:A01): ");
   scanf("%s", &codigo2);

   printf("Digite o Nome da Cidade: ");
   scanf("%s", &cidade2);

   printf("Digite a População: ");
   scanf("%d", &populacao2);

   printf("Digite a Área (em km2): ");
   scanf("%f", &area2);

   printf("Digite o PIB (em bilhoes de reais): ");
   scanf("%f", &pib2);

   printf("Digite o Numero de Pontos Turisticos: ");
   scanf("%d", &pontos2);

   printf("\n----Carta1----\n");
   printf("Estado: %s\n",estado);
   printf("Código: %s\n",codigo);
   printf("Nome da cidade: %s\n",cidade);
   printf("População: %d\n",populacao);
   printf("Área: %.2f km²\n ",area);
   printf("PIB: %.2f bilhões de reais\n",pib);
   printf("Número de Pontos Turísticos: %d\n",pontos);


   printf("\n----Carta2----\n");
   printf("Estado: %s\n",estado2);
   printf("Código: %s\n",codigo2);
   printf("Nome da cidade: %s\n",cidade2);
   printf("População: %d\n",populacao2);
   printf("Área: %.2f km²\n ",area2);
   printf("PIB: %.2f bilhões de reais\n",pib2);
   printf("Número de Pontos Turísticos: %d\n",pontos2);


   return 0;
}
