#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[200];
    float preco, qnt;
} ItemCompra;

float calcular_total_compras(int n, ItemCompra vetItens[]){
    float valor = 0;
    
    for(int i=0; i<n; i++){
        valor += vetItens[i].preco * vetItens[i].qnt;
    }
    
    return valor;
}

int main(){
    int n;
    scanf("%d", &n);
    ItemCompra *vetItens = malloc(n * sizeof(ItemCompra));

    
    for(int i=0; i<n; i++){
        scanf("%s %f %f", vetItens[i].nome, &vetItens[i].preco, &vetItens[i].qnt);
    }
    
    float result = calcular_total_compras(n, vetItens);
    printf("%.2f", result);
    
    free(vetItens);
}






