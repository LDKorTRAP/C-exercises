//Exercício 03
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	//A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
	setlocale(LC_ALL, "Portuguese");
	float fabrica, dist, imposto, custo;
	printf("\nDigite o valor de fábrica do veículo: ");
	scanf("%f", &fabrica);
	dist = fabrica*.12;
	imposto = fabrica*.30;
	custo = fabrica + dist + imposto;
	printf("O valor final do veículo a ser pago será de R$ %.2f.", custo);
	system("PAUSE");
}
