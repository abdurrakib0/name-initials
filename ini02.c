//                      abdur rakib - AR

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    printf("argument counter = %i and name to be ini = %s\n", argc, argv[1]);
    if(argv[1] != NULL) {
        // Test the first letter if it is a space or not
        if(argv[1][0] != ' ' && isalpha(argv[1][0])){
            printf("%c", toupper(argv[1][0]));
        }
        // Loop through the rest of the name and check if there are spaces
        for(int i = 0, j = strlen(argv[1]); i<j; i++){
            if(isspace(argv[1][i]) && isalpha(argv[1][i+1])){
                printf("%c", toupper(argv[1][i+1]));
            }
        }
        printf("\n");
    }
    else printf("try again");
}