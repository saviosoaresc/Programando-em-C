#include <stdio.h>

typedef struct {
    int dia, mes, ano;
} Data;

int comparacaoDatas(Data data1, Data data2){
    if(data1.dia == data2.dia && data1.mes == data2.mes && data1.ano == data2.ano){
        return 1;
    }
    
    return 0;
}


int main(){
    Data data1;
    Data data2;
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);
    
    int r = comparacaoDatas(data1, data2);
    
    if(r) printf("Iguais\n");
    else printf("Diferentes\n");
    
}