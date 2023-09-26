#include <stdio.h>

int main(){
    int horaI, minI, horaF, minF, horaM, horaMf, hora24, resultado = 0, resHora, resMin;

    scanf("%d %d %d %d", &horaI, &minI, &horaF, &minF);

    horaM = (horaI * 60) + minI;
    horaMf = (horaF * 60) + minF;
    hora24 = 24 * 60;

    if(horaMf > horaM){
        resultado = horaMf - horaM;
        resHora = resultado/60;
        resMin = resultado%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resHora, resMin);
    }else if(horaM > horaMf){
        resultado = (hora24 - horaM) + horaMf;
        resHora = resultado/60;
        resMin = resultado%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resHora, resMin);
    }else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24, 0);
    }

    return 0;
}