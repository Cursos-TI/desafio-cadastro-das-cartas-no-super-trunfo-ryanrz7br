#include <stdio.h>

int main(){
    // carta 01
    char estado[2];
    char codigo[30]; //array de string ou caracter
    char nomecity[30];
    int popu;
    float area;
    float pib;
    int pturisticos;
    
    // carta 02
    char estado2[2];
    char codigo2[30]; //array de string ou caracter
    char nomecity2[30];
    int popu2;
    float area2;
    float pib2;
    int pturisticos2;

    printf("Vamos iniciar! \n");
    
    printf("Digite a letra inicial do estado da primeira carta: ");
    scanf("%s", estado);
    printf("Digite a letra mais dois números formando um código de 3 dígitos (ex: A01): ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nomecity);
    printf("Digite o número da população da cidade da primeira carta: ");
    scanf("%d", &popu);
    printf("Digite a área da cidade da primeira carta: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade da primeira carta: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pturisticos);

    printf("Perfeito!, agora insira os dados da segunda carta: \n");

    printf("Digite a letra inicial do estado da segunda carta: ");
    scanf("%s", estado2);
    printf("Digite a letra mais dois números formando um código de 3 dígitos (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", nomecity2);
    printf("Digite o número da população da cidade da segunda carta: ");
    scanf("%d", &popu2);
    printf("Digite a área da cidade da segunda carta: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pturisticos2);


    printf("Ótimo, aqui estão as informações das cartas inseridas: \n");

    printf("Carta 01 \n");

    printf("Estado: %s \n", estado);
    printf("Código inserido: %s \n", codigo);
    printf("Nome da cidade: %s \n", nomecity);
    printf("Número da população da cidade: %d \n", popu);
    printf("Número da área da cidade: %f \n", area);
    printf("O PIB da cidade: %f \n", pib);
    printf("Números de pontos turísticos: %d \n", pturisticos);


    printf("Carta 02 \n");

    printf("Estado: %s \n", estado2);
    printf("Código inserido: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomecity2);
    printf("Número da população da cidade: %d \n", popu2);
    printf("Número da área da cidade: %f \n", area2);
    printf("O PIB da cidade: %f \n", pib2);
    printf("Números de pontos turísticos: %d \n", pturisticos2);




    return 0;
}
