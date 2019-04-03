//Rotation Cipher Encyrption of a message
#include <stdio.h>

int main () {
   char input[] = "hai"; // input to be shifted by the key number and printed byt the printf function
   int string_length = 3;
   int key = 5;
   for (int i = 0; i < string_length; i++) {
       printf("Input: %d %c\t\t", input[i], input[i]); //prints the input at line 5 in ASCII 
       //...and print the letter next to it (thus why there is the 2 "input[i]'s")
       input[i] += key;
       printf("Encrypt: %d %c\n", input[i], input[i]); //prints the input which has been shifted an amount dictated by the key 
       //...and prints which letter it has been shifted to next to it (thus why there is the 2 "input[i]'s")
   }
}