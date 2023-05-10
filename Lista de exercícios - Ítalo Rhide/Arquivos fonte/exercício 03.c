//Exercício 03
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, d, e, f, x, y;
	printf("\nDigite valores para os coeficientes a, b, c, d, e, f: ");
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	x = (c*e-b+f)/a*e-b*d;
	y = (a*f-c*d)/a*e-b*d;
	printf("Os valores de X e Y são respectivamente %.0f e %.0f.", x, y);
	system("PAUSE");
}

