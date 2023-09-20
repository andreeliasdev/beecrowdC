#include <stdio.h>


int main(){

    int idadePessoa, ano, mes, dia;

    scanf("%d", &idadePessoa);

    ano = idadePessoa / 365;
    dia = idadePessoa % 365;
    mes = dia / 30;
    dia = dia % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    
    return 0;
}