//Exerc�cio 06
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float A, B, C;
	printf("\nDigite o lado A: ");
	scanf("%f", &A);
	printf("\nDigite o lado B: ");
	scanf("%f", &B);
	printf("\nDigite o lado C: ");
	scanf("%f", &C);
	//
	if((A*A) == (B*B) + (C*C) || (B*B) == (A*A) + (C*C) || (C*C) == (A*A) + (B*B)){
		printf("\nO tri�ngulo ABC � um tri�gulo ret�ngulo.\n");
	}
	else if((A*A) > (B*B) + (C*C)){
		printf("\nO tri�ngulo ABC � um tri�gulo obtus�ngulo\n.");
	}
	else{
		printf("\nO tri�ngulo ABC � um tri�gulo acut�ngulo.\n");
	}
	system("PAUSE");
}
