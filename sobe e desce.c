#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_PT.utf8");

    srand(time(NULL)); // Inicializa a semente para números aleatórios

    int sorteado = rand() % 101; // Sorteia o número entre 0 e 100

    printf("Bem-vindo ao jogo do sobe e desce!\n");
    printf("Tente adivinhar o número sorteado entre 0 e 100.\n");

    for (int i = 0; i < 5; i++) {
        int palpite;
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &palpite);

        if (palpite == sorteado) {
            printf("Parabéns! Você acertou o número %d!\n", sorteado);
            printf("Você acertou em %d tentativas.\n", i + 1);
            break;
        } else if (palpite < sorteado) {
            printf("O número sorteado é maior.\n");
        } else {
            printf("O número sorteado é menor.\n");
        }

        if (i == 4) {
            printf("Suas tentativas acabaram. O número sorteado era %d.\n", sorteado);
        }
    }

    printf("O jogo acabou. Obrigado por jogar!\n");

    return 0;
}
