#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
    float preco_banana = 2.50;
    float preco_uva = 6.50;
    float preco_pessego = 10.22;
    float banana_quantidade = 2.0;
    float uva_quantidade = 6.0;
    float pessego_quantidade = 10;
    
    float preco_total_b = preco_banana * banana_quantidade;
    float preco_total_u = preco_uva * uva_quantidade;
    float preco_total_p = preco_pessego * pessego_quantidade;
    
    printf("Produto || Preco Unitario || Quantidade || Preco Total");
    printf("\nbanana%14.0f%14.0f%14.0f",preco_total_b,preco_banana,banana_quantidade);
    printf("\nuva%18.0f%13.0f%14.0f",preco_total_u,preco_uva,uva_quantidade);
    printf("\npessego%14.0f%13.0f%14.0f",preco_total_p,preco_pessego,pessego_quantidade);
	
}
