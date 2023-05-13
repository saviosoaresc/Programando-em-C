#include <stdio.h>
int main(){
    int qntProduto, qntPcomprado=0;
    scanf("%d", &qntProduto);
    float carteira;
    scanf("%f", &carteira);
    
    for(int i=0; i<qntProduto;i++){
        float valorProduto;
        scanf("%f", &valorProduto);
        
        if(valorProduto<carteira){
            carteira -= valorProduto;
            qntPcomprado++;
        }else continue;
    }
    printf("%d", qntPcomprado);
}