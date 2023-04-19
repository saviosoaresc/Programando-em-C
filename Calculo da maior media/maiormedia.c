#include <stdio.h>
int main(){
    float nota1,nota2,nota3;
    scanf("%f%f%f", &nota1,&nota2,&nota3);
    float media1 = (nota1+nota2+nota3)/3;
    scanf("%f%f%f", &nota1,&nota2,&nota3);
    float media2 = (nota1+nota2+nota3)/3;
    scanf("%f%f%f", &nota1,&nota2,&nota3);
    float media3 = (nota1+nota2+nota3)/3;
    
    float maior = media1;
    
    if(media2>maior && media2 > media3){
        maior = media2;
        printf("Aluno 2\n");
        printf("%.2f", maior);
    }else if(media3>maior && media3 > media2){
        maior=media3;
        printf("Aluno 3\n");
        printf("%.2f", maior);
    }else{ 
        printf("Aluno 1\n");
        printf("%.2f", maior);
    }
    return 1;
}