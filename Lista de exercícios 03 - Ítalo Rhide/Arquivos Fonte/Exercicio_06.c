//Exercício 06
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
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
		printf("\nO triângulo ABC é um triâgulo retângulo.\n");
	}
	else if((A*A) > (B*B) + (C*C)){
		printf("\nO triângulo ABC é um triâgulo obtusângulo\n.");
	}
	else{
		printf("\nO triângulo ABC é um triâgulo acutângulo.\n");
	}
	system("PAUSE");
}
