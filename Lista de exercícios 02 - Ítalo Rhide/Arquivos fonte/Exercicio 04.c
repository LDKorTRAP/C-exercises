//Exercício 04
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float x1, x2, y1, y2, dist;
	printf("Para o ponto A, digite os valores de x1 e y1: ");
	scanf("%f %f", &x1, &y1);
	printf("Para o ponto B, digite os valores de x2 e y2: ");
	scanf("%f %f", &x2, &y2);
	//
	dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	//
	printf("A distância total entre os pontos A e B é de %.1f Km.", dist);
	system("PAUSE");
}
