//Exercício 01
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
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
	printf("\nO aluno com as notas %.1f, %.1f, e %.1f, obteve a média %.1f", n1, n2, n3, media);
	if (media >= 6) {
		printf("\nAPROVADO!\n");
	}
	else {
		printf("\nREPROVADO!\n");
	}
	system("PAUSE");
}
