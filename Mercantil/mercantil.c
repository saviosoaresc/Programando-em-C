#include <stdio.h>

int main() {
    int qntRodadas, cont1=0, cont2=0;
    float produto, chute;
    char escolha;
    scanf("%d",&qntRodadas);
    float vetorProduto[qntRodadas], vetorChute[qntRodadas];
    char vetorEscolha[qntRodadas];
    
    for(int i=0;i<qntRodadas;i++){
        scanf("%f", &vetorProduto[i]);
    }
    
    for(int i = 0; i < qntRodadas; i++){
        scanf("%f", &vetorChute[i]);
    }
        
    for(int i = 0; i < qntRodadas; i++){
        scanf(" %c", &vetorEscolha[i]);
    }
    
    for(int i=0; i<qntRodadas;i++){
        if(vetorChute[i] == vetorProduto[i]){
            cont1++;
        }else if(vetorProduto[i] > vetorChute[i] && vetorEscolha[i] == 'M'){
            cont2++;
        }else if(vetorProduto[i] < vetorChute[i] && vetorEscolha[i] == 'm'){
            cont2++;
        } else cont1++;
    }
    
    if(cont1 == cont2){
        printf("empate\n");
    }else if(cont1 > cont2){
        printf("primeiro\n");
    } else if(cont1 < cont2){
        printf("segundo\n");
    }
}


// float produto, chute;
//     char escolha;
//     scanf("%f%f %c", &produto, &chute, &escolha);
    
//     if(produto < chute && escolha == 'm'){
//         printf("segundo");
//     }else if(produto > chute && escolha == 'M'){
//         printf("segundo");
//     }else printf("primeiro");