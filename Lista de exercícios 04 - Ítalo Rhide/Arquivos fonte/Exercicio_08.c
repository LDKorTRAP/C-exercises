//Exercício 08
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
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
		printf("\nO valor %.1f é o maior.\n", a);
	}
	else if (b>a && b>c){
		printf("\nO valor %.1f é o maior.\n", b);
	}
	else{
		printf("\nO valor %.1f é o maior.\n", c);
	}
	//
	if (a<b && a<c){
		printf("\nO valor %.1f é o menor.\n", a);
	}
	else if (b<a && b<c){
		printf("\nO valor %.1f é o menor.\n", b);
	}
	else{
		printf("\nO valor %.1f é o menor.\n", c);
	}
	system("PAUSE");
}
