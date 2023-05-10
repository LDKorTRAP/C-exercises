//Exerc�cio 03
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float A, B, C, delta, r1, r2;
	printf("Vamos calcular uma equa��o de segundo grau Ax� + Bx + C = 0");
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
		printf("\nA equa��o apresenta duas ra�zes reais, sendo elas %.2f e %.2f.\n", r1, r2);
	}
	else if(delta == 0){
		printf("\nA equa��o apresenta duas ra�zes iguais, sendo elas %.2f.\n", r1);
	}
	else{
		printf("\nA equa��o apresenta duas ra�zes imagin�rias, sendo elas %.2f e %.2f.\n", r1, r2);
	}
	system("PAUSE");
}
