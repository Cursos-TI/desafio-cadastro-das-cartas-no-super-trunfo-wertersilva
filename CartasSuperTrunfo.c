#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Criação de um tipo de estrutura de dados para armazenar as informações ou atributos de cada carta.
    typedef struct {
        char estado;
        char codigoCarta[4]; // formado pelo estado e um número de 2 dígitos
        char nomeCidade[20];
        int populacao;
        float area;
        float pib;
        int numeroPontosTuristicos;
    } carta; // Define o nome da estrutura de dados como "carta"
    
    // Declaração de duas cartas
    carta carta1, carta2;  
       
    // Cadastro das Cartas:
    // Solicita ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Carta 1
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
    
    // Carta 2
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

    // exibe carta 2
    printf("\n**** Carta 2 ****\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoCarta);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.numeroPontosTuristicos);

    return 0;
}