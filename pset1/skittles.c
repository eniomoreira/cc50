#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    // seed de PRNG (Pseudo Random Number Generator);
    srand(time(NULL));
    
    // escolhe numero pseudo aleatorio entre [0,1023];
    int skittles = rand() % 1024;
    printf("Ola, eu sou uma maquina de balas falante! Advinhe quantos Skitlles tem dentro de mim. Dica: Estou pensando em um numero entre 0 e 1023. Qual e ele?\n");
    //printf("numero de skittles: %d\n", skittles);
    // aposta do jogador
    int possNum;
    do{
        possNum = GetInt();
        if(possNum < 0 ||possNum > 1023){
            printf("Nao tente quebrar o joguinho... tente novamente\n");
        }else if(possNum < skittles){
            printf("Haha! tenho muito mais Skittles do que isso. Tente novamente.\n");
        }else if (possNum > skittles){
            printf("Ok! Eles nao sao tantos assim. Tente novamente.\n");
        }
    }while (possNum != skittles);
    printf("Voce esta certo!!! Boa garoto(a)\n");
    return 0;
}