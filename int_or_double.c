#include <string.h>
#include <stdio.h>
#include "lab6.h"

/* Author: Dallas LeGrande
 * CSCI112 lab6 method
 * March 20, 2018
 *
 * This implements the check if it is an  integer or double method
 * receives the string from the strnum method only when the string is a number
 * this method is only called when the string being checked in the strnum method is a number
 */

void int_or_double(char *str)
{
	typedef enum {false, true} bool;
	bool is_integer = true;
	int i;
	for(i = 0; i < strlen(str); i++) //go through each character in the string looking for a period and the period is not the last character
	    {
		if(str[i] == 46 && i != strlen(str)-1)// if there is a period and it is not the last character then it is not an integer
		    {
			is_integer = false;
		    }
	    }
	if(is_integer){	//if it's an integer print this 
	    printf("String %s is an integer.\n", str);
	    printf("\n");
	}
	else{// otherwise it is a real number so print this
	    printf("String %s is a real number.\n", str);
	    printf("\n");
	}
}

