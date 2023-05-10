//Exercício 06
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float conta, atraso, multa, taxa, juros, total;
	printf("\nDigite o valor da conta: ");
	scanf("%f", &conta);
	printf("\nDigite o total de dias de atraso: ");
	scanf("%f", &atraso);
	printf("\nDigite o valor da multa fixa: ");
	scanf("%f", &multa);
	printf("\nDigite o valor do juros por dia: ");
	scanf("%f", &taxa);
	//espaco para separar partes
	juros = conta*(taxa/100)*atraso;
	total = conta+multa+juros;
	printf("\nValor da conta: R$ %.2f \nDias de atraso: %.0f dias \nTotal da multa: R$ %.2f", conta, atraso, multa);
	printf("\nTotal de juros: R$ %.2f \nTotal a pagar:R$ %.2f\n", juros, total);
	system("PAUSE");
} 

