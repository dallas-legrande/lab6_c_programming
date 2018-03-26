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
        printf("\n");
}

void test2(char *word)
{
        strnum(word);
        printf("\n");
}

int main(int argc, char** argv)
{
        printf("\n"); //prints a blank line to differentiate where the program starts from the line commands
        char str1[100]; //variable to hold the string being read in
        char str2[100];
        char copy1[100]; //place to copy the read in string so that it can be manipulated
        char copy2[100]; //place to copy the read in string so that it can be manipulated
        char* word;
        char* num;
        char c;

        fgets(str1,50, stdin);
        scanf("%[^\n]s",&str2); //%[^\n]s reads the line until it hits an \n
        strcpy(copy1, str1); //copies the read in string to another variable
        strcpy(copy2, str2); //copies the read in string to another variable
        word = strtok(copy1, " "); //separates the string into words every time there is a space
        test(word); //Tests the first word in the string
        while(word != NULL) //continues going through the string making tokens until the word equals NULL
            {
                word = strtok(NULL, " "); //tokens the string. Since the string being tokened is NULL is continues on from the original string passed in finding each successive word
                if(word != NULL) //once the token gets to the end it will set word to NULL. Do not want NULL to be tested so if statement added
                {
                    test(word); //tests each word as it is tokenized
                }//end of if
            }//end of while
        num = strtok(copy2, " ");
        test2(num);
        while(num != NULL) //continues going through the string making tokens until the word equals NULL
            {
                num = strtok(NULL, " "); //tokens the string. Since the string being tokened is NULL is continues on from the original string passed in finding each successive word
                if(num != NULL) //once the token gets to the end it will set word to NULL. Do not want NULL to be tested so if statement added
                {
                    test2(num); //tests each word as it is tokenized
                }//end of if
            }//end of while
        return (0);
}
         
