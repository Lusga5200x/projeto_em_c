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
    int opcao1, opcao2, opcao3, opcao4;
    int comparacao1, comparacao2, comparacao3, comparacao4;
    
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

    //Primeiro Menu Jogador1
    printf("\nJogador 1 escolha um atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos túristicos\n");
    printf("5 - Densidade demográfuca\n");
    printf("\nEscolha: ");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        if (opcao1)
        {
            comparacao1 = 1;
        }
        
    break;

    case 2:
        if (opcao1)
        {
            comparacao1 = 2;
        }
        
    break;

    case 3:
        if (opcao1)
        {
            comparacao1 = 3;
        }
        
    break;
    
    case 4:
        if (opcao1)
        {
            comparacao1 = 4;
        }
        
    break;

    case 5:
        if (opcao1)
        {
            comparacao1 = 5;
        }
        
    break;

    default:

        printf("escolha uma opção válida");

    break;
    }
    
    //Segundo menu Jogador1
    printf("\nEscolha outro atributo:\n");

    if (opcao1 == 1)
    {
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos túristicos\n");
        printf("5 - Densidade demográfuca\n");
    }   
    
    else if (opcao1 == 2)
    {
        printf("1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Pontos túristicos\n");
        printf("5 - Densidade demográfuca\n");
    }

    else if (opcao1 == 3)
    {
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Pontos túristicos\n");
        printf("5 - Densidade demográfuca\n");
    }
    
    else if (opcao1 == 4)
    {
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade demográfuca\n");
    }
    
    else if (opcao1 == 5)
    {
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos túristicos\n");
    }
    
    printf("\nEscolha: ");
    scanf("%d", &opcao2);

        switch (opcao2)
    {
    case 1:
        if (opcao2)
        {
            comparacao2 = 1;
        }
        
    break;

    case 2:
        if (opcao2)
        {
            comparacao2 = 2;
        }
        
    break;

    case 3:
        if (opcao2)
        {
            comparacao2 = 3;
        }
        
    break;
    
    case 4:
        if (opcao2)
        {
            comparacao2 = 4;
        }
        
    break;

    case 5:
        if (opcao2)
        {
            comparacao2 = 5;
        }
        
    break;

    default:

        printf("escolha uma opção válida");

    break;
    }
    
    // Menu de escolha de atributo

    //Primeiro Menu Jogador2
    printf("\nJogador 2 escolha um atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos túristicos\n");
    printf("5 - Densidade demográfuca\n");
    printf("\nEscolha: ");
    scanf("%d", &opcao3);

    switch (opcao3)
    {
    case 1:
        if (opcao3)
        {
            comparacao3 = 1;
        }
        
    break;

    case 2:
        if (opcao3)
        {
            comparacao3 = 2;
        }
        
    break;

    case 3:
        if (opcao3)
        {
            comparacao3 = 3;
        }
        
    break;
    
    case 4:
        if (opcao3)
        {
            comparacao3 = 4;
        }
        
    break;

    case 5:
        if (opcao3)
        {
            comparacao3 = 5;
        }
        
    break;

    default:

        printf("escolha uma opção válida");

    break;
    }
    
    //Segundo menu Jogador1
    printf("\nEscolha outro atributo:\n");

    if (opcao3 == 1)
    {
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos túristicos\n");
        printf("5 - Densidade demográfuca\n");
    }   
    
    else if (opcao3 == 2)
    {
        printf("1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Pontos túristicos\n");
        printf("5 - Densidade demográfuca\n");
    }

    else if (opcao3 == 3)
    {
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Pontos túristicos\n");
        printf("5 - Densidade demográfuca\n");
    }
    
    else if (opcao3 == 4)
    {
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade demográfuca\n");
    }
    
    else if (opcao3 == 5)
    {
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos túristicos\n");
    }
    
    printf("\nEscolha: ");
    scanf("%d", &opcao4);

        switch (opcao4)
    {
    case 1:
        if (opcao4)
        {
            comparacao4 = 1;
        }
        
    break;

    case 2:
        if (opcao4)
        {
            comparacao4 = 2;
        }
        
    break;

    case 3:
        if (opcao4)
        {
            comparacao4 = 3;
        }
        
    break;
    
    case 4:
        if (opcao4)
        {
            comparacao4 = 4;
        }
        
    break;

    case 5:
        if (opcao4)
        {
            comparacao4 = 5;
        }
        
    break;

    default:

        printf("escolha uma opção válida");

    break;
    }
    
    /*

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
