#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // === Declarando as variáveis para o jogo ===

    // Código do Estado Carta 1 e Carta 2, respectivamente.
    char estado_carta1, estado_carta2;

    // Código da Carta 1 e Carta 2, respectivamente.
    char codigo_da_carta1[10], codigo_da_carta2[10];

    // Nome da cidade da Carta 1 e Carta 2, respectivamente.
    char nome_da_cidade_carta1[20], nome_da_cidade_carta2[20];

    // Número de habitantes da cidade da Carta 1 e Carta 2, respectivamente.
    int populacao_carta1, populacao_carta2;

    // Área da cidade em km² da cidade da Carta 1 e Carta 2, respectivamente.
    float area_em_km2_carta1, area_em_km2_carta2;

    // PIB da cidade da Carta 1 e Carta 2, respectivamente.
    float pib_carta1, pib_carta2;

    // Número de pontos turísticos que a cidade da Carta 1 e Carta 2 possuem, respectivamente.
    int numero_pontos_turisticos_carta1, numero_pontos_turisticos_carta2;

    // Densidade populacional da Carta 1 e Carta 2, respectivamente.
    float densidade_populacional_carta1, densidade_populacional_carta2;

    // PIB per capito da Carta 1 e Carta 2, respectivamente.
    float pib_per_capita_carta1, pib_per_capita_carta2;

    // Super Poder para a Carta 1 e Carta 2, respectivamente.
    float superPoder_carta1, superPoder_carta2;


    printf("=== Desafio Super Trunfo - Países=== \n");

    // === Entrada de dados da Carta 1:
    printf("\n=== Cadastro da Carta 1 === \n");

        
    printf("Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: ");
    scanf(" %c", &estado_carta1); // Inserindo valor a variável referente ao Estado da Carta 1

    printf("Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: A01): ");
    scanf("%s", codigo_da_carta1); //Inserindo valor à variável referente ao Código da Carta 1

    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_da_cidade_carta1); //Inserindo valor à variável referente ao Nome da cidade da Carta 1

    printf("Digite qual a populacao da cidade: ");
    scanf("%d", &populacao_carta1); // Inserindo valor à variável referente a População da Carta 1

    printf("Digite a Área da cidade (em km²): ");
    scanf("%f", &area_em_km2_carta1); // Inserindo valor à variável referente a Área da Carta 1

    printf("Digite o PIB  (em bilhões de Reais): ");
    scanf("%f", &pib_carta1); // Inserindo valor à variável referente ao PIB da Carta 1
    pib_carta1 *= 1000000000.0; // Converte para possibilitar o cálculo para PIB per Capita

    printf("Digite o número de pontos turísticos que a Cidade possui: ");
    scanf("%d", &numero_pontos_turisticos_carta1); // Inserindo valor à variável referente ao Número de pontos turísticos da Carta 1

    
    //  === Cálculos para Carta 1  para Densidade Populacional e PIP per Capita===

    // Cálculo da densidade populacional da Carta 1
    densidade_populacional_carta1 = (float) populacao_carta1 / area_em_km2_carta1;

    // Cálculo do PIB per Capita da Carta 1
    pib_per_capita_carta1 =  pib_carta1 / (float) populacao_carta1;
    

    
    // === Entrada de dados da Carta 2:
    printf("\n === Cadastro da Carta 2 === \n");

    printf("Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: ");
    scanf(" %c", &estado_carta2); // Inserindo valor a variável referente ao Estado da Carta 2

    printf("Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: B01): ");
    scanf("%s", codigo_da_carta2); //Inserindo valor à variável referente ao Código da Carta 2

    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_da_cidade_carta2); //Inserindo valor à variável referente ao Nome da cidade da Carta 2

    printf("Digite qual a população da cidade: ");
    scanf("%d", &populacao_carta2); // Inserindo valor à variável referente a População da Carta 2

    printf("Digite a Área da cidade (em km²): ");
    scanf("%f", &area_em_km2_carta2); // Inserindo valor à variável referente a Área da Carta 2

    printf("Digite o PIB  (em bilhões de Reais): ");
    scanf("%f", &pib_carta2); // Inserindo valor à variável referente ao PIB da Carta 2
    pib_carta2 *= 1000000000.0; // Converte para possibilitar o cálculo para PIB per Capita

    printf("Digite o número de pontos turísticos que a Cidade possui: ");
    scanf("%d", &numero_pontos_turisticos_carta2); // Inserindo valor à variável referente ao Número de pontos turísticos da Carta 2
  
    //  === Cálculos para Carta 2 para Densidade Populacional e PIP per Capita===
  
    // Cálculo da densidade populacional da Carta 2
    densidade_populacional_carta2 = (float) populacao_carta2 / area_em_km2_carta2;
    
    // Cálculo do PIB per Capita da Carta 2
    pib_per_capita_carta2 =  pib_carta2 / (float) populacao_carta2;

    

    // Revertendo PIB's para bilhões
    pib_carta1 /= 1000000000.0;
    pib_carta2 /= 1000000000.0;


    // === Menu Interativo ===
    int opcao1, opcao2;
    int resultado1, resultado2;
    float atributo1_carta1, atributo1_carta2, atributo2_carta1, atributo2_carta2;

    // * Menu 1*
    printf("\n === Menu de Escolhas do Primeiro Atributo === \n");
    printf("Digite o número do Atributo que deseja comparar primeiro: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos Turísticos \n");
    printf("5. Densidade Populacional \n");
    scanf("%d", &opcao1);
    // * Menu 2*
    printf("\n === Menu de Escolhas do Segundo Atributo === \n");
    printf("Digite o número do  Segundo Atributo que deseja comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos Turísticos \n");
    printf("5. Densidade Populacional \n");
    scanf("%d", &opcao2);

    // === Impressão de Comparação dos poderes das cartas a partir da escolha do usuario a partir do Menu 1
    printf("\n=== Comparação Do Primeiro Atributo ===\n");
    
    switch (opcao1)
    {
    case 1:
         // População
        printf("\n=== População ===\n");
        printf("Carta 1 - %s: %d \n", nome_da_cidade_carta1, populacao_carta1);
        printf("Carta 2 - %s: %d \n", nome_da_cidade_carta2, populacao_carta2);

        // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
        atributo1_carta1 = populacao_carta1;
        atributo1_carta2 = populacao_carta2;

        // resultado 1 da comparação População
        resultado1 = populacao_carta1 > populacao_carta2 ? 1 : 0;

        
        break;
        
    case 2:
    // Área
        printf("\n=== Área ===\n");
        printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, area_em_km2_carta1);
        printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, area_em_km2_carta2);

        // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
        atributo1_carta1 = area_em_km2_carta1;
        atributo1_carta2 = area_em_km2_carta2;

        // resultado da comparação Área
        resultado1 = area_em_km2_carta1 > area_em_km2_carta2 ? 1 : 0;
    
        break;
        
    case 3:
        // PIB
        printf("\n=== PIB ===\n");
        printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, pib_carta1);
        printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, pib_carta2);
        
        // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
        atributo1_carta1 = pib_carta1;
        atributo1_carta2 = pib_carta2;

        // resultado 1 da comparação PIB
        resultado1 = pib_carta1 > pib_carta2 ? 1 : 0;

        break;
        
    case 4:
        // Pontos Turísticos
        printf("\n=== Pontos Turísticos ===\n");
        printf("Carta 1 - %s: %d \n", nome_da_cidade_carta1, numero_pontos_turisticos_carta1);
        printf("Carta 2 - %s: %d \n", nome_da_cidade_carta2, numero_pontos_turisticos_carta2);
        
        // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
        atributo1_carta1 = numero_pontos_turisticos_carta1;
        atributo1_carta2 = numero_pontos_turisticos_carta2;

        // resultado 1 da comparação Pontos Turísticos
        resultado1 = numero_pontos_turisticos_carta1 > numero_pontos_turisticos_carta2 ? 1 : 0;
        
        break;
        
    case 5:
        // Densidade Populacional
        printf("\n=== Densidade Populacional - Ganha a menor ===\n");
        printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, densidade_populacional_carta1);
        printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, densidade_populacional_carta2);
        
        // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
        atributo1_carta1 = densidade_populacional_carta1;
        atributo1_carta2 = densidade_populacional_carta2; 

        // resultado de Densidade Populacional
        resultado1 = densidade_populacional_carta1 < densidade_populacional_carta2 ? 1 : 0;
        
        break;
        
    
    default:
        printf("Opção inválida! \n");

        break;
    }

    

    // Verifica se o usuário escolheu o mesmo atributo para comparar novamente
    if (opcao1 == opcao2)
    {
       printf("Você escolheu o mesmo atributo para comparar novamente! \n");
       printf("Por favor, escolha um atributo diferente para a segunda comparação. \n");
       
    } else{

        // === Impressão de Comparação dos poderes das cartas a partir da escolha do usuario a partir do Menu 2
        printf("\n=== Comparação do Segundo Atributo ===\n");
    
    
        switch (opcao2)
        {
        case 1:
             // População
            printf("\n=== População ===\n");
            printf("Carta 1 - %s: %d \n", nome_da_cidade_carta1, populacao_carta1);
            printf("Carta 2 - %s: %d \n", nome_da_cidade_carta2, populacao_carta2);
    
            // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
            atributo2_carta1 = populacao_carta1;
            atributo2_carta2 = populacao_carta2;
    
            // resultado da comparação
    
            resultado2 = populacao_carta1 > populacao_carta2 ? 1 : 0;
            
            break;
    
        case 2:
            // Área
            printf("\n=== Área ===\n");
            printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, area_em_km2_carta1);
            printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, area_em_km2_carta2);
    
            // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
            atributo2_carta1 = area_em_km2_carta1;
            atributo2_carta2 = area_em_km2_carta2;
    
            // resultado da comparação
            resultado2 = area_em_km2_carta1 > area_em_km2_carta2 ? 1 : 0;
           
            break;
        case 3:
            // PIB
            printf("\n=== PIB ===\n");
            printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, pib_carta1);
            printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, pib_carta2);
    
            // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
            atributo2_carta1 = pib_carta1;
            atributo2_carta2 = pib_carta2;
    
            // resultado da comparação
            resultado2 = pib_carta1 > pib_carta2 ? 1 : 0;
    
            break;
           
        case 4:
            // Pontos Turísticos
            printf("\n=== Pontos Turísticos ===\n");
            printf("Carta 1 - %s: %d \n", nome_da_cidade_carta1, numero_pontos_turisticos_carta1);
            printf("Carta 2 - %s: %d \n", nome_da_cidade_carta2, numero_pontos_turisticos_carta2);
    
            // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
            atributo2_carta1 = numero_pontos_turisticos_carta1;
            atributo2_carta2 = numero_pontos_turisticos_carta2;
    
            // resultado da comparação
            resultado2 = numero_pontos_turisticos_carta1 > numero_pontos_turisticos_carta2 ? 1 : 0;
           
            break;
    
        case 5:
            // Densidade Populacional
            printf("\n=== Densidade Populacional- Ganha a menor ===\n");
            printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, densidade_populacional_carta1);
            printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, densidade_populacional_carta2);
    
            // Salvando os atributos em variaveis para exibir a soma dos dois atributos escolhidos
            atributo2_carta1 = densidade_populacional_carta1;
            atributo2_carta2 = densidade_populacional_carta2;
    
            // resultado de densidade populacional
            resultado2 = densidade_populacional_carta1 < densidade_populacional_carta2 ? 1 : 0;
            
            break;
        
        default:
            printf("Opção inválida! \n");
    
            break;
        }
    
        // Soma dos atributos de ambas as cartas
        float soma1 = atributo1_carta1 + atributo2_carta1;
        float soma2 = atributo1_carta2 + atributo2_carta2;
    
        printf("\n=== Total da soma dos Atributos ===\n");
        printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, soma1);
        printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, soma2);
    
          
        printf("  * Resultado: *\n");
        if (resultado1 == 1 && resultado2 == 1)
        {
            printf("Carta 1 ( %s ) venceu! \n", nome_da_cidade_carta1); 
    
        } else if (resultado1 != resultado2){
    
            printf("As Cartas empataram! \n");
            
        } else {
    
            printf("Carta 2 ( %s ) venceu! \n", nome_da_cidade_carta2); 
        }
    
    
    }
    
    
    return 0;

 


}
