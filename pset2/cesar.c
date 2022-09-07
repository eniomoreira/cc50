#include <cc50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{

    /*char a = 'A';
    int i = (int) a + 1;
    char b = (char) i;
    printf("%c", b);*/


    if(argc != 2 || isdigit(*argv[1]) == 0)
    {
        printf("Voce nao passou parametros na linha de comando ou seu paramentro foi invalido\n");
        return 1;
    }
    
    printf("Digite a frase que voce deseja que seja criptografada:\n");
    string ncrypto = GetString(); // string nao criptografada
    int k = atoi(argv[argc - 1]);
    //printf("%d\n", k);
    //printf("%d\n",strlen(ncrypto));

    for (int i = 0; i < strlen(ncrypto); i++) 
    {
        if( ncrypto[i] >= 'A' && ncrypto[i] <= 'Z')
        {
            printf("%c", (((ncrypto[i] - 'A') + k) % 26) + 'A');

        }else if (ncrypto[i] >= 'a' && ncrypto[i] <= 'z')
        {
            printf("%c", (((ncrypto[i] - 'a') + k) % 26) + 'a');
        }else
        {
            printf("%c", ncrypto[i]);
        }
        
    }
    printf("\n");

    return 0;
}