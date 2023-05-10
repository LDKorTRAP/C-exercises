//Exercício 09
//Ítalo Rhide
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
int main()
{
	//p(quantidade inicial), r(taxa de lucro), n(número de anos), f(valor final), i(r/100).
	setlocale(LC_ALL, "Portuguese");
	float p, r, n, i, f;
	printf("\nDigite o valor da quantidade inicial: ");
	scanf("%f", &p);
	printf("\nDigite o valo da taxa de lucro (porcentagem): ");
	scanf("%f", &r);
	printf("\nDIgite o total de tempo em anos: ");
	scanf("%f", &n);
	i = r/100;
	f = p*pow((1+i), n);
	printf("\nO valor final acumulado será de R$ %.2f.\n", f);
	system("PAUSE");
}
