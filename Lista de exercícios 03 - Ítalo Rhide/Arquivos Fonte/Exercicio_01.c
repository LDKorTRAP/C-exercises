//Exerc�cio 01
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    float n1, n2, n3, media;
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite a primeira nota: ");
	scanf("%f", &n1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &n2);
	printf("\nDigite a terceira nota: ");
	scanf("%f", &n3);
	//
	media = (n1+n2+n3)/3;
	printf("\nO aluno com as notas %.1f, %.1f, e %.1f, obteve a m�dia %.1f", n1, n2, n3, media);
	if (media >= 6) {
		printf("\nAPROVADO!\n");
	}
	else {
		printf("\nREPROVADO!\n");
	}
	system("PAUSE");
}
