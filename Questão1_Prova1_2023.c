#include <stdio.h>

int main (void){
    int dia, mes, ano;
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    if (dia == 30 || dia == 31 || dia == 28){
        switch (mes){
        case 1: case 3: case 5: case 7: case 8: case 10:
            if (dia == 31) {
                mes++;
                dia = 1;
            } else {dia++;}
            break;
        case 2:
            if (dia == 28) {
                mes++;
                dia = 1;
            }
            break;
        case 4: case 6: case 9: case 11:
            if(dia == 30) {
                mes++;
                dia = 1;
            }
            break;
        case 12:
            if(dia == 31) {
                mes=1;
                dia=1;
                ano++;
            } else {dia++;}
            break;
        }
    } else {dia++;}
    printf("O dia seguinte eh %d %d %d", dia, mes, ano);
}
