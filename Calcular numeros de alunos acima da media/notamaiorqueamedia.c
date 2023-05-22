#include <stdio.h>
int main(){
    int alunos, cont=0;
    float mediaTurma=0, soma=0;
    scanf("%d", &alunos);
    float notas[alunos];
    
    for(int i=0;i<alunos;i++){
        scanf("%f", &notas[i]);
        
        soma += notas[i];
        mediaTurma = soma / alunos;
    }
    for(int i=0;i<alunos;i++){
        if(notas[i] >= mediaTurma){
            cont++;
        }else continue;
    }
    printf("%d %.2f", cont, mediaTurma );
}