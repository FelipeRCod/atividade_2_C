#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    int finalPlaca;

    printf("Digite o n�mero final da placa do ve�culo (0-9): ");
    scanf("%d", &finalPlaca);

    switch (finalPlaca) {
        case 1:
        case 2:
            printf("Dia do rod�zio: Segunda-feira\n");
            break;
        case 3:
            printf("Dia do rod�zio: Ter�a-feira\n");
            break;
        case 4:
        case 5:
            printf("Dia do rod�zio: Quarta-feira\n");
            break;
        case 6:
        case 7:
            printf("Dia do rod�zio: Quinta-feira\n");
            break;
        case 8:
        case 9:
        case 0:
            printf("Dia do rod�zio: Sexta-feira\n");
            break;
        default:
            printf("N�mero inv�lido. Insira um n�mero entre 0 e 9.\n");
            break;
    }

    return 0;
}
