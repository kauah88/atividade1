#include <stdio.h>
#include <stdlib.h>

int main() {
	
    float custoFabrica, custoConsumidor, percentualDistribuidor, percentualImpostos;
    
	percentualDistribuidor = 0.28;
	percentualImpostos = 0.45;

	printf("Digite o custo de fabrica do carro: R$");
	scanf("%f", &custoFabrica);

	custoConsumidor = custoFabrica * (1 + percentualDistribuidor + percentualImpostos);

	printf("O custo final do carro ao consumidor e: R$ %.2f\n", custoConsumidor);	
    
    return 0;
}
