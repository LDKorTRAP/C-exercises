//Exerc�cio 05
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	printf("\nDigite um valor inteiro para A: ");
	scanf("%d", &a);
	printf("\nDigite um valor inteiro para B: ");
	scanf("%d", &b);
	a = b + a;
	b = a - b;
	a = a - b;
	printf("\nO valor de A agora � %d, e o valor de B agora � %d.\n", a, b);
	system("PAUSE");
}
