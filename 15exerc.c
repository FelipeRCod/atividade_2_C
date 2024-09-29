#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC �: %.2f\n", imc);
    if (imc < 18.5) {
        printf("Situa��o: Magra\n");
    } else if (imc >= 18.5 && imc < 30) {
        printf("Situa��o: Normal\n");
    } else {
        printf("Situa��o: Obesa\n");
    }

    return 0;
}
