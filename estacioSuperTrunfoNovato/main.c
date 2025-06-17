#include <stdio.h>

    int main() {

        char codigoCidade[30];
        char nome[50];
        int populacao;
        float area;
        float pib;
        int numPontosTuristicos;

        /// Variáveis declaradas!

        printf("Insira o codigo da cidade: \n");
        scanf("%s", &codigoCidade);
        printf("Insira o nome da cidade: \n");
        scanf("%s", nome);
        printf("Insira a populacao da cidade: \n");
        scanf("%i", &populacao);
        printf("Insira a area da cidade: \n");
        scanf("%f", &area);
        printf("Insira o PIB da cidade: \n");
        scanf("%f", &pib);
        printf("Insira o numero de pontos turistos: \n");
        scanf("%i", &numPontosTuristicos);
        printf("\n");
        printf("Voce criou uma cidade! ");
        /// Criação da cidade.

        printf("\n");
        printf("Informacoes: \n");
        printf("Codigo da cidade: %s .\n", codigoCidade);
        printf("Nome da cidade: %s .\n", nome);
        printf("Populacao da cidade: %.2i habitantes.\n", populacao);
        printf("Area da cidade: %.2f .\n", area);
        printf("Pib da cidade: %.2f .\n", pib);
        printf("Numero de pontos turisticos: %i.",numPontosTuristicos);

        ///Impressão das informações na tela do usuário.
    
    return 0;
}