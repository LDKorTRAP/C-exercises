//Exercício 07
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char aluno[40];
	float n1, n2, n3, final;
	printf("\nDigite o nome do aluno: ");
	scanf("%s", &aluno);
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	final = n1*.3 + n2*.2 + n3*.5;
	printf("O aluno %s teve nota final de %.1f pontos.\n", aluno, final);
	system("PAUSE");
}
