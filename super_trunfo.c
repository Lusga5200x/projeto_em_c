#include <stdio.h>

int main(void)
{
 // Projeto em andamento - menu de comparação será implementado


//Variáveis
    
    char estado1, estado2;
    char codigo1 [10], codigo2[20];
    char nome1[50], nome2[50];
    
    unsigned long populacao1, populacao2;
    
    int pontos_turisticos1, pontos_turisticos2;
    
    float area1, area2;
    float pib1, pib2;
    float super_poder1, super_poder2;

    double densidade_pop1, densidade_pop2;
    double pib_percapita1, pib_percapita2;
    
//Cadastrando carta 1:

    printf("Vamos cadastrar a primeira carta\n");

    printf("\nDigite uma letra para representar o estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (ex:A01):\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nome1);

    printf("Digite a população da cidade:\n");
    scanf(" %lu", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf(" %i", &pontos_turisticos1);

//Cadastrando carta 2:

    printf("Vamos cadastrar a segunda carta\n");

    printf("\nDigite uma letra para representar o estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (ex:A01):\n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nome2);

    printf("Digite a população da cidade:\n");
    scanf(" %lu", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf(" %i", &pontos_turisticos2);

// Calculando atributos das duas cartas

    //Calculo carta 1:
    densidade_pop1 = (double) populacao1 / area1;

    pib_percapita1 = (double) pib1 / populacao1;

    super_poder1 = (double)populacao1 + (double)area1 + (double)pib1 + pontos_turisticos1 +pib_percapita1 + (1.0 / densidade_pop1);

    //Calculo carta 2:
    densidade_pop2 = (double) populacao2 / area2;

    pib_percapita2 = (double) pib2 / populacao2;

    super_poder2 = (double)populacao2 + (double)area2 + (double)pib2 + pontos_turisticos2 +pib_percapita2 + (1.0 / densidade_pop2);

//Exibir cartas

    //Carta1: 
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: R$%.2f\n", pib_percapita1);
    printf("Super poder: %f\n", super_poder1);

    //Carta2: 
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: R$%.2f\n", pib_percapita2);
    printf("Super poder: %f\n", super_poder2);

// Menu de escolha de atributo

    //Primeiro Menu
    /*
            - Escolha um atributo
                1 - População
                2 - Área
                3 - PIB
                4 - Pontos túristicos
                5 - Densidade demográfica
        Segundo menu
            - Escolha um outro atributo
                1 - População
                2 - Área
                3 - PIB
                4 - Pontos túristicos
                
        Um dos escolidos não pode se repetir

    5. Comparar
        Atributo 1: compara carta 1 vs carta 2
        Atributo 2: compara carta 1 vs carta 2
            Maior valor vence 
                Exceção:
                    - densidade demográfica → menor valor vence

    6. Decidir vencedor
        Quem tiver mais pontos vence.
            Empate → mostra “Empate!”

    FIM
    */

    return 0;
}
