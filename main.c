/******************************************************************************

MENU. Recebe 10 números, informa o menor e o maior, soma, média e os números menores que á média.

*******************************************************************************/
#include <stdio.h>

#define TAMANHO_VETOR 10

void exibirMenu(){
    printf("Selecione a operação que você deseja realizar: \n");
    printf("1 - Cadastrar vetor \n");
    printf("2 - Exibir vetor \n");
    printf("3 - Exibir o maior número\n");
    printf("4 - Exibir o menor número\n");
    printf("5 - Exibir a soma\n");
    printf("6 - Exibir a média\n");
    printf("7 - Exibir os números abaixo da média\n");
    printf("0 - Sair\n");
}

int main() {
    int numeros[TAMANHO_VETOR];
    int opcao = -1;
    int soma = 0;
    float media = 0.0;

    while (opcao != 0) {
        exibirMenu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                // Cadastrar vetor
                printf("Informe 10 números:\n");
                soma = 0; // Resetar a soma
                for(int i = 0; i < TAMANHO_VETOR; i++) {
                    printf("Informe o valor para a posição %d: ", i);
                    scanf("%d", &numeros[i]);
                    soma += numeros[i]; // Acumula a soma
                }
                // Calcular a média
                media = soma / (float)TAMANHO_VETOR;
                break;
            }
            case 2: {
                // Exibir vetor
                printf("Os números cadastrados são: ");
                for(int i = 0; i < TAMANHO_VETOR; i++) {
                    printf("%d ", numeros[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                // Exibir maior número
                int maior = numeros[0];
                for(int i = 1; i < TAMANHO_VETOR; i++) {
                    if(numeros[i] > maior) {
                        maior = numeros[i];
                    }
                }
                printf("O maior número é: %d\n", maior);
                break;
            }
            case 4: {
                // Exibir menor número
                int menor = numeros[0];
                for(int i = 1; i < TAMANHO_VETOR; i++) {
                    if(numeros[i] < menor) {
                        menor = numeros[i];
                    }
                }
                printf("O menor número é: %d\n", menor);
                break;
            }
            case 5: {
                // Exibir soma
                printf("A soma dos números é: %d\n", soma);
                break;
            }
            case 6: {
                // Exibir média
                printf("A média dos números é: %.2f\n", media);
                break;
            }
            case 7: {
                // Exibir números abaixo da média
                printf("Números abaixo da média (%.2f): ", media);
                for(int i = 0; i < TAMANHO_VETOR; i++) {
                    if(numeros[i] < media) {
                        printf("%d ", numeros[i]);
                    }
                }
                printf("\n");
                break;
            }
            case 0: {
                // Sair
                printf("Saindo do programa...\n");
                break;
            }
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
