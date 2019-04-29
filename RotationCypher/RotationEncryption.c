//Rotation Cipher Encyrption of a message

// #################### ADD USER INPUT FOR ROTATION KEY FUNCTIONALITY ######################

#include <stdio.h>

int main () {
    //input[''] determines the amount of memory (bits) allocated to your char input or the words that you type in to be encrypted
    char input[100]; 
    char enc[100];
    int temp;
    int key;
   
   
    printf("Input rotation amount: ");
    scanf("%d", &key);
    
    printf("Input a message: ");
    scanf(" %[^\n]s", input); 
    printf("Message text: %s\n", input);
    
    
    for (int i=0; input[i]!='\0'; i++) {
        if ((65<input[i]<90) || (97<input[i]<122) || (input[i]=32)) {
            if (input[i]>=65 && input[i]<=90) {
                temp = input[i]; 
                temp = temp - 65;
                temp = temp + key;
                temp = temp%26;
                temp = temp + 65;
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
    printf("Cipher text: %s\n", enc); 
}