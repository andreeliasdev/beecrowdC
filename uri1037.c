#include <stdio.h>
#include <math.h> 

int main(){
    int codigo, qtd;
    double preco;

    scanf("%d%d", &codigo, &qtd);

    if(codigo == 1){
        preco = qtd * 4;
        printf("Total: R$ %.2lf\n", preco);
    }else if(codigo == 2){
        preco = qtd * 4.5;
        printf("Total: R$ %.2lf\n", preco);
    }else if(codigo == 3){
        preco = qtd *5;
        printf("Total: R$ %.2lf\n", preco);
    }else if(codigo == 4){
        preco = qtd * 2;
        printf("Total: R$ %.2lf\n", preco);
    }else if(codigo == 5){
        preco = qtd * 1.5;
        printf("Total: R$ %.2lf\n", preco);
    }


    return 0;
}