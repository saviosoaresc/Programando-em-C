#include <stdio.h>
int main(){
    int idade, meses;
    float contri;
    char sexo;
    scanf("%c%d%d%f",&sexo,&idade,&meses,&contri);
        float totalContri = meses * contri;
        int mesesTotal = 1200 - (idade*12);
        float aposentadoria = totalContri/mesesTotal;
        
    if(sexo == 'M'){
        if(idade < 90){
            float percentual;
            scanf("%f",&percentual);
            aposentadoria = aposentadoria + (percentual/100)*aposentadoria;
            printf("%.2f", aposentadoria);
        }else{
            aposentadoria +=aposentadoria*0.5;
            printf("%.2f", aposentadoria);
        }
    }
    
    if(sexo == 'F'){
        float salMinimo, porcentagem;
        scanf("%f%f",&salMinimo,&porcentagem);
        aposentadoria += (porcentagem/100)*aposentadoria;
        if(aposentadoria<salMinimo){
            aposentadoria = salMinimo;
            printf("%.2f", aposentadoria);
        }else
            printf("%.2f", aposentadoria);
    }
}


















