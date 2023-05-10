//Exercício 04
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float cm, cf, cc, am, af, ac, qam, qaf, qac, total;
	printf("\nDigite a cobertura desejada para a plantação de milho: ");
	scanf("%f", &cm);
	printf("\nDigite a cobertura desejada para a plantação de feijão: ");
	scanf("%f", &cf);
	printf("\nDigite a cobertura desejada para a plantação de café: ");
	scanf("%f", &cc);
	//
	printf("\nDigite o valor do acre para a plantação de milho: ");
	scanf("%f", &am);
	printf("\nDigite o valor do acre para a plantação de feijão: ");
	scanf("%f", &af);
	printf("\nDigite o valor do acre para a plantação de café: ");
	scanf("%f", &ac);
	//
	printf("\nDigite a quantidade de acres plantados de milho: ");
	scanf("%f", &qam);
	printf("\nDigite a quantidade de acres plantados de feijão: ");
	scanf("%f", &qaf);
	printf("\nDigite a quantidade de acres plantados de café: ");
	scanf("%f", &qac);
	//
	total = 0.035*cm*am*qam+0.035*cf*af*qaf+0.035*cc*ac*qac;
	printf("\nO valor total do seguro será de R$ %.2f\n", total);
	system("PAUSE");
}
