//Exerc�cio 09
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
    float percent, codig1, value1, qnt1, codig2, value2, qnt2, final;
	printf("Digite o valor da percentagem do IPI: ");
	scanf("%f", &percent);
	//
	printf("\nDigite o c�digo da pe�a 1: ");
	scanf("%f", &codig1);
	printf("Digite o valor unit�rio da pe�a 1: ");
	scanf("%f", &value1);
	printf("Digite a quantidade de pe�as 1: ");
	scanf("%f", &qnt1);
	//
	printf("\nDigite o c�digo da pe�a 2: ");
	scanf("%f", &codig2);
	printf("Digite o valor unit�rio da pe�a 2: ");
	scanf("%f", &value2);
	printf("Digite a quantidade de pe�as 2: ");
	scanf("%f", &qnt2);
	//
	final = (value1*qnt1+value2*qnt2)*((percent/100)+1);
	printf("\nO valor final a ser pago ser� de R$ %.2f.\n", final);
	system("PAUSE");
}
