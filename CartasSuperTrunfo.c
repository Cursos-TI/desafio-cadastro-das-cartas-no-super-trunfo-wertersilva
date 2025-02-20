#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    int resultadoComparacao; // Variável para armazenar o resultado da comparação entre as cartas
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
    printf("\n\n******** Comparação das cartas ********\n");
    if (resultadoComparacao = carta1.populacao > carta2.populacao) {
        printf("População: Carta 1 venceu (%d)\n", resultadoComparacao);
    } else {
        printf("População: Carta 2 venceu (%d)\n", resultadoComparacao);
    }

    // Compara área
    if (resultadoComparacao = carta1.area > carta2.area) {
        printf("Área: Carta 1 venceu (%d)\n", resultadoComparacao);        
    } else {
        printf("Área: Carta 2 venceu (%d)\n", resultadoComparacao);     
    }

    // Compara PIB
    if (resultadoComparacao = carta1.pib > carta2.pib) {
        printf("PIB: Carta 1 venceu (%d) \n", resultadoComparacao);
    } else {
        printf("PIB: Carta 2 venceu (%d) \n", resultadoComparacao);
    }

    // Compara número de pontos turísticos
    if (resultadoComparacao = carta1.numeroPontosTuristicos > carta2.numeroPontosTuristicos) {
        printf("Pontos Turísticos: Carta 1 venceu (%d) \n", resultadoComparacao);
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (%d) \n", resultadoComparacao);
    }

    // Compara densidade populacional, menor valor vence, equivalente a 
    // comparar o inverso das densidades e o maior vencer
    if (resultadoComparacao = carta1.densidadePopulacional < carta2.densidadePopulacional) {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoComparacao);
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoComparacao);
    }

    // Compara PIB per capita
    if (resultadoComparacao = carta1.pipPerCapita > carta2.pipPerCapita) {
        printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoComparacao);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%d)\n", resultadoComparacao);
    }

    // Compara Super Poder
    if (resultadoComparacao = carta1.superPoder > carta2.superPoder) {
        printf("Super Poder: Carta 1 venceu (%d)\n", resultadoComparacao);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n", resultadoComparacao);
    }

    
    return 0;
}