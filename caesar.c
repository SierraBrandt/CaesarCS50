#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    //checks to see if there is only one command line input
    if (argc == 2)
    {
        //checks to see if there is any letters in the command line input
        for (int j = 0, n= strlen(argv[1]); j< n; j++)
        {
           if ((isdigit(argv[1][j]) == 0) || (isalpha(argv[1][j]) != 0))
           {
               //if there are any letters, gives out usage statment and ends the program
               printf("Usage: ./caesar key\n");
               return 1;
           }
        }
        //converts command input into and int (user's key)
        int key = atoi(argv[1]);
        string s = get_string("plaintext: ");
             for (int i = 0, n = strlen(s); i < n; i++)
            {
                char c[n];
               // if (isalpha(s[i])==0)
               // {
                    if (isupper(s[i]) == 0)
                    {
                        c[i] = (s[i] + key) % 26;
                        printf("%c", c[i]);
                    }
                    else if(islower(s[i])==0)
                    {
                        c[i] = (s[i] + key) % 26;
                        printf("%c", (c[i]));
                    }
                //}
                //else
                //{
                 //   printf("%c", s[i]);
                //}

            }
        printf("\n");

    }
    //prints out if there is not a single command line input
    else
    {
        printf("Usage: ./caesar key\n");
    }



}