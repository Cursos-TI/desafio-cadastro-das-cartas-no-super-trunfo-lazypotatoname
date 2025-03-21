#include <stdio.h> 
//declaração das variáveis da carta 1
int main() {
char estado1;
char codigo1[5];
char nomedecidade1[20];
int populacao1;
float area1; 
float pib1;
int pontosturisticos1;
//declaração das variáveis da carta 2
char estado2;
char codigo2[5];
char nomedecidade2[20];
int populacao2;
float area2; 
float pib2;
int pontosturisticos2;
//entrada de dados da carta 1
printf ("digite o dados da primeira carta:\n");

printf("estado A-H:");
scanf("%c", &estado1);
printf("código da carta (ex:A01)");
scanf("%4s", &codigo1);
getchar(); // Limpar buffer
printf("Nome da Cidade: ");
fgets(nomedecidade1, sizeof(nomedecidade1), stdin);
printf("População: ");
scanf(" %d", &populacao1);
printf("Área (km²): ");
scanf(" %f", &area1);
printf("PIB (bilhões de reais): ");
scanf(" %f", &pib1);
printf("Número de Pontos Turísticos: ");
scanf(" %d", &pontosturisticos1);

getchar(); // Limpar buffer

// Entrada de dados da carta 2
printf("\nDigite os dados da segunda carta:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);
printf("Código da Carta (ex: A01): ");
scanf(" %4s", codigo2);
getchar(); // Limpar buffer
printf("Nome da Cidade: ");
fgets(nomedecidade2, sizeof(nomedecidade2), stdin);
printf("População: ");
scanf(" %d", &populacao2);
printf("Área (km²): ");
scanf(" %f", &area2);
printf("PIB (bilhões de reais): ");
scanf(" %f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf(" %d", &pontosturisticos2);

// Exibição da carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s", nomedecidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

// Exibição da carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s", nomedecidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

return 0;
}












}