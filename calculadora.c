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

int main() {
    int opcao;
    float num1, num2;
    
    // Exibe o menu de opções
    printf("Calculadora\n");
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

    // Solicita os dois números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Calcula e exibe o resultado com base na operação escolhida
    switch(opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(num1, num2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtracao(num1, num2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicacao(num1, num2));
            break;
        case 4:
            printf("Resultado: %.2f\n", divisao(num1, num2));
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
