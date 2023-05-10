//Exercício 17
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, mediaP;
	printf("\nDigite a primeira nota: ");
	scanf("%f", &n1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &n2);
	printf("\nDigite a terceira nota: ");
	scanf("%f", &n3);
	//
	mediaP = (n1*2 + n2*3 + n3*5)/10; //somatório dos pesos (2+3+5).
	printf("\nA média ponderada final do aluno foi %.1f.\n", mediaP);
	system("PAUSE");
}
