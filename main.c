#include <stdio.h>
#include <string.h>
#include "lab6.h"

/* Author: Dallas LeGrande
 * csci112 lab6
 * Date: March 20, 2018
 * This program will read a string from a file and answer questions about the string
 * The questions to be answered for line one are: is the string a palindrome, what is the first character of the string, what is the length of the string,
 * how many uppercase letters, how many lowercase letters.
 * The questions to be answered for line two are: is this a string a number; if yes is it an integer or a real number
 */

void test(char *word)
{
        int length = strlen(word);
        palin(word);
        printf("The first character is %c\n", word[0]);
        printf("It is of length %d\n", length);
        upper(word);
        lower(word);
        strnum(word);
        printf("\n");
}

int main(int argc, char** argv)
{
        printf("\n"); //prints a blank line to differentiate where the program starts from the line commands
        char str[100]; //variable to hold the string being read in
        char copy[100]; //place to copy the read in string so that it can be manipulated
        char* word;

        scanf("%[^\n]s",&str); //%[^\n]s reads the line until it hits an \n
        //printf("This is the string that is read in %s\n", str);
        strcpy(copy, str); //copies the read in string to another variable
        //printf("This is copy %s\n", copy);
        word = strtok(copy, " "); //separates the string into words every time there is a space
        test(word); //Tests the first word in the string

//      printf("This is the first word %s\n", word);
        while(word != NULL) //continues going through the string until the word equals  NULL
            {
                word = strtok(NULL, " "); //tokens the string. Since the string being tokened is NULL is continues on from the original string passed in finding each successive word
                if(word != NULL){ //once the token gets to the end it will set word to NULL. Do not want NULL to be tested so if statement added
                    test(word); //tests each word as it is tokenized
                }//end of if
            }//end of while
        return (0);
}
