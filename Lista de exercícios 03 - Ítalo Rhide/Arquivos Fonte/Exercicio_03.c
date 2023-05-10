//Exercício 03
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float A, B, C, delta, r1, r2;
	printf("Vamos calcular uma equação de segundo grau Ax² + Bx + C = 0");
	printf("\nDigite o valor de A: ");
	scanf("%f", &A);
	printf("\nDigite o valor de B: ");
	scanf("%f", &B);
	printf("\nDigite o valor de C: ");
	scanf("%f", &C);
	//
	delta = pow(B, 2) - 4*A*C;
	r1 = (-B + sqrt(delta))/(2*A);
	r2 = (-B - sqrt(delta))/(2*A);
	//
	if (delta > 0){
		printf("\nA equação apresenta duas raízes reais, sendo elas %.2f e %.2f.\n", r1, r2);
	}
	else if(delta == 0){
		printf("\nA equação apresenta duas raízes iguais, sendo elas %.2f.\n", r1);
	}
	else{
		printf("\nA equação apresenta duas raízes imaginárias, sendo elas %.2f e %.2f.\n", r1, r2);
	}
	system("PAUSE");
}
