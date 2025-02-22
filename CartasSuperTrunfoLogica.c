#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Desenvolvendo a Lógica do Jogo
    
// Criação de um tipo de estrutura de dados para armazenar as informações de cada carta.
typedef struct {
    char estado;
    char codigoCarta[4]; // formado pelo estado e um número de 2 dígitos
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;
    float densidadePopulacional;
    float pipPerCapita;
    float superPoder;
} carta; // Define o nome da estrutura de dados como "carta"


float retornaAtributoCarta(carta carta, int atributo) {
    // Função que retorna o valor de um atributo de uma carta baseado no número do atributo
    switch (atributo)
    {
    case 1: // População
        return carta.populacao;
        break;
    case 2: // Área
        return carta.area;
        break;
    case 3: // PIB
        return carta.pib;
        break;
    case 4: // Número de Pontos Turísticos
        return carta.numeroPontosTuristicos;
        break;
    case 5: // Densidade Populacional
        return carta.densidadePopulacional;
        break;
    case 6: // PIB per Capita
        return carta.pipPerCapita;
        break;
    }
}

int main() {
    int resultadoComparacao; // Variável para armazenar o resultado da comparação entre as cartas
    
    // Variáveis para armazenar a soma dos atributos de cada carta
    float somaAtributosCarta1 = 0;
    float somaAtributosCarta2 = 0;
    
    // Declaração de duas cartas
    carta carta1, carta2;  
       
    // Cadastro das Cartas:
    // Solicita ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // ++++++++ Carta 1 ++++++++
    printf("**** Cadastro da Carta 1 ***\n\n");
    printf("Insira o estado da cidade indentificado por uma letra de A a H: ");
    scanf(" %c", &carta1.estado);
   
    printf("Insira o código da cidade de 1 a 4 com dois digitos. Ex. 01, 02, etc: ");
    carta1.codigoCarta[0] = carta1.estado; // Atribui o valor da letra do estado ao primeiro caractere do código da carta
    scanf("%s", &carta1.codigoCarta[1]); // armazena o codigo da cidade a partir do segundo caractere do código da carta     
    carta1.codigoCarta[0] = carta1.estado;    
   
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]s", carta1.nomeCidade); // %[^\n]s é utilizado para ler uma string com espaços
   
    printf("Insira a população da cidade: ");
    scanf("%d", &carta1.populacao);
   
    printf("Insira a área da cidade: ");
    scanf("%f", &carta1.area);
   
    printf("Insira o PIB da cidade: ");
    scanf("%f", &carta1.pib);
   
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &carta1.numeroPontosTuristicos);

    // calcula densidade populacional
    carta1.densidadePopulacional = carta1.populacao / carta1.area;

    // calcula PIB per capita
    carta1.pipPerCapita = carta1.pib / carta1.populacao;

    // calcula super poder somando população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional
    carta1.superPoder = (float) carta1.populacao + carta1.area + carta1.pib + (float) carta1.numeroPontosTuristicos + carta1.pipPerCapita + (1. / carta1.densidadePopulacional);
    
    // ++++++++ Carta 2 ++++++++
    // Solicita ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("**** Cadastro da Carta 2 ***\n\n");
    printf("Insira o estado da cidade indentificado por uma letra de A a H: ");
    scanf(" %c", &carta2.estado);

    printf("Insira o código da cidade de 1 a 4 com dois digitos. Ex. 01, 02, etc: ");
    carta2.codigoCarta[0] = carta2.estado; // Atribui o valor da letra do estado ao primeiro caractere do código da carta
    scanf("%s", &carta2.codigoCarta[1]); // armazena o codigo da cidade a partir do segundo caractere do código da carta     
    carta2.codigoCarta[0] = carta2.estado;    

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]s", carta2.nomeCidade); // %[^\n]s é utilizado para ler uma string com espaços

    printf("Insira a população da cidade: ");
    scanf("%d", &carta2.populacao);

    printf("Insira a área da cidade: ");
    scanf("%f", &carta2.area);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &carta2.pib);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &carta2.numeroPontosTuristicos);

    // calcula densidade populacional
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    // calcula PIB per capita
    carta2.pipPerCapita = carta2.pib / carta2.populacao;

    // calcula super poder somando população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional
    carta2.superPoder = (float) carta2.populacao + carta2.area + carta2.pib + (float) carta2.numeroPontosTuristicos + carta2.pipPerCapita + (1. / carta2.densidadePopulacional);
       
    // Exibição dos dados das cartas cadastradas
    // exibe carta 1
    printf("\n**** Carta 1 ****\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoCarta);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área:%.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta1.pipPerCapita);

    // exibe carta 2
    printf("\n**** Carta 2 ****\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoCarta);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta2.pipPerCapita);

    // ++++++++ Comparação das cartas ++++++++
    // Compara as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional,
    // a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
    

    // Compara população
    printf("\n\n******** Comparação das cartas ********\n\n");

    printf("Estolha dois atributos para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");

    // Cria vetor de atributos para facilitar a exibição do atributo escolhido
    char * atributos[] = {"População", "Área", "PIB", "Número de Pontos Turísticos", "Densidade Populacional", "PIB per Capita"};
    
    // Leitura dos atributos
    printf("Digite o número do atributo 1: ");
    int atributo1;
    scanf("%d", &atributo1);
    printf("Você escolheu o atributo %d - %s \n ", atributo1, atributos[atributo1-1]);
    
    printf("Digite o número do atributo 2: ");
    int atributo2;
     // Força que o atributo escolhido seja diferente do primeiro atributo   
    while (1)
    {
        scanf("%d", &atributo2);
        if (atributo1 != atributo2)
        {
            printf("Você escolheu o atributo %d - %s\n", atributo2, atributos[atributo2-1]);
            break;
        }
        else {
            printf("Você escolheu o mesmo atributo, por favor escolha outro\n");

        }  
    }

    // Compara os atributos escolhidos tratando casos de empate usando switch case
    switch (atributo1)
    {
    case 1: // População
        if (carta1.populacao > carta2.populacao)
        {
            printf("População: Carta 1 venceu (%d)\n", carta1.populacao);
        }
        else if (carta1.populacao < carta2.populacao)
        {
            printf("População: Carta 2 venceu (%d)\n", carta2.populacao);
        }
        else
        {
            printf("Empate na População!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.populacao;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.populacao;
        break;
    case 2: // Área
        if (carta1.area > carta2.area)
        {
            printf("Área: Carta 1 venceu (%.2f)\n", carta1.area);
        }
        else if (carta1.area < carta2.area)
        {
            printf("Área: Carta 2 venceu (%.2f)\n", carta2.area);
        }
        else
        {
            printf("Empate em Área!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.area;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.area;
        break;
    case 3: // PIB
        if (carta1.pib > carta2.pib)
        {
            printf("PIB: Carta 1 venceu (%.2f)\n", carta1.pib);
        }
        else if (carta1.pib < carta2.pib)
        {
            printf("PIB: Carta 2 venceu (%.2f)\n", carta2.pib);
        }
        else
        {
            printf("Empate no PIB!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.pib;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.pib;
        break;
    case 4: // Número de Pontos Turísticos
        if (carta1.numeroPontosTuristicos > carta2.numeroPontosTuristicos)
        {
            printf("Número de Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.numeroPontosTuristicos);
        }
        else if (carta1.numeroPontosTuristicos < carta2.numeroPontosTuristicos)
        {
            printf("Número de Pontos Turísticos: Carta 2 venceu (%d)\n", carta2.numeroPontosTuristicos);
        }
        else
        {
            printf("Empate em Número e Pontos Turísticos!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.numeroPontosTuristicos;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.numeroPontosTuristicos;
        break;
    case 5: // Densidade Populacional
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
        {
            printf("Densidade Populacional: Carta 1 venceu (%.2f)\n", carta1.densidadePopulacional);
        }
        else if (carta1.densidadePopulacional > carta2.densidadePopulacional)
        {
            printf("Densidade Populacional: Carta 2 venceu (%.2f)\n", carta2.densidadePopulacional);
        }
        else
        {
            printf("Empate em Densidade Populacional!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.densidadePopulacional;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.densidadePopulacional;
        break;
    case 6: // PIB per Capita
        if (carta1.pipPerCapita > carta2.pipPerCapita)
        {
            printf("PIB per Capita: Carta 1 venceu (%.2f)\n", carta1.pipPerCapita);
        }
        else if (carta1.pipPerCapita < carta2.pipPerCapita)
        {
            printf("PIB per Capita: Carta 2 venceu (%.2f)\n", carta2.pipPerCapita);
        }
        else
        {
            printf("Empate em PIB per Capita!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.pipPerCapita;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.pipPerCapita;
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
    
    // Atributo 2
    switch (atributo2)
    {
    case 1: // População
        if (carta1.populacao > carta2.populacao)
        {
            printf("População: Carta 1 venceu (%d)\n", carta1.populacao);
        }
        else if (carta1.populacao < carta2.populacao)
        {
            printf("População: Carta 2 venceu (%d)\n", carta2.populacao);
        }
        else
        {
            printf("Empate na População!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.populacao;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.populacao;
        break;
    case 2: // Área
        if (carta1.area > carta2.area)
        {
            printf("Área: Carta 1 venceu (%.2f)\n", carta1.area);
        }
        else if (carta1.area < carta2.area)
        {
            printf("Área: Carta 2 venceu (%.2f)\n", carta2.area);
        }
        else
        {
            printf("Empate em Área!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.area;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.area;
        break;
    case 3: // PIB
        if (carta1.pib > carta2.pib)
        {
            printf("PIB: Carta 1 venceu (%.2f)\n", carta1.pib);
        }
        else if (carta1.pib < carta2.pib)
        {
            printf("PIB: Carta 2 venceu (%.2f)\n", carta2.pib);
        }
        else
        {
            printf("Empate no PIB!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.pib;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.pib;
        break;
    case 4: // Número de Pontos Turísticos
        if (carta1.numeroPontosTuristicos > carta2.numeroPontosTuristicos)
        {
            printf("Número de Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.numeroPontosTuristicos);
        }
        else if (carta1.numeroPontosTuristicos < carta2.numeroPontosTuristicos)
        {
            printf("Número de Pontos Turísticos: Carta 2 venceu (%d)\n", carta2.numeroPontosTuristicos);
        }
        else
        {
            printf("Empate em Número de Pontos Turísticos!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.numeroPontosTuristicos;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.numeroPontosTuristicos;
        break;
    case 5: // Densidade Populacional
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
        {
            printf("Densidade Populacional: Carta 1 venceu (%.2f)\n", carta1.densidadePopulacional);
        }
        else if (carta1.densidadePopulacional > carta2.densidadePopulacional)
        {
            printf("Densidade Populacional: Carta 2 venceu (%.2f)\n", carta2.densidadePopulacional);
        }
        else
        {
            printf("Empate em Densidade Populacional!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + 1./carta1.densidadePopulacional;
        somaAtributosCarta2 = somaAtributosCarta2 + 1./carta2.densidadePopulacional;
        break;
    case 6: // PIB per Capita
        if (carta1.pipPerCapita > carta2.pipPerCapita)
        {
            printf("PIB per Capita: Carta 1 venceu (%.2f)\n", carta1.pipPerCapita);
        }
        else if (carta1.pipPerCapita < carta2.pipPerCapita)
        {
            printf("PIB per Capita: Carta 2 venceu (%.2f)\n", carta2.pipPerCapita);
        }
        else
        {
            printf("Empate PIB per Capita!\n");
        }
        somaAtributosCarta1 = somaAtributosCarta1 + carta1.pipPerCapita;
        somaAtributosCarta2 = somaAtributosCarta2 + carta2.pipPerCapita;
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    // Define o vencedor e resume informações em uma tabela
    printf ("\n\n******** Resultado Final ********\n");

    printf(" Carta %-10s | Carta 1 | Carta 2\n", " ");
    printf("------------------------------------------------\n");
    printf(" Cidade %-10s | %-10s | %-15s\n", " ", carta1.nomeCidade, carta2.nomeCidade);
    printf("------------------------------------------------\n");
    printf(" Atributo 1 - %-10s | %-10.2f | %-10.2f\n", atributos[atributo1-1], retornaAtributoCarta(carta1, atributo1), retornaAtributoCarta(carta2,atributo1));
    printf(" Atributo 2 - %-10s | %-10.2f | %-10.2f\n", atributos[atributo2-1], retornaAtributoCarta(carta1, atributo2), retornaAtributoCarta(carta2,atributo2));
   printf(" Soma dos atributos | %-10.2f | %-10.2f\n",  somaAtributosCarta1, somaAtributosCarta2);
    printf("------------------------------------------------\n");
    
    if (somaAtributosCarta1 > somaAtributosCarta2)
    {
        printf("\nCarta 1 venceu com %.2f pontos\n", somaAtributosCarta1);
    }
    else if (somaAtributosCarta1 < somaAtributosCarta2)
    {
        printf("\nCarta 2 venceu com %.2f pontos\n", somaAtributosCarta2);
    }
    else
    {
        printf("\nEmpate!\n");
    }
    
    return 0;
}