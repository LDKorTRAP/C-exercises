//Exercício 11
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float diariaN, diariaP,mediaN, mediaP, lucro_preju;
	printf("\nDigite o valor da diária normal: ");
	scanf("%f", &diariaN);
	//
	diariaP = diariaN-(diariaN*.22);
	mediaN = diariaN*30*(42*.4);
	mediaP = diariaP*30*(42*.7);
	lucro_preju = mediaP-mediaN;
	//
	printf("\nO valor da diária no período de promoção é de R$ %.2f.", diariaP);
	printf("\nO valor médio mensal arrecadado sem a promoção é de R$ %.2f.", mediaN);
	printf("\nO valor médio mensal arrecadado com a promoção é de R$ %.2f.", mediaP);
	printf("\nO lucro/prejuízo mensal com a promoção é de R$ %.2f.\n", lucro_preju);
	system("PAUSE");
	
	/*segundo método de definição de lucro ou prejuizo;
		if(lucro_preju >= 0){
	printf("\nO lucro mensal com a promoção foi de R$ %.2f.\n", lucro_preju);
	}
	else{
	printf("\nO prejuízo mensal com a promoção foi de R$ %.2f.\n", lucro_preju);
	}
	*/
}

