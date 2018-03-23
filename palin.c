#include <string.h>
#include <stdio.h>
#include "lab6.h"


/* Author: Dallas LeGrande
 * CSCI112 lab6 method
 * March 20, 2018
 *
 * This implements the check if the string is a palindrome method
 * the method checks the first character against the last and moves toward the middle of the word incrementing the front character checked
 * and decrementing the last character checked
 */

void palin(char *str) //takes a string as an argumen and compares the letters to see if the string is a palindrome
{
	typedef enum {false,true} bool;
	bool match = false;
	int i = 0;
	int length = strlen(str)-1; //gives the length of the string minus the space at the end
	if(str[i] == str[length-i])// if the first and the last letter match then check the next ones
	    {	
		i++;
		while(str[i] == str[length-i]) // while the next character and the next to last character checked match, then keep comparing the characters
		    {
			// if you make it to the character in the middle coming from both sides or the index counting from the end
			// is becomes smaller than the index counting from the beginning, then you have a palindrome
			if(i == (length-i) || length-i > i)
			    {	
				match = true; //set match to true because you found a palindrome
			    }			
			i++;
		    }// end of while loop
		if(match == 1)// if match it true
		{
		    printf("String %s is a palindrome.\n", str); // prints when the string is a palindrome
		}
		else{
		    printf("String %s is not a palindrome.\n", str); // prints when the string is not a palindrome
		}
	    }// end of if statement
	else //if the first and last letters don't match then you alread know it's not a palindrome and no further checking is needed
	    {
		printf("String %s is not a palindrome.\n", str); // prints when the string is not a palindrome
   	    }
}
