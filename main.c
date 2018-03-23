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

int main(int argc, char** argv)
{
	int j;
	int counter = 0, i = 0, word_count = 0;
	char a, c;
	char temp_array [1000];
	char str[100];
	char *token = strtok(str, " ");
	char *word = "100.001";
	int length = strlen(word);

	palin(word);
	printf("The first character is %c\n", word[0]);
	printf("It is of length %d\n", length);
	upper(word);
	lower(word);
	strnum(word);

/*	while(token != NULL)
	    {
		strncat(str,token, 20);
		/*for(j = 0; j < sizeof(str); j++)
		{		
			temp_array[j] = 
		}
		i++;
		token = strtok(str, " ");
		*/
		//scanf("%c", &c);
		//temp_array[i] = c;
		//counter++;
		//i++;
		//printf("This is what is in c %c\n", c);
		//if(c == ' ')
		//{
		//	printf("C is now this %c\n", c);
		//}
	//	printf("This is what is in str %s\n", str);
	
	    //}
	return (0);
}
