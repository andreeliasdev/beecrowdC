#include <stdio.h>

int main(){
    int soma=0, i;
    double n1;

    for(i=0; i<6; i++){
        scanf("%lf", &n1);
        if(n1>0){
            soma+=1;
        }
    }
    printf("%d valores positivos", soma);

    return 0;
}