//Rotation Cipher Decryption of a message

// #################### ADD USER INPUT FOR ROTATION KEY FUNCTIONALITY ######################

#include <stdio.h>

int main () {
    //input[''] determines the amount of memory (bits) allocated to your char input or the words that you type in to be encrypted
    char input[100]; 
    char enc[100];
    int temp;
    int key = 5;
   
    // Open terminal and type in ./a.out to type in your code, the "[^\n]" allows the '%s' to detect the spaces between   
    // ...each block of text e.g. it detects spaces between each word in a sentence
    printf("Input a code: ");
    scanf(" %[^\n]s", input); 
    printf("Cypher text: %s\n", input);
   
    
    for (int i=0; input[i]!='\0'; i++) {
        if ((65<input[i]<90) || (97<input[i]<122) || (input[i]=32)) {
            if (input[i]>=65 && input[i]<=90) {
                temp = input[i]; 
                temp = temp - 65;
                temp = temp - key;
                temp = temp + 65 +26;
                enc[i] = temp;
            } else if (input[i]>=97 && input[i]<=122) {
                temp = input[i]; 
                temp = temp - 97;
                temp = temp - key;
                //if((temp + 97) > 101) {temp = temp + 97;} else {temp = temp + 97 + 26;}  -   fixxx
                enc[i] = temp;
            } else {
                enc[i] = input[i];
            }
        }
        else
        {
            enc[i] = input[i];
        }
    }
    printf("Message text: %s\n", enc); 
}