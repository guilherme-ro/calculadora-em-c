#include <stdio.h>
#include <stdlib.h>

// Funções para operações básicas
float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b == 0) {
        printf("Erro! Divisao por zero.\n");
        return 0;
    }
    return a / b;
}

// Função para conversão de string para inteiro (binário, hexadecimal)
int converterParaDecimal(char numero[], int base) {
    int decimal = 0;
    int i = 0;

    // Para binário
    if (base == 2) {
        while (numero[i] != '\0') {
            decimal = decimal * 2 + (numero[i] - '0');
            i++;
        }
    }
    // Para hexadecimal
    else if (base == 16) {
        sscanf(numero, "%x", &decimal);
    }
    // Para decimal
    else {
        decimal = atoi(numero);
    }
    return decimal;
}

int main() {
    int opcao;
    char num1_str[50], num2_str[50];
    int num1, num2;
    
    // Exibe o menu de opções
    printf("Calculadora - Modo Programador\n");
    printf("Escolha uma operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    
    // Solicita a escolha do usuário
    printf("Digite a opcao (1-5): ");
    scanf("%d", &opcao);
    
    if (opcao == 5) {
        printf("Saindo da calculadora...\n");
        return 0;
    }

    // Escolher a base para os números
    int base;
    printf("Escolha a base dos numeros:\n");
    printf("1. Binario\n");
    printf("2. Decimal\n");
    printf("3. Hexadecimal\n");
    printf("Digite a base (1-3): ");
    scanf("%d", &base);

    // Solicita os números como strings para conversão
    printf("Digite o primeiro numero: ");
    scanf("%s", num1_str);
    printf("Digite o segundo numero: ");
    scanf("%s", num2_str);
    
    // Converte os números para decimal
    num1 = converterParaDecimal(num1_str, base);
    num2 = converterParaDecimal(num2_str, base);

    // Calcula e exibe o resultado com base na operação escolhida
    switch(opcao) {
        case 1:
            printf("Resultado: %d\n", soma(num1, num2));
            break;
        case 2:
            printf("Resultado: %d\n", subtracao(num1, num2));
            break;
        case 3:
            printf("Resultado: %d\n", multiplicacao(num1, num2));
            break;
        case 4:
            printf("Resultado: %d\n", divisao(num1, num2));
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
