//Rotation Cipher Encyrption of a message
#include <stdio.h>

int main () {
   char input[100]; //input[''] determines the amount of memory (bits) allocated to your char input or the words that you type in to be encrypted
   scanf("%s", input); //open terminal and type in ./a.out to type in your code
   int string_length = 3; //the amount of letters that the console will read and encrypt from your chosen word/sentence
   int key = 5; //the amount of 
   for (int i = 0; i < string_length; i++) {
       printf("Input: %d %c\t\t", input[i], input[i]); //prints the input at line 5 in ASCII 
       //...and print the letter next to it (thus why there is the 2 "input[i]'s")
       input[i] += key;
       printf("Encrypt: %d %c\n", input[i], input[i]); //prints the input which has been shifted an amount dictated by the key 
       //...and prints which letter it has been shifted to next to it (thus why there is the 2 "input[i]'s")
   }
}