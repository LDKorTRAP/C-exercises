//Exercício 02
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, media;
	char aluno[100];
	printf("\nDigite o nome do aluno: ");
	scanf("%s",&aluno);
	printf("\nDigite as notas n1 e n2 do aluno: ");
	scanf("%f %f", &n1, &n2);
	media = (n1*2+n2*3)/5;
	printf("\nO aluno %s obteve a média de %.1f.\n", aluno, media);
	system("PAUSE");
}
