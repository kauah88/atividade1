#include <stdio.h>
#include <stdlib.h>

main() {
	
	float vendas, salarioFixo, valorPorCarro, comissao, salarioFinal;
    int carrosVendidos;

    printf("Digite o salario fixo do vendedor: R$");
    scanf("%f", &salarioFixo);

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: R$");
    scanf("%f", &vendas);

    printf("Digite o valor que o vendedor recebe por carro vendido: R$");
    scanf("%f", &valorPorCarro);

    comissao = carrosVendidos * valorPorCarro;
    salarioFinal = salarioFixo + comissao + (vendas * 0.05);

    printf("O salario final do vendedor é: R$%.2f", salarioFinal);

    return 0;
}
