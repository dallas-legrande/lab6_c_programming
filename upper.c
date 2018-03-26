#include <string.h>
#include <stdio.h>
#include "lab6.h"

/* Author: Dallas LeGrande
 * CSCI112 lab6 method
 * March 20, 2018
 *
 * This implements the check for upper case letters method by checking each character against the range of ascii upper case characters
 */

void upper(char *str)
{
    int i;
    int counter = 0;// initializes the counter to count the upper case letters
    for(i = 0; i < strlen(str); i++)// goes through the lengh of the string checking each character
        {
            if(str[i] >= 65 && str[i] <= 90)// if the character is in this range in the ascii code then it is an uppercase letter
                {
                    counter++;// increase the counter everytime an uppercase letter is found
                }
        }// end of for loop
    printf("It has <%d> uppercase letters.\n", counter);
}
