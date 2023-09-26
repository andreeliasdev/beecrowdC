#include <stdio.h>

int main(){
    int i, positivos=0;
    double n, soma, media;

    for(i = 0; i<6; i++){
        scanf("%lf", &n);
        if(n>0){
            positivos+=1;
            soma += n;
        }
    }
    media = soma / positivos;

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media);

    return 0;
}