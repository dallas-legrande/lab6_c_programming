#include <string.h>
#include <stdio.h>
#include "lab6.h"

/* Author: Dallas LeGrande
 * CSCI112 lab6 method
 * March 20, 2018
 *
 * This implements the check for lower case letters method by checking each character against the range of ascii lower case characters
 */

void lower(char *str)
{
    int i;
    int counter = 0;// initializes the counter to count the lower case letters
    for(i = 0; i < strlen(str); i++)// goes through the lengh of the string checking each character
        {
            if(str[i] >= 97 && str[i] <= 122)// if the character is in this range in the ascii code then it is a lowercase letter
                {
                    counter++;// increase the counter everytime a lowercase letter is found
                }
        }// end of for loop
    printf("It has <%d> lowercase letters.\n", counter);
}
