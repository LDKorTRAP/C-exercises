//Exerc�cio 04
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float cm, cf, cc, am, af, ac, qam, qaf, qac, total;
	printf("\nDigite a cobertura desejada para a planta��o de milho: ");
	scanf("%f", &cm);
	printf("\nDigite a cobertura desejada para a planta��o de feij�o: ");
	scanf("%f", &cf);
	printf("\nDigite a cobertura desejada para a planta��o de caf�: ");
	scanf("%f", &cc);
	//
	printf("\nDigite o valor do acre para a planta��o de milho: ");
	scanf("%f", &am);
	printf("\nDigite o valor do acre para a planta��o de feij�o: ");
	scanf("%f", &af);
	printf("\nDigite o valor do acre para a planta��o de caf�: ");
	scanf("%f", &ac);
	//
	printf("\nDigite a quantidade de acres plantados de milho: ");
	scanf("%f", &qam);
	printf("\nDigite a quantidade de acres plantados de feij�o: ");
	scanf("%f", &qaf);
	printf("\nDigite a quantidade de acres plantados de caf�: ");
	scanf("%f", &qac);
	//
	total = 0.035*cm*am*qam+0.035*cf*af*qaf+0.035*cc*ac*qac;
	printf("\nO valor total do seguro ser� de R$ %.2f\n", total);
	system("PAUSE");
}
