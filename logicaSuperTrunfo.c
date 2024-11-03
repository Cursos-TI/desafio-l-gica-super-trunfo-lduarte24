#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

     char nomeEstadoA [60], nomeEstadoB [60];
     char cidade1 [50], cidade2 [50];
     int codigoEstadoA, codigoEstadoB, codigoCidadeA, codigoCidadeB;
     float 
     populacaoA, populacaoB, 
     areaTerritorialA, areaTerritorialB, 
     pibA, pibB;
     
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)

    printf("DESAFIO SUPER TRUNFO - TEMA PAÍSES\n");

    printf("CADASTRE SUA PRIMEIRA CARTA!\n");
    
     printf("Digite o nome do primeiro Estado:\n");
     scanf("%s", &nomeEstadoA);
     printf("Digite o código A para representar esse Estado:\n");
     scanf("%d", &codigoEstadoA);
     printf("Digite o nome da Cidade:\n");
     scanf(" %s", &cidade1);
     printf("Digite o código 1 para representar essa cidade:\n");
     scanf("%d", &codigoCidadeA);
     printf("População:\n");
     scanf("%f", &populacaoA);
     printf("Extensão Territórial:\n");
     scanf("%f", &areaTerritorialA);
     printf("PIB:\n");
     scanf("%f", &pibA);
     
     printf("AGORA VAMOS PARA A PRÓXIMA CARTA!\n");


    // Solicitando ao usuário os dados do segundo estado e cidade.
    


     printf("Digite o nome do segundo Estado:\n");
     scanf("%s", &nomeEstadoB);
     printf("Digite o código B para representar esse Estado:\n");
     scanf("%d", &codigoEstadoB);
     printf("Digite o nome da Cidade:\n");
     scanf(" %s", &cidade1);
     printf("Digite o código 2 para representar essa cidade:\n");
     scanf("%d", &codigoCidadeB);
     printf("População:\n");
     scanf("%f", &populacaoB);
     printf("Extensão Territórial:\n");
     scanf("%f", &areaTerritorialB);
     printf("PIB:\n");
     scanf("%f", &pibB);

     

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    

    if (populacaoA < populacaoB) {
        printf("%s tem a menor população!\n", nomeEstadoA);
    } else {
        printf("%s tem a menor população!\n", nomeEstadoA);
    }

    if (areaTerritorialA > areaTerritorialB){
        printf("%s tem a maior Extensão Territorial!\n", nomeEstadoA);
       } else {
            printf("%s tem a maior Extensão Territorial!\n", nomeEstadoB);    
        }
    
    if (pibA > pibB ){
        printf(" %s tem o maior PIB!\n", nomeEstadoA);
    } else {
        printf("%s tem o maior PIB!\n", nomeEstadoB);
    }

printf("A CIDADE %s É A VENCEDORA, POIS GANHA A CIDADE QUE TEM A MAIOR EXTENSÃO TERRITORIAL!\n", nomeEstadoA, nomeEstadoB);
printf("PARABÉNS!");
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);






    return 0;
}
