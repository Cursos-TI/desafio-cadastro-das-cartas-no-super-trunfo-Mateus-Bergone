#include <stdio.h>

int main() {
    printf("CartasSuperTrunfo\n\n");
    //Carta 1
    char Estado[50], Código[50], NomedaCidade[50];
    int NumeroDePontosTuristicos;
    float Area, PIB, Densidadepopulacional, PIBpercapita, Populacao;

    printf("Carta 1\n\n");

    printf("Qual o estado da cidade?\n");
    scanf("%s", Estado);

    printf("Qual o código da cidade?\n");
    scanf("%s", Código);

    printf("Qual o nome da cidade?\n");
    scanf("%s", NomedaCidade);

    printf("Qual a população da cidade?\n");
    scanf("%f", &Populacao);

    printf("Qual a área da cidade?\n");
    scanf("%f", &Area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &NumeroDePontosTuristicos);

    printf("Qual a densidade populacional da cidade?\n");
    Densidadepopulacional = Populacao / Area;
    printf("%.2f\n", Densidadepopulacional);

    printf("Qual o PIB per capita da cidade?\n");
    PIBpercapita = PIB / Populacao;
    printf("%.2f\n", PIBpercapita);

    printf("\n");

    //Carta 2
    char Estado2[50], Código2[50], NomedaCidade2[50];
    int NumeroDePontosTuristicos2;
    float Area2, PIB2, Densidadepopulacional2, PIBpercapita2, Populacao2;

    printf("Carta 2\n\n");

    printf("Qual o estado da cidade?\n");
    scanf("%s", Estado2);

    printf("Qual o código da cidade?\n");
    scanf("%s", Código2);

    printf("Qual o nome da cidade?\n");
    scanf("%s", NomedaCidade2);

    printf("Qual a população da cidade?\n");
    scanf("%f", &Populacao2);

    printf("Qual a área da cidade?\n");
    scanf("%f", &Area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &NumeroDePontosTuristicos2);

    printf("Qual a densidade populacional da cidade?\n");
    Densidadepopulacional2 = Populacao2 / Area2;
    printf("%.2f\n", Densidadepopulacional2);

    printf("Qual o PIB per capita da cidade?\n");
    PIBpercapita2 = PIB2 / Populacao2;
    printf("%.2f\n", PIBpercapita2);
    printf("\n");
    return 0;
}
