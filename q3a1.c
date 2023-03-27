#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int latas, litros, largura, altura, area, consumo, consumoMetro, litrosPorLata;
	
	litrosPorLata = 2000;
	consumoMetro = 300;
	
	
	printf ("Digite a altura da parede que deseja pintar em metros: " );
	scanf("%d", &altura);
	
	printf ("Digite a largura da parede que deseja pintar em metros: " );
	scanf("%d", &largura);
	
	area = altura * largura;
	
	consumo = (area * consumoMetro) / 1000;
	
	litros = consumo / (litrosPorLata / 1000);
	latas = litros;
	
	if (consumo % (litrosPorLata / 1000) != 0) {
        latas++;
    }
    
    printf("Serao necessarias %d latas de tinta para pintar a parede.\n", latas);
     
	return 0;
}
