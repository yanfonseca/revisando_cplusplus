#include <stdio.h>

int main() {
    printf("*********************\n");
    printf("* Bem vindo ao jogo *\n");
    printf("*********************\n");

    int numero_secreto = 11;
    // printf("Número secreto: %d \n", numero_secreto);

    int chute;

    printf("Digite um número: ");
    scanf("%d", &chute);

    printf("Número escolhido: %d\n", chute);

    if (chute == numero_secreto){
        printf("Acertou! \n");
    } else {

        if (chute > numero_secreto){
            printf("Número escolhido é maior que o secreto\n");
        }
        if (chute < numero_secreto){
            printf("Número escolhido é menor que o secreto\n");
        }

    }

    int resultado = chute == numero_secreto;

    printf("%d", resultado);

}

// Para compilar
// gcc jogo.c -o jogo.out

// Para rodar
// ./jogo.out