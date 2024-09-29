#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int faltas;
    float media;

    printf("Digite o n�mero de faltas: ");
    scanf("%d", &faltas);
    printf("Digite a m�dia: ");
    scanf("%f", &media);

    if (faltas <= 5 && media >= 6.0) {
        printf("\033[32mAprovado\033[0m\n"); 
    } else if (faltas > 5) {
        printf("\033[31mReprovado por faltas\033[0m\n"); 
    } else {
        printf("\033[33mReprovado por m�dia\033[0m\n"); 
    }

    return 0;
}
