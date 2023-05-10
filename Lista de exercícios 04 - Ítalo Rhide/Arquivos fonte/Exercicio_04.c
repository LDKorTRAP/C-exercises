//Exercício 04
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float a, b, c, x1, x2, delta;
	printf("\nVamos montar e resolver uma equação do segundo grau ax²+bx+c=0.\n");
	printf("Digite o valor inteiro de a: ");
	scanf("%f", &a);
	printf("Digite o valor inteiro de b: ");
	scanf("%f", &b);
	printf("Digite o valor inteiro de c: ");
	scanf("%f", &c);
	delta = pow(b, 2) - 4*a*c;
	//
	if(delta > 0){
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("\nA equação possui duas raízes reais, sendo elas x1 = %.1f e x2 = %.1f.\n", x1, x2);
	}
	else if (delta == 0){
		x1 = -b/a;
		printf("\nA equação possui uma raiz real, sendo ela %.1f.\n", x1);
	}
	else{
		printf("\nA equação não apresenta raízes reais.\n");
	system("PAUSE");}
}
