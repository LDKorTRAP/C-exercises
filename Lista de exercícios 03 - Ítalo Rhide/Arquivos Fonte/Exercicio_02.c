//Exerc�cio 02
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int number;
	printf("\nDigite unm n�mero inteiro: ");
	scanf("%d", &number);
	if (number%5 == 0 && number%3 == 0)
	{
	printf("\nO n�mero %d � divis�vel por 3 e por 5 simultaneamente.\n", number);	
	}
	else if(number%5 == 0 && number%3 != 0)
	{
	printf("\nO n�mero %d n�o � divis�vel por 3 e 5 simultaneamente.\n", number);
	}
	else if(number%3 == 0 && number%5 != 0)
	{
	printf("\nO n�mero %d n�o � divis�vel por 3 e 5 simultaneamente.\n", number);
	}
	else{
	printf("\nO n�mero %d n�o � divis�vel por 3 e 5 simultaneamente.\n", number);
	}
	system("PAUSE");
}
