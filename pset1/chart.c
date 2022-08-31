#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int mf,fm,ff,mm;
    printf("M procurando F: ");
    mf = GetInt();
    printf("F procurando M: ");
    fm = GetInt();
    printf("F procurando F: ");
    ff = GetInt();
    printf("M procurando M: ");
    mm = GetInt();
    printf("\n\n");
    printf("Quem procura quem?");
    printf("\n\n");

    int aux;
    aux = (mf / 10.0) * (int) 80;
    printf("M procurando F:");
    printf("\n");
    while(aux > 0){
        printf("#");
        fflush(stdout);
        sleep(1);
        aux --;
    }
    printf("\n");

    aux = (fm / 10.0) * (int) 80;
    printf("F procurando M:");
    printf("\n");
    while(aux > 0){
        printf("#");
        fflush(stdout);
        sleep(1);
        aux --;
    }
    printf("\n");

    aux = (ff / 10.0) * (int) 80;
    printf("F procurando F:");
    printf("\n");
    while(aux > 0){
        printf("#");
        fflush(stdout);
        sleep(1);
        aux --;
    }
    printf("\n");

    aux = (mm / 10.0) * (int) 80;
    printf("M procurando M:");
    printf("\n");
    while(aux > 0){
        printf("#");
        fflush(stdout);
        sleep(1);
        aux --;
    }
    printf("\n");

    return 0;
}