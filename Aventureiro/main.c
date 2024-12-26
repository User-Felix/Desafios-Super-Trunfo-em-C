#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// O código inicial é um exemplo de como você pode implementar o cadastro de cartas.

int main() {
    printf(" ___________ATENÇÃO__________ \n| Não use pontos ou virgulas |\n| Use, ex: 123212            |\n ____________________________ \n");

    // Variáveis para armazenar os dados de cada carta
    int MAX_CARTAS = 5;
    char codigo[MAX_CARTAS][5];
    char nome[MAX_CARTAS][50];
    long populacao[MAX_CARTAS];
    double area[MAX_CARTAS];
    double pib[MAX_CARTAS];
    int pontos_turisticos[MAX_CARTAS];
    int quantidade_cartas, i;
    printf("=======================================\n");
    // Solicitação da quantidade de cartas a cadastrar
    printf("Quantas cartas deseja cadastrar (máximo %d)? ", MAX_CARTAS);
    scanf("%d", &quantidade_cartas);

    // Validação da quantidade de cartas
    if (quantidade_cartas < 1 || quantidade_cartas > MAX_CARTAS) {
        printf("Quantidade inválida. O programa será encerrado.\n");
        return 1;
    }

    // Loop para entrada dos dados de cada carta
    for (i = 0; i < quantidade_cartas; i++) {
        printf("\nCadastrando a carta %d:\n", i + 1);

        // Entrada do código da carta
        printf("Digite o código da carta (Ex: A01): ");
        scanf(" %4s", codigo[i]);

        // Entrada do nome da cidade
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome[i]);

        // Entrada da população
        printf("Digite a população da cidade: ");
        scanf(" %ld", &populacao[i]);

        // Entrada da área
        printf("Digite a área da cidade (em km²): ");
        scanf(" %lf", &area[i]);

        // Entrada do PIB
        printf("Digite o PIB da cidade (em bilhões): ");
        scanf(" %lf", &pib[i]);

        // Entrada do número de pontos turísticos
        printf("Digite o número de pontos turísticos: ");
        scanf(" %d", &pontos_turisticos[i]);
    }

    // Exibição dos dados cadastrados
    printf("\n___ Dados das Cartas Cadastradas ___\n");
    for (i = 0; i < quantidade_cartas; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Código: %s\n", codigo[i]);
        printf("Nome da Cidade: %s\n", nome[i]);
        printf("População: %ld\n", populacao[i]);
        printf("Área: %.2f km²\n", area[i]);
        printf("PIB: %.2f bilhões de reais\n", pib[i]);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos[i]);
        printf("_____________________________________\n");
    }

    return 0;
}
