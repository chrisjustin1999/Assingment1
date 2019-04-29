//Rotation Cipher Encyrption of a message

#include <stdio.h>

int main () {
    //' 'input[''] determines the amount of memory (bits) allocated to your char input or the words that you type in to be encrypted
    
    char input[100]; //variable type character - user input message with 100 bits of allocated memory 
    char enc[100]; //variable type character - encoded message with 100 bits of allocated memory
    int temp; //variable type integer - for temp
    int key; //variable type integer - for key
   
   
    printf("Input rotation amount: "); //the console prints "Input rotation amount: "
    scanf("%d", &key); //the console reads the user input number and stores it as an integer under the variable 'key'
    
    printf("Input a message: "); //the console prints "Input a message: "
    scanf(" %[^\n]s", input); //the console reads the input message and stores it as a string under the character variable 'input'
    printf("Message text: %s\n", input); // the console prints the user input message text
    
    
    //'for' function - with the base value of 'i' which is the ascii code value of the characters the user inputs = 0, 
    //...classies input [i] not equalling the null factor, and i++ = the ascii code of the character + 1
    for (int i=0; input[i]!='\0'; i++) {
        //'if' function - classifying for the ascii values of the character for upper case letters, lowercase letters and for spaces
        if ((65<input[i]<90) || (97<input[i]<122) || (input[i]=32)) {
            //'if' function for Uppercase letters
            if (input[i]>=65 && input[i]<=90) {
                temp = input[i]; //the variable temp = input [i] = user message
                temp = temp - 65; //each character is subtracted by 65
                temp = temp + key; //each character is the added by the key
                temp = temp%26; //the modulues of the temp with 26 (amount of letters in the alphabet) is found
                temp = temp + 65;//the temp is then added by 65 again
                enc[i] = temp;//temp now becomes the encrypted message
                //'else if' function for Lowercase letters
            }  else if (input[i]>=97 && input[i]<=122) {
                temp = input[i]; 
                temp = temp - 97;
                temp = temp + key;
                temp = temp%26;
                temp = temp + 65;
                enc[i] = temp;
                // 'else' fucntion if the criteria does not match the ones for the 'if' function
            } else {
                enc[i] = input[i];
            }
        }
        // 'else' fucntion if the criteria does not match the ones for the 'for' function
        else
        {
            enc[i] = input[i];
        }
    }
    printf("Cipher text: %s\n", enc); //prints the Encrypted message to the console
}