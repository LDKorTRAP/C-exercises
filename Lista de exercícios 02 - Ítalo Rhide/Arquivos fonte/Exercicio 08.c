//Exerc�cio 08
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int segundosB, minutosB, horasB, segundosF, minutosF, horasF;
	printf("\nDigite o tempo de dura��o do evento na f�brica em segundos: ");
	scanf("%d", &segundosB);
	minutosB = segundosB/60;
	horasB = minutosB/60;
	segundosF = segundosB%60;
	minutosF = minutosB%60;
	horasF = horasB%60;
	printf("\nO evento na f�brica durou %d horas, %d minutos, e %d segundos.\n", horasF, minutosF, segundosF);
	system("PAUSE");
}

