#include <cc50.h>
#include <stdio.h>
#include <string.h>

int
main(void){
    char *gf = "garrafa";
    char *gfs = "garrafas";
    char *nhm = "nenhuma";

    printf("\n");
    for (int i = 10; i >= 1; i--)
    {
        if(i > 1 && (i - 1) > 1)
        {
            printf("%d %s de cerveja no muro, bebo uma, jogo no lixo, %d %s no muro...\n",i,gfs,(i-1),gfs);
        }else if(i > 1 && (i - 1) == 1)
        {
            printf("%d %s de cerveja no muro, bebo uma, jogo no lixo, %d %s no muro...\n",i,gfs,(i-1),gf);
        }else
        {
            printf("%d %s de cerveja no muro, bebo uma, jogo no lixo, %s %s no muro...\n",i,gf,nhm,gf);
        }
    }

    return 0;
}