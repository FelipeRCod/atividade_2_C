#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");
    int finalPlaca;

    printf("Digite o n�mero final da placa do ve�culo (0-9): ");
    scanf("%d", &finalPlaca);

    if (finalPlaca == 1 || finalPlaca == 2) {
        printf("Dia do rod�zio: Segunda-feira\n");
    } else if (finalPlaca == 3) {
        printf("Dia do rod�zio: Ter�a-feira\n");
    } else if (finalPlaca == 4 || finalPlaca == 5) {
        printf("Dia do rod�zio: Quarta-feira\n");
    } else if (finalPlaca == 6 || finalPlaca == 7) {
        printf("Dia do rod�zio: Quinta-feira\n");
    } else if (finalPlaca == 8 || finalPlaca == 9 || finalPlaca == 0) {
        printf("Dia do rod�zio: Sexta-feira\n");
    } else {
        printf("N�mero inv�lido. Insira um n�mero entre 0 e 9.\n");
    }

    return 0;
}
