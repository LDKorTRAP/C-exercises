//Exerc�cio 16
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
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
	printf("\nA m�dia aritim�tica totalizou %.1f", arit);
	printf("\nA m�dia harm�nica totalizou %.1f", harm);
	printf("\nA m�dia geom�trica totalizou %.1f", geom);
	printf("\nA m�dia quadr�tica totalizou %.1f\n", quad);
	system("PAUSE");
}
