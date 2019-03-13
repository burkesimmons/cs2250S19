#include<stdio.h>
#include <string.h>

//Returns the number of characters in usrStr
int GetNumOfCharacters(const char usrStr[]) {
    int length = 0;
    int i;
   for(i = 0; i < strlen(usrStr); i++)
   {
    if(usrStr[i] == '\0')
    {
        return i;
    }
   }
   length = i;
    return length;
}

void OutputWithoutWhitespace(char usrStr[]) {
 int j;
    for( int i = 0; i < strlen(usrStr); i++) {
        while(usrStr[i] == ' ')
        {
            for(j = i; usrStr[j] != '\0'; j++)
            {
                usrStr[j] = usrStr[j+1];
            }
            usrStr[j] = '\0';
        }
    }
    printf("\nString with no whitespace: %s\n", usrStr);
}

int main(void) {

    char phrase[50];

   printf("Enter a sentence or phrase:\n");
   fgets(phrase, 50, stdin);
//   phrase[strlen(phrase) - 1] = '\0';

   printf("\nYou entered: %s\n", phrase);

   printf("\nNumber of characters: %d", GetNumOfCharacters(phrase));

   OutputWithoutWhitespace(phrase);
    

   /*
int i;
    for(i = 0; i < strlen(phrase); i++)
        {
            if(phrase[i] == '\0')
            {
                 return i;
            }
            printf("i is: %d\n", i);
        }
    printf("The length is: %d\n", i);


*/
   return 0;
}
