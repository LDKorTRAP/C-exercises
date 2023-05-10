//Exercício 12
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float farinhaKg, custoFar, aguaL, custoAg ,kwhT, custoK,impP, valorP, valorV;
	printf("\nDigite a quantidade de Kg de farinha: ");
	scanf("%f", &farinhaKg);
	printf("\nDigite o preço do Kg de farinha: ");
	scanf("%f", &custoFar);
	//
	printf("\nDigite a quantidade de litros de água: ");
	scanf("%f", &aguaL);
	printf("\nDigite o valor do litro de água: ");
	scanf("%f", &custoAg);
	//
	printf("\nDigite o total de KWH gasto: ");
	scanf("%f", &kwhT);
	printf("\nDigite o valor do KWH: ");
	scanf("%f", &custoK);
	//
	printf("\nDigite o percentual de imposto pago pelo pão: ");
	scanf("%f", &impP);
	//
	valorP = (custoFar*farinhaKg)+(custoAg*aguaL)+(custoK*kwhT);
	valorP = valorP + valorP*(impP/100);
	valorV = valorP + valorP*.3;
	//
	printf("\nCustando um total de R$ %.2f, o pão deverá ser vendido a R$ %.2f, visando-se 30 por cento de lucro.\n", valorP, valorV);
	system("PAUSE");
}
