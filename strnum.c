#include <string.h>
#include <stdio.h>
#include "lab6.h"

/* Author: Dallas LeGrande
 * CSCI112 lab6 method
 * March 20, 2018
 *
 * This implements the check to see if the string is a number or not method
 */

void strnum(char *str)
{
	typedef enum{false, true} bool;
	bool match = 0;
	int i;
	// if the first spot in the string is a number or a point according to the ascii table then check the rest of the string to make sure all the characters are numbers
	if(str[0] <= 57 && str[0] >= 48 || str[0] == 46) 
	    {
	       	match = 1; 
		for(i = 1; i < strlen(str); i++)// check all the characters in the string to see if they are numbers or the point
		    {
	    		if(str[i] > 57 || str[i] < 48 && str[i] != 46)//if the number is less than 48 and is not 46 which is the period then it is not a number
	    		    {
				match = 0;
			    }// end of inner if statement
		    }//end of for loop
	    }//end of outer if statement
	if(match == 1)
	    {
		printf("String %s is a number.\n", str); //print that it is a number
		int_or_double(str);
	    }
	else{
		printf("String %s is not a number.\n", str); //print that it is not a number
	    }
}
