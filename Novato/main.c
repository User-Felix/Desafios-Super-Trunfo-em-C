#include <stdio.h>

int main() {

    // Definindo a constante MAX_CIDADES para o número máximo de cidades a serem cadastradas
    int MAX_CIDADES = 10;

    // Arrays para armazenar os dados de cada cidade
    int codigo[MAX_CIDADES], pontos_turisticos[MAX_CIDADES];  // Armazena o código e pontos turísticos de cada cidade
    char nome[MAX_CIDADES][50];  // Armazena o nome de cada cidade (máximo 50 caracteres)
    long populacao[MAX_CIDADES];  // Armazena a população de cada cidade
    double area[MAX_CIDADES], pib[MAX_CIDADES];  // Armazena a área e o PIB de cada cidade
    int quantidade_cidades, index;  // Variáveis para controlar a quantidade de cidades cadastradas e o índice do loop

    // Solicitação ao usuário para informar o número de cidades a cadastrar, com limite de MAX_CIDADES
    printf("Quantas cidades deseja cadastrar (máximo %d)? ", MAX_CIDADES);
    scanf("%d", &quantidade_cidades);

    // Validação do número de cidades inserido pelo usuário
    if (quantidade_cidades < 1 || quantidade_cidades > MAX_CIDADES) {
        // Caso o número de cidades seja inválido (fora do intervalo de 1 a MAX_CIDADES), o programa encerra
        printf("Quantidade inválida. O programa será encerrado.\n");
        return 1;  // Retorna 1 indicando erro e encerramento
    }

    // Loop para cadastrar os dados de cada cidade
    for (index = 0; index < quantidade_cidades; index++) {
        // Solicitação e captura dos dados para cada cidade
        printf("\nCadastrando a cidade %d:\n", index + 1);

        // Captura o código da cidade
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo[index]);

        // Captura o nome da cidade, permitindo espaços
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome[index]);  // O " %[^\n]" permite capturar a string com espaços

        // Captura a população da cidade
        printf("Digite a população da cidade: ");
        scanf("%ld", &populacao[index]);

        // Captura a área da cidade em km²
        printf("Digite a área da cidade (em km²): ");
        scanf("%lf", &area[index]);

        // Captura o PIB da cidade em milhões
        printf("Digite o PIB da cidade (em milhões): ");
        scanf("%lf", &pib[index]);

        // Captura o número de pontos turísticos da cidade
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos[index]);
    }

    // Exibição dos dados das cidades cadastradas
    printf("\n___ Dados das Cidades Cadastradas ___\n");

    // Loop para exibir os dados de cada cidade
    for (index = 0; index < quantidade_cidades; index++) {
        // Exibição dos dados de cada cidade de forma organizada
        printf("\nCidade %d:\n", index + 1);
        printf("Código: %d\n", codigo[index]);
        printf("Nome: %s\n", nome[index]);
        printf("População: %ld\n", populacao[index]);
        printf("Área: %.2f km²\n", area[index]);
        printf("PIB: %.2f milhões\n", pib[index]);
        printf("Pontos Turísticos: %d\n", pontos_turisticos[index]);
        printf("_____________________________________\n");  // Linha de separação para cada cidade
    }

    return 0;
}