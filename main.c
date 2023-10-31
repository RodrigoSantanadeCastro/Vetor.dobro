#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	setlocale(LC_ALL,"portuguese");
	float nota [10]; 
	int i;
	
	for (i=0; i<10;i++){
		printf("digite um valor\n");
		scanf("%f",&nota[i]);
		nota[i] = nota[i]* 2;
		printf("Valor dobrado é %f \n",nota[i]);	
	}
	
	return 0;
}
