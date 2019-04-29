#include <stdio.h>

int main()
{
    //input[''] determines the amount of memory (bits) allocated to your char input or the words that you type in to be encrypted
    char input[100]; 
    char enc[100];
    int temp;
   
    // Open terminal and type in ./a.out to type in your code, the "[^\n]" allows the '%s' to detect the spaces between   
    // ...each block of text e.g. it detects spaces between each word in a sentence
    printf("Input a message: ");
    scanf(" %[^\n]s", input); 
    printf("Message text: %s\n", input);
    
    for(int i = 0; input[i] != '\0'; i++) {
        switch(input[i]) {
            case 'a':   enc[i] = 'Z';
                        break;
            case 'b':   enc[i] = 'Y';
                        break;
            case 'c':   enc[i] = 'X';
                        break;
            case 'd':   enc[i] = 'W';
                        break;
            case 'e':   enc[i] = 'V';
                        break;
            case 'f':   enc[i] = 'U';
                        break;
            case 'g':   enc[i] = 'T';
                        break;
            case 'h':   enc[i] = 'S';
                        break;
            case 'i':   enc[i] = 'R';
                        break;
            case 'j':   enc[i] = 'Q';
                        break;
            case 'k':   enc[i] = 'P';
                        break;
            case 'l':   enc[i] = 'O';
                        break;
            case 'm':   enc[i] = 'N';
                        break;
            case 'n':   enc[i] = 'M';
                        break;                      
            case 'o':   enc[i] = 'L';
                        break;
            case 'p':   enc[i] = 'K';
                        break;
            case 'q':   enc[i] = 'J';
                        break;
            case 'r':   enc[i] = 'I';
                        break;
            case 's':   enc[i] = 'H';
                        break;
            case 't':   enc[i] = 'G';
                        break;
            case 'u':   enc[i] = 'F';
                        break;
            case 'v':   enc[i] = 'E';
                        break;
            case 'w':   enc[i] = 'D';
                        break;
            case 'x':   enc[i] = 'C';
                        break;
            case 'y':   enc[i] = 'B';
                        break;
            case 'z':   enc[i] = 'A';
                        break;
            case 'A':   enc[i] = 'o';
                        break;
            case 'B':   enc[i] = 'Z';
                        break;
            case 'C':   enc[i] = 'Y';
                        break;
            case 'D':   enc[i] = 'X';
                        break;
            case 'E':   enc[i] = 'W';
                        break;
            case 'F':   enc[i] = 'V';
                        break;
            case 'G':   enc[i] = 'U';
                        break;
            case 'H':   enc[i] = 'T';
                        break;
            case 'I':   enc[i] = 'S';
                        break;
            case 'J':   enc[i] = 'R';
                        break;
            case 'K':   enc[i] = 'Q';
                        break;
            case 'L':   enc[i] = 'P';
                        break;
            case 'M':   enc[i] = 'O';
                        break;
            case 'N':   enc[i] = 'N';
                        break;
            case 'O':   enc[i] = 'M';
                        break;
            case 'P':   enc[i] = 'L';
                        break;
            case 'Q':   enc[i] = 'K';
                        break;
            case 'R':   enc[i] = 'J';
                        break;
            case 'S':   enc[i] = 'I';
                        break;
            case 'S':   enc[i] = 'H';
                        break;
            case 'T':   enc[i] = 'G';
                        break;
            case 'U':   enc[i] = 'F';
                        break;
            case 'V':   enc[i] = 'E';
                        break;
            case 'W':   enc[i] = 'D';
                        break;
            case 'X':   enc[i] = 'C';
                        break;
            case 'Y':   enc[i] = 'B';
                        break;
            case 'Z':   enc[i] = 'A';
                        break;
            


                        
            //FINISH 
            default:    printf("Choice other than 1, 2 and 3"); 
                        break;
        }
    }
    printf("Encrypted message: %s\n", enc);

}