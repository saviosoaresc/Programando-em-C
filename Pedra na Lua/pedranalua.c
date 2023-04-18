#include <stdio.h>
#include <stdlib.h>
    int main(){
        int n, A, B;
        scanf("%d", &n);
        int vetor[n], pedraA, pedraB, ganhador;
        
        for(int i=0;i<n; i++){
            scanf("%d %d", &pedraA, &pedraB);
            int pontuacao = abs(pedraA - pedraB); 
            vetor[i] = pontuacao;
            if(pedraA < 10 || pedraB < 10){
                 vetor[i] = -1;
             }
        }
        
        int index = -1;
        int menor= 999999999;
        for(int i=0;i<n; i++){
            if(vetor[i] < 0){
                continue;
            }
            if(vetor[i] < menor){
                menor = vetor[i];
                index = i;
            }
        }
        if(index == -1){
            printf("sem ganhador\n");
        }else
        printf("%d\n", index);
    }
//==============================Segunda Maneira=================================
// #include <stdio.h>

// int abs(int valor) {
//     if(valor < 0)
//         return valor * -1;
//     return valor;
// }

// int main(){
// 	int n, idxVen, scoreVen, pedraA, pedraB, score;
// 	n = scoreVen = pedraA = pedraB = 0;
// 	idxVen = -1;
	
// 	scanf("%d", &n);
	
// 	for(int i = 0; i < n; i++){
// 		scanf("%d %d", &pedraA, &pedraB);
		
// 		if(pedraA < 10 || pedraB < 10){
// 			continue;
// 		}
		
// 		score = abs(pedraA - pedraB);
				
// 		if(idxVen <= (-1)){
// 			idxVen = i;
// 			scoreVen = score;
// 			continue;
// 		}
		
// 		if(score < scoreVen){
// 			idxVen = i;
// 			scoreVen = score;
// 		}
// 	}
	
// 	if(idxVen <= (-1)){
// 		printf("sem ganhador\n");
// 	}else{
// 		printf("%d\n", idxVen);
// 	}
	
// 	return 0;
// }

































