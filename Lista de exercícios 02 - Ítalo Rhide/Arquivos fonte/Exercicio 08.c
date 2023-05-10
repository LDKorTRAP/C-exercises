//Exercício 08
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int segundosB, minutosB, horasB, segundosF, minutosF, horasF;
	printf("\nDigite o tempo de duração do evento na fábrica em segundos: ");
	scanf("%d", &segundosB);
	minutosB = segundosB/60;
	horasB = minutosB/60;
	segundosF = segundosB%60;
	minutosF = minutosB%60;
	horasF = horasB%60;
	printf("\nO evento na fábrica durou %d horas, %d minutos, e %d segundos.\n", horasF, minutosF, segundosF);
	system("PAUSE");
}

