#include <stdio.h>

int main(){
    int n, numero, i;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &numero);
        if(numero%2==0 &&numero>0){
            printf("EVEN POSITIVE\n");
        }else if(numero%2==0 &&numero<0){
            printf("EVEN NEGATIVE\n");
        }else if(numero%2!=0&&numero>0){
            printf("ODD POSITIVE\n");
        }else if(numero%2!=0&&numero<0){
            printf("ODD NEGATIVE\n");
        }else{
            printf("NULL\n");
        }
    }
    


    return 0;
}