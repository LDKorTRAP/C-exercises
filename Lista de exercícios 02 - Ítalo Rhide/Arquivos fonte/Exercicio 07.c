//Exerc�cio 07
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	//A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
	setlocale(LC_ALL, "Portuguese");
	int anos, meses, dias, totalD;
	printf("\nDigite a idade da pessoa considerando");
	printf("\nOs anos: ");
	scanf("%d", &anos);
	printf("\nOs meses: ");
	scanf("%d", &meses);
	printf("\nOs dias: ");
	scanf("%d", &dias);
	//
	totalD = (anos*12*30)+(meses*30)+dias;
	printf("\nA idade total da pessoa � de %d dias.\n", totalD);
	system("PAUSE");
}
