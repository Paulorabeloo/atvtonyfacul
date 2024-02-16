#include <stdio.h>
int main(){
    float compra, compra2, desconto, pagar;
    printf("Digite o Valor da compra:\n");
    scanf("%f", &compra);
    if (compra > 300){
        compra2 = compra - 300;
        desconto = (compra2 * 10) / 100;
        pagar = compra - desconto;
        printf("Valor de Compra: %.1f\n", compra);
        printf("Valor do Desconto: %.1f\n", desconto);
        printf("Valor a pagar: %.1f\n", pagar);
    }
    else{
        printf("Valor de Compra: %.1f\n", compra);

    }
return 0;
}
