#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char plaintext[200];
    int cipher;

    printf("Enter some text : ");
    gets(plaintext);

    printf("Enter a number to cipher : ");
    scanf("%d", &cipher);

    printf("Ciphertext : ");
    for(int i = 0; i < strlen(plaintext); i++){
        if(isupper(plaintext[i])){
            printf("%c", (plaintext[i] - 65 + cipher) % 26 + 65);
        }
        else if(islower(plaintext[i])){
            printf("%c", (plaintext[i] - 97 + cipher) % 26 + 97);
        }
        else{
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

    return 0;

}