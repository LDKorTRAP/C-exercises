//Exerc�cio 03
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	//A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
	setlocale(LC_ALL, "Portuguese");
	float fabrica, dist, imposto, custo;
	printf("\nDigite o valor de f�brica do ve�culo: ");
	scanf("%f", &fabrica);
	dist = fabrica*.12;
	imposto = fabrica*.30;
	custo = fabrica + dist + imposto;
	printf("O valor final do ve�culo a ser pago ser� de R$ %.2f.", custo);
	system("PAUSE");
}
