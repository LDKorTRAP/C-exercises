//Exerc�cio 16
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite a idade do cidad�o: ");
	scanf("%d", &idade);
	//
	if(idade < 16){
		printf("Situa��o eleitoral: N�o-eleitor\n");
	}
	else if(idade >= 18 && idade <= 65){
		printf("Situa��o eleitoral: Eleitor obrigat�rio\n");
	}
	else if(idade >= 16 && idade < 18 || idade > 65){
		printf("Situa��o eleitoral: Eleitor facultativo\n");
	}
	else{
		printf("Insira o dado corretamente. Tente novamente!\n");
	}
	system("PAUSE");
}
