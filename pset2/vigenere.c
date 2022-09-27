#include <cc50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int
main(int argc, char* argv[])
{
    if(argc != 2 || isdigit(*argv[1]) != 0){
        printf("Voce nao passou parametros na linha de comando ou seu paramentro foi invalido\n");
        return 1;
    }

    string key = argv[1];
    printf("Digite a palavra que dejesa ser criptografada: \n");
    string ncrypto = GetString();
    int j = 0;
    int aux = 0;

    for (int i = 0; i < strlen(ncrypto); i++) 
    {
        if( ncrypto[i] >= 'A' && ncrypto[i] <= 'Z')
        {
            printf("%c",((ncrypto[i] + key[j]) % 26) + 'A');
            j = (aux + 1) % strlen(key);
            aux ++;

        }else if (ncrypto[i] >= 'a' && ncrypto[i] <= 'z')
        {
            printf("%c",((ncrypto[i] + key[j]) % 26) + 'a');
            j = (aux + 1) % strlen(key);
            aux ++;
        }else
        {
            printf("%c", ncrypto[i]);
        }
        
    }
    printf("\n");


    return 0;
}