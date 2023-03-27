#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int anos, meses, dias, totalDias;
	
	printf("Digite a idade em anos: ");
	scanf("%d", &anos);
	
	printf("Digite a idade em meses: ");
	scanf("%d", &meses);
	
	printf("Digite a idade em dias: ");
	scanf("%d", &dias);
	
	totalDias = (anos*365) + (meses*30) + dias;
	
	printf("Essa e sua idade em dias: %d", totalDias);
	
	return 0;
	
}
