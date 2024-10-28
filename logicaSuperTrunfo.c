#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Cadastro das Cartas:
   
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    char estado1[1], estado2[1], codigo_carta1[3], codigo_carta2[3], nome_cidade1[20], nome_cidade2[20];
    float area1, area2, pib1, pib2;
    
    printf ("Carta 1: \n");
    printf ("Digite o estado (entre A e H): ");
    scanf ("%s", &estado1);

    printf ("Digite o codigo da carta: ");
    scanf ("%s", &codigo_carta1);

    printf ("Digite o nome da cidade: ");
    scanf ("%s", &nome_cidade1);

    printf ("Digite a populacao: ");
    scanf ("%d", &populacao1);

    printf ("Digite a area: ");
    scanf ("%f", &area1);

    printf ("Digite o PIB: ");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos: ");
    scanf ("%d", &pontos_turisticos1);
    
    printf ("\nCarta 2: \n");
    printf ("Digite o estado (entre A e H): ");
    scanf ("%s", &estado2);

    printf ("Digite o codigo da carta: ");
    scanf ("%s", &codigo_carta2);

    printf ("Digite o nome da cidade: ");
    scanf ("%s", &nome_cidade2);

    printf ("Digite a populacao: ");
    scanf ("%d", &populacao2);

    printf ("Digite a area: ");
    scanf ("%f", &area2);

    printf ("Digite o PIB: ");
    scanf ("%f", &pib2);

    printf ("Digite o numero de pontos turisticos: ");
    scanf ("%d", &pontos_turisticos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
 
    if (populacao1 > populacao2) {
         printf("\nCarta 1 vence, pois tem a maior populacao.\n");
     } else {
         printf("\nCarta 2 vence, pois tem a maior populacao.\n");
     }

    return 0;
}