//Exerc�cio 12
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float farinhaKg, custoFar, aguaL, custoAg ,kwhT, custoK,impP, valorP, valorV;
	printf("\nDigite a quantidade de Kg de farinha: ");
	scanf("%f", &farinhaKg);
	printf("\nDigite o pre�o do Kg de farinha: ");
	scanf("%f", &custoFar);
	//
	printf("\nDigite a quantidade de litros de �gua: ");
	scanf("%f", &aguaL);
	printf("\nDigite o valor do litro de �gua: ");
	scanf("%f", &custoAg);
	//
	printf("\nDigite o total de KWH gasto: ");
	scanf("%f", &kwhT);
	printf("\nDigite o valor do KWH: ");
	scanf("%f", &custoK);
	//
	printf("\nDigite o percentual de imposto pago pelo p�o: ");
	scanf("%f", &impP);
	//
	valorP = (custoFar*farinhaKg)+(custoAg*aguaL)+(custoK*kwhT);
	valorP = valorP + valorP*(impP/100);
	valorV = valorP + valorP*.3;
	//
	printf("\nCustando um total de R$ %.2f, o p�o dever� ser vendido a R$ %.2f, visando-se 30 por cento de lucro.\n", valorP, valorV);
	system("PAUSE");
}
