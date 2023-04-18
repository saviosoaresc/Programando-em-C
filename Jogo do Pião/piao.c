#include<stdio.h>
#include<stdlib.h>
int main(){
    int alvo_limite, n;
    scanf("%d%d", &alvo_limite, &n);
    int vetor[n], vetorP[n];
    
    for(int i=0;i<n;i++){
        int jogadas;
        scanf("%d", &jogadas);
        vetorP[i] = abs(jogadas);
//---------------------GANHADOR-----------------------------//
        if(abs(jogadas)<alvo_limite){
            vetor[i] = abs(jogadas);     //as jogadas esta no vetor
        } else
            vetor[i] = -1;
    }
    
    int indexG = -1;
    int menor= 9999999;
    for(int i=0;i<n; i++){
        if(vetor[i] < 0){
            continue;
        }
        if(vetor[i] <= menor){
            menor = vetor[i];
            indexG = i;
        }
    }
    if(indexG == -1){
        printf("nenhum\n");
    }else
        printf("%d\n", indexG);

        
//-----------------------------PERDEDOR----------------------------------//
        int indexP=0;
        int maior=vetorP[0];
        for(int i=0;i<n; i++){
            if(vetorP[i] >= maior){
                maior = vetorP[i];
                indexP = i;
            }
        }
    printf("%d\n", indexP);    
}        