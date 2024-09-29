#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 
    float salario, imposto;

    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    if (salario <= 1903.98) {
        imposto = 0.0;
        printf("Isento de Imposto de Renda.\n");
    } else if (salario <= 2826.65) {
        imposto = salario * 0.075;
        printf("Imposto de Renda: R$ %.2f (al�quota de 7,5%%)\n", imposto);
    } else if (salario <= 3751.05) {
        imposto = salario * 0.15;
        printf("Imposto de Renda: R$ %.2f (al�quota de 15,0%%)\n", imposto);
    } else if (salario <= 4664.68) {
        imposto = salario * 0.225;
        printf("Imposto de Renda: R$ %.2f (al�quota de 22,5%%)\n", imposto);
    } else {
        imposto = salario * 0.275;
        printf("Imposto de Renda: R$ %.2f (al�quota de 27,5%%)\n", imposto);
    }

    return 0;
}
