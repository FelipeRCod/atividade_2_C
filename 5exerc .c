#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "");
 float n1, n2;
  printf("N�meros?");
    scanf("%f %f", &n1, &n2);
  if(n1>n2) puts("1� N�mero  maior que 2� N�mero ");
  else puts ("2� N�mero  maior que 1� N�mero ");
    if(n1==n2) puts("1� N�mero  igual a 2� N�mero ");
  return 0;
}