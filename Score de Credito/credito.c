#include <stdio.h>
int main(){
    int score=0;
    float rendaMensal, emprestimo, qntParc;
    char atualizado, vinculo, nomeLimpo, imoveis;
    scanf("%s%s%s%s", &atualizado, &vinculo, &nomeLimpo, &imoveis);
    scanf("%f%f%f", &rendaMensal, &emprestimo, &qntParc);
    
    if(atualizado == 'S'){
        score = 100;
    }
    
    
    if(vinculo == 'S'){
        score += 200;
    }
    
    
    if(nomeLimpo == 'S'){
        score += 200;
    }
    
    
    if(imoveis == 'S'){
        int qntCarros, qntCasas, qntAp;
        scanf("%d%d%d", &qntCarros, &qntCasas, &qntAp);
        score += (qntCarros*10) + (qntCasas*40) + (qntAp*40);
    }
    
    
    
    
    if(emprestimo <= (2 * rendaMensal)){
        score += 200;
    }else if(emprestimo <= (3 * rendaMensal)){
        score += 100;
    }else if(emprestimo <= (4 * rendaMensal)){
        score += 50;
    }
    float valorParcela = emprestimo / qntParc;
    if(valorParcela > (0.3 * rendaMensal)){
        score = 0;
    }
    
    printf("%d\n", score);
}

// 1185.9
// 2048.1








