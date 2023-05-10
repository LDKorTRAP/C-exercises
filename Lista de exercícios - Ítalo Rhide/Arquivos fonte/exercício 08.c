//Exercício 08
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float l1, l2, area, gasto;
	printf("\nDigite o comprimento a seguir em metros: ");
	scanf("%f", &l1);
	printf("\nDigite a largura a seguir em metros: ");
	scanf("%f", &l2);
	area = l1*l2;
	gasto = area*18;
	printf("A área totalizada é de %.0f M, e a potência de iluminação total é de %.0f W.\n", area, gasto);
	system("PAUSE");
}
