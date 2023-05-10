//Exercício 16
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, arit, harm, geom, quad;
	printf("\nDigite a primeira nota: ");
	scanf("%f", &n1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &n2);
	printf("\nDigite a terceira nota: ");
	scanf("%f", &n3);
	printf("\nDigite a quarta nota: ");
	scanf("%f", &n4);
	//
	arit = (n1+n2+n3+n4)/4;
	harm = 4/((1/n1)+(1/n2)+(1/n3)+(1/n4));
	geom = sqrt(sqrt((n1*n2*n3*n4)));
	quad = sqrt((pow(n1, 2)+pow(n2, 2)+pow(n3, 2)+pow(n4, 2))/4);
	//
	printf("\nA média aritimética totalizou %.1f", arit);
	printf("\nA média harmônica totalizou %.1f", harm);
	printf("\nA média geométrica totalizou %.1f", geom);
	printf("\nA média quadrática totalizou %.1f\n", quad);
	system("PAUSE");
}
