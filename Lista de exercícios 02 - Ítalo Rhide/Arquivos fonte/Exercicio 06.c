//Exerc�cio 06
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
	//A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
	setlocale(LC_ALL, "Portuguese");
	int horas;
	float total;
	printf("\nDigite o total de horas de uso da charrete: ");
	scanf("%d", &horas);
	total = (horas/3)*8.50 + (horas%3)*3.50;
	printf("\nO aluguel total da charrete � de R$ %.2f para %d horas.\n", total, horas);
	system("PAUSE");
}
