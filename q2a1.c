#include <stdio.h>
#include <stdlib.h>

int main() {

	float raio, area;
    float PI = 3.141592; 
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
    area = PI * raio * raio;
    
    printf("A area do circulo de raio %.2f e %.2f", raio, area);
    
    return 0;
}
