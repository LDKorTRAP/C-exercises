//Exerc�cio 08
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("\nDigite o valor de A: ");
	scanf("%f", &a);
	printf("\nDigite o valor de B: ");
	scanf("%f", &b);
	printf("\nDigite o valor de C: ");
	scanf("%f", &c);
	//
	if (a>b && a>c){
		printf("\nO valor %.1f � o maior.\n", a);
	}
	else if (b>a && b>c){
		printf("\nO valor %.1f � o maior.\n", b);
	}
	else{
		printf("\nO valor %.1f � o maior.\n", c);
	}
	//
	if (a<b && a<c){
		printf("\nO valor %.1f � o menor.\n", a);
	}
	else if (b<a && b<c){
		printf("\nO valor %.1f � o menor.\n", b);
	}
	else{
		printf("\nO valor %.1f � o menor.\n", c);
	}
	system("PAUSE");
}
