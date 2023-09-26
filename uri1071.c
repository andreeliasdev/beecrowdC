#include <stdio.h>

int main(){
    int x, y, i, min, max, soma=0;

    scanf("%d %d", &x, &y);

    if(x<y){
        min = x;
        max = y;
    }else{
        min = y;
        max = x;
    }

    for(i = min+1; i<max; i++){
        if(i%2!=0){
            soma +=i;
        }
    }

    printf("%d\n", soma);


    return 0;
}