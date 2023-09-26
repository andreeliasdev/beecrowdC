#include <stdio.h>

int main(){
    int segundos, minutos, horas, seg;
    scanf("%d", &segundos);

    horas = segundos/3600;
    minutos = (segundos % 3600) / 60;
    seg = segundos % 60; 
    

    printf("%d:%d:%d", horas, minutos, seg);


    return 0;
}