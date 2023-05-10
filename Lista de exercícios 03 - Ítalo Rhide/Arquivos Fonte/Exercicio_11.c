//Exercício 11
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
    char figura[20];
	float area, volume, raio, altura;
	printf("insira a figura a ser analisada (cone / cilindro / esfera): ");
	scanf("%s", &figura);
	//
	if (strcmp(figura, "cone") == 0){
		printf("Digite o valor do raio: ");
		scanf("%f", &raio);
		printf("Digite o valor da altura: ");
		scanf("%f", &altura);
		area = 3.14 * raio * sqrt(pow(raio, 2) + pow(altura, 2));
		volume = (3.14 * pow(raio, 2) * altura)/3;
		printf("\nO volume deste cone será de %.1f cm³ e a área será de %.1f cm²\n", volume, area);
	}
	//
	else if (strcmp(figura, "cilindro") == 0){
		printf("Digite o valor do raio: ");
		scanf("%f", &raio);
		printf("Digite o valor da altura: ");
		scanf("%f", &altura);
		area = 2 * 3.14 * raio * altura;
		volume = 3.14 * pow(raio, 2) * altura;
		printf("\nO volume deste cilindro será de %.1f cm³ e a área será de %.1f cm²\n", volume, area);
	}
	else if (strcmp(figura, "esfera") == 0){
		printf("Digite o valor do raio: ");
		scanf("%f", &raio);
		area = 4 * 3.14 * pow(raio,2);
		volume = (4 * 3.14 * pow(raio, 3))/3;
		printf("\nO volume deste esfera será de %.2f cm³ e a área será de %.2f cm²\n", volume, area);
	}
	//
	else{
		printf("\nInsira uma opção que seja válida. Tente novamente!\n");
	}
	system("PAUSE");
}
