#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    float trocoF;
    printf("Oi. Quanto de troco eu lhe devo?\n");
    trocoF = GetFloat();
    while (trocoF < 0){
        printf("Opss!, digite um valor valido\n");
        trocoF = GetFloat();
    }

    int trocoI = trocoF * 100;
    int nmdm;// Numero Minimo De Moedas;
    int aux; 
    if(trocoI > 25){
        nmdm = trocoI/25;
        aux = trocoI % 25;
        if(aux > 10){
            nmdm = nmdm + aux/10;
            aux = aux % 10;
            if(aux > 5){
                nmdm = nmdm + aux / 5;
                aux = aux % 5;
                nmdm = nmdm + aux;
            }
        }
    }else if(trocoI < 25 && trocoI > 10){
        nmdm = trocoI/10;
        aux = trocoI % 10;
        if(trocoI > 5){
            nmdm = nmdm + aux / 5;
            aux = aux % 5;
            nmdm = nmdm + aux;
        }
    }else if(trocoI < 10 && trocoI > 5){
        nmdm = trocoI / 5;
        aux = trocoI % 5;
        nmdm = nmdm + aux;
    }else{
        nmdm = trocoI;
    }
    printf("%d\n",nmdm);
    //printf("\n%d\n",trocoI);*/

    return 0;
}