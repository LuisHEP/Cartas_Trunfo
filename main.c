#include <stdio.h>
#include <string.h>

// Estrutura da Carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;

int main() {
    // Cadastro das cartas
    Carta carta1 = {'a', "a01", "cidade um", 1000000, 500.0, 200.0, 10, 0.0};
    Carta carta2 = {'b', "b02", "cidade dois", 500000, 600.0, 180.0, 8, 0.0};

    // Calcular a densidade demografica
    carta1.densidadeDemografica = carta1.populacao / carta1.area;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    int atributo1, atributo2;

    printf("\n--- menu de escolha do primeiro atributo ---\n");
    printf("1. populacao\n");
    printf("2. area\n");
    printf("3. pib\n");
    printf("4. numero de pontos turisticos\n");
    printf("5. densidade demografica\n");
    printf("escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo - excluindo o primeiro escolhido
    printf("\n--- menu de escolha do segundo atributo ---\n");
    if (atributo1 != 1) printf("1. populacao\n");
    if (atributo1 != 2) printf("2. area\n");
    if (atributo1 != 3) printf("3. pib\n");
    if (atributo1 != 4) printf("4. numero de pontos turisticos\n");
    if (atributo1 != 5) printf("5. densidade demografica\n");
    printf("escolha o segundo atributo: ");
    scanf("%d", &atributo2);

    // Verificar se o segundo atributo é diferente do primeiro
    if (atributo1 == atributo2) {
        printf("\nnao pode escolher o mesmo atributo duas vezes. programa encerrado.\n");
        return 1;
    }

    float valor1_carta1 = 0, valor2_carta1 = 0;
    float valor1_carta2 = 0, valor2_carta2 = 0;
    char nomeAtributo1[50], nomeAtributo2[50];

    // atribuindo valores do primeiro atributo
    switch (atributo1) {
        case 1:
            valor1_carta1 = carta1.populacao;
            valor1_carta2 = carta2.populacao;
            strcpy(nomeAtributo1, "populacao");
            break;
        case 2:
            valor1_carta1 = carta1.area;
            valor1_carta2 = carta2.area;
            strcpy(nomeAtributo1, "area");
            break;
        case 3:
            valor1_carta1 = carta1.pib;
            valor1_carta2 = carta2.pib;
            strcpy(nomeAtributo1, "pib");
            break;
        case 4:
            valor1_carta1 = carta1.pontosTuristicos;
            valor1_carta2 = carta2.pontosTuristicos;
            strcpy(nomeAtributo1, "numero de pontos turisticos");
            break;
        case 5:
            valor1_carta1 = carta1.densidadeDemografica;
            valor1_carta2 = carta2.densidadeDemografica;
            strcpy(nomeAtributo1, "densidade demografica");
            break;
        default:
            printf("atributo invalido!\n");
            return 1;
    }

    // atribuindo valores do segundo atributo
    switch (atributo2) {
        case 1:
            valor2_carta1 = carta1.populacao;
            valor2_carta2 = carta2.populacao;
            strcpy(nomeAtributo2, "populacao");
            break;
        case 2:
            valor2_carta1 = carta1.area;
            valor2_carta2 = carta2.area;
            strcpy(nomeAtributo2, "area");
            break;
        case 3:
            valor2_carta1 = carta1.pib;
            valor2_carta2 = carta2.pib;
            strcpy(nomeAtributo2, "pib");
            break;
        case 4:
            valor2_carta1 = carta1.pontosTuristicos;
            valor2_carta2 = carta2.pontosTuristicos;
            strcpy(nomeAtributo2, "numero de pontos turisticos");
            break;
        case 5:
            valor2_carta1 = carta1.densidadeDemografica;
            valor2_carta2 = carta2.densidadeDemografica;
            strcpy(nomeAtributo2, "densidade demografica");
            break;
        default:
            printf("atributo invalido!\n");
            return 1;
    }

    printf("\ncomparando as cartas: %s vs %s\n", carta1.nomeCidade, carta2.nomeCidade);

    // Comparando primeiro atributo
    printf("\nprimeiro atributo: %s\n", nomeAtributo1);
    printf("%s: %.2f\n", carta1.nomeCidade, valor1_carta1);
    printf("%s: %.2f\n", carta2.nomeCidade, valor1_carta2);

    if (atributo1 == 5) { // para densidade (menor vence)
        (valor1_carta1 < valor1_carta2) ? printf("vencedor: %s\n", carta1.nomeCidade) :
        (valor1_carta2 < valor1_carta1) ? printf("vencedor: %s\n", carta2.nomeCidade) :
        printf("empate!\n");
    } else { // para os outros (maior vence)
        (valor1_carta1 > valor1_carta2) ? printf("vencedor: %s\n", carta1.nomeCidade) :
        (valor1_carta2 > valor1_carta1) ? printf("vencedor: %s\n", carta2.nomeCidade) :
        printf("empate!\n");
    }

    // Comparando segundo atributo
    printf("\nsegundo atributo: %s\n", nomeAtributo2);
    printf("%s: %.2f\n", carta1.nomeCidade, valor2_carta1);
    printf("%s: %.2f\n", carta2.nomeCidade, valor2_carta2);

    if (atributo2 == 5) { // densidade
        (valor2_carta1 < valor2_carta2) ? printf("vencedor: %s\n", carta1.nomeCidade) :
        (valor2_carta2 < valor2_carta1) ? printf("vencedor: %s\n", carta2.nomeCidade) :
        printf("empate!\n");
    } else {
        (valor2_carta1 > valor2_carta2) ? printf("vencedor: %s\n", carta1.nomeCidade) :
        (valor2_carta2 > valor2_carta1) ? printf("vencedor: %s\n", carta2.nomeCidade) :
        printf("empate!\n");
    }

    // Soma dos atributos
    float soma_carta1 = (atributo1 == 5 ? -valor1_carta1 : valor1_carta1) + (atributo2 == 5 ? -valor2_carta1 : valor2_carta1);
    float soma_carta2 = (atributo1 == 5 ? -valor1_carta2 : valor1_carta2) + (atributo2 == 5 ? -valor2_carta2 : valor2_carta2);

    printf("\n--- resultado final ---\n");
    printf("%s: soma = %.2f\n", carta1.nomeCidade, soma_carta1);
    printf("%s: soma = %.2f\n", carta2.nomeCidade, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("vencedor geral: %s\n", carta1.nomeCidade);
    } else if (soma_carta2 > soma_carta1) {
        printf("vencedor geral: %s\n", carta2.nomeCidade);
    } else {
        printf("empate!\n");
    }

    return 0;
}
