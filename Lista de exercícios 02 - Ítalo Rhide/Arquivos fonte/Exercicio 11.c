//Exerc�cio 11
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float diariaN, diariaP,mediaN, mediaP, lucro_preju;
	printf("\nDigite o valor da di�ria normal: ");
	scanf("%f", &diariaN);
	//
	diariaP = diariaN-(diariaN*.22);
	mediaN = diariaN*30*(42*.4);
	mediaP = diariaP*30*(42*.7);
	lucro_preju = mediaP-mediaN;
	//
	printf("\nO valor da di�ria no per�odo de promo��o � de R$ %.2f.", diariaP);
	printf("\nO valor m�dio mensal arrecadado sem a promo��o � de R$ %.2f.", mediaN);
	printf("\nO valor m�dio mensal arrecadado com a promo��o � de R$ %.2f.", mediaP);
	printf("\nO lucro/preju�zo mensal com a promo��o � de R$ %.2f.\n", lucro_preju);
	system("PAUSE");
	
	/*segundo m�todo de defini��o de lucro ou prejuizo;
		if(lucro_preju >= 0){
	printf("\nO lucro mensal com a promo��o foi de R$ %.2f.\n", lucro_preju);
	}
	else{
	printf("\nO preju�zo mensal com a promo��o foi de R$ %.2f.\n", lucro_preju);
	}
	*/
}

