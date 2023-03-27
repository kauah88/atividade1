#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float salarioAtual, percentualReajuste, novoSalario;
    
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salarioAtual);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    
    novoSalario = salarioAtual * (1 + percentualReajuste/100);
    
    printf("O novo salario do funcionario é: %.2f\n", novoSalario);
    
    return 0;
    
}
