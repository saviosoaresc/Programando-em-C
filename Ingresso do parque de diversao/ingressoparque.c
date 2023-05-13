#include <stdio.h>
int main(){
    int qntFilhos;
    float ingresso, desconto, valorComDesconto=0;
    scanf("%d %f", &qntFilhos, &ingresso);
    
    for(int i=0; i<qntFilhos;i++){
        int idade;
        scanf("%d", &idade);
        
        if(idade<=5){
            desconto = 0.2;
        }else if(idade<=7){
            desconto = 0.15;
        }else if(idade<=10){
            desconto = 0.05;
        }else desconto=0;
        
        valorComDesconto += ingresso - (desconto * ingresso);
    }
        float valorSemDesconto = (qntFilhos*ingresso) - (0.15 * (qntFilhos*ingresso));
        
        float maior = valorComDesconto;
        if(valorSemDesconto > maior){
            maior = valorSemDesconto;
        }
    printf("%f", maior);
}


















