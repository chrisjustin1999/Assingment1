//Rotation Cipher Encyrption of a message
#include <stdio.h>

int main () {
   char input[100]; //input[''] determines the amount of memory (bits) allocated to your char input or the words that you type in to be encrypted
   char enc[100];
   int temp;
   scanf(" %[^\n]s", input); //open terminal and type in ./a.out to type in your code, the "[^\n]" allows the '%s' to detect the spaces between
   //... each block of text e.g. it detects spaces between each word in a sentence
   printf("Message text: %s\n", input);
   //the amount of letters that the console will read and encrypt from your chosen word/sentence
   int key = 5; //the number difference in ASCII between the char or letter typed vs the encrypted number that is shown 
for (int i=0; input[i]!='\0'; i++) 
{
    
     //  printf("Message: %c\n", input[i]); //prints the input at line 5 in ASCII 
       //...and print the letter next to it (thus why there is the 2 "input[i]'s")
       if ((65<input[i]<90) || (97<input[i]<122))
       {
           if(input[i]>=65 && input[i]<=90)
           {
               temp = input[i]; 
               temp = temp - 65;
               temp = temp + key;
               temp = temp%26;
               temp = temp + 65;
               enc[i] = temp;
               
           }
            
       }
else
{
    enc[i] = input[i];
}       
     //  printf("Cypher Text: %c\n", input[i]); //prints the input which has been shifted an amount dictated by the key 
       //...and prints which letter it has been shifted to next to it (thus why there is the 2 "input[i]'s")
   }
   
   printf("Cipher text: %s\n", enc); 
}