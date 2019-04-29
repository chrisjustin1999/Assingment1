//Substitution Cipher Decryption of a message

#include <stdio.h>

int main()
{
    //input[''] determines the amount of memory (bits) allocated to your char input or the words that you type in to be encrypted
    char input[100]; 
    char enc[100];
    int temp;
   
    // Open terminal and type in ./a.out to type in your code, the "[^\n]" allows the '%s' to detect the spaces between   
    // ...each block of text e.g. it detects spaces between each word in a sentence
    printf("Input a cypher message: ");
    scanf(" %[^\n]s", input); 
    printf("Cypher text: %s\n", input);
    
    for(int i = 0; input[i] != '\0'; i++) {
        switch(input[i]) {
            case 'Z':   enc[i] = 'A';
                        break;
            case 'Y':   enc[i] = 'B';
                        break;
            case 'X':   enc[i] = 'C';
                        break;
            case 'W':   enc[i] = 'D';
                        break;
            case 'V':   enc[i] = 'E';
                        break;
            case 'U':   enc[i] = 'F';
                        break;
            case 'T':   enc[i] = 'G';
                        break;
            case 'S':   enc[i] = 'H';
                        break;
            case 'R':   enc[i] = 'I';
                        break;
            case 'Q':   enc[i] = 'J';
                        break;
            case 'P':   enc[i] = 'K';
                        break;
            case 'O':   enc[i] = 'L';
                        break;
            case 'N':   enc[i] = 'M';
                        break;
            case 'M':   enc[i] = 'N';
                        break;                      
            case 'L':   enc[i] = 'O';
                        break;
            case 'K':   enc[i] = 'P';
                        break;
            case 'J':   enc[i] = 'Q';
                        break;
            case 'I':   enc[i] = 'R';
                        break;
            case 'H':   enc[i] = 'S';
                        break;
            case 'G':   enc[i] = 'T';
                        break;
            case 'F':   enc[i] = 'U';
                        break;
            case 'E':   enc[i] = 'V';
                        break;
            case 'D':   enc[i] = 'W';
                        break;
            case 'C':   enc[i] = 'X';
                        break;
            case 'B':   enc[i] = 'Y';
                        break;
            case 'A':   enc[i] = 'Z';
                        break;
            case 'z':   enc[i] = 'A';
                        break;
            case 'y':   enc[i] = 'B';
                        break;
            case 'x':   enc[i] = 'C';
                        break;
            case 'w':   enc[i] = 'D';
                        break;
            case 'v':   enc[i] = 'E';
                        break;
            case 'u':   enc[i] = 'F';
                        break;
            case 't':   enc[i] = 'G';
                        break;
            case 's':   enc[i] = 'H';
                        break;
            case 'r':   enc[i] = 'I';
                        break;
            case 'q':   enc[i] = 'J';
                        break;
            case 'p':   enc[i] = 'K';
                        break;
            case 'o':   enc[i] = 'L';
                        break;
            case 'n':   enc[i] = 'M';
                        break;
            case 'm':   enc[i] = 'N';
                        break;                      
            case 'l':   enc[i] = 'O';
                        break;
            case 'k':   enc[i] = 'P';
                        break;
            case 'j':   enc[i] = 'Q';
                        break;
            case 'i':   enc[i] = 'R';
                        break;
            case 'h':   enc[i] = 'S';
                        break;
            case 'g':   enc[i] = 'T';
                        break;
            case 'f':   enc[i] = 'U';
                        break;
            case 'e':   enc[i] = 'V';
                        break;
            case 'd':   enc[i] = 'W';
                        break;
            case 'c':   enc[i] = 'X';
                        break;
            case 'b':   enc[i] = 'Y';
                        break;
            case 'a':   enc[i] = 'Z';
                        break;
            case ' ':   enc[i] = ' ';
                        break;
        }
    }
    printf("Correct Message: %s\n", enc);

}