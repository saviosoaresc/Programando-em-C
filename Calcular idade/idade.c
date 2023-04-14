#include <stdio.h>
    int main(){
        int dN, mN, aN, dA, mA, aA, result;
        scanf("%d/%d/%d %d/%d/%d", &dN, &mN, &aN, &dA, &mA, &aA);
        
        if(mA < mN) {
            printf("%d", aA - aN - 1);
        } else if(mA == mN) {
            if(dA >= dN) {
                printf("%d", aA - aN);
            } else {
                printf("%d", aA - aN - 1);
            }
        } else {
            printf("%d", aA - aN);
        }
    }