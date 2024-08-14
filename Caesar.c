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
            /* ('A' = 0, 'B' = 1, etc) by subtracting 65(the ASCII value of 'A')
               The cipher is then applied, and the result is converted back to a character by adding 65.
            */
            printf("%c", (plaintext[i] - 'A' + cipher) % 26 + 'A');
        }
        else if(islower(plaintext[i])){
            /* ('a' = 0, 'b' = 1, etc) by subtracts 97 (the ASCII value of 'a'), applies the cipher, 
               and adds 97 to convert back to a character.
            */
            printf("%c", (plaintext[i] - 'a' + cipher) % 26 + 'a');
        }
        else{
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

    return 0;

}