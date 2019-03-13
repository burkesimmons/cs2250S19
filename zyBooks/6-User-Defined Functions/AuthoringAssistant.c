#include<stdio.h>
#include <string.h>
#include <ctype.h>

int GetNumOfNonWSCharacters(const char usrStr[]);
int GetNumOfWords(const char usrStr[]);
void ReplaceExclamation(char usrStr[]);
void FixCapitalization(char usrStr[]);
void ShortenSpace(char usrStr[]);
char DisplayMenu();


int main(void) {

   char phrase[500];

   printf("Enter a sample text:\n");
   fgets(phrase, 500, stdin);
   phrase[strlen(phrase) - 1] = '\0';

   printf("\nYou entered: %s\n", phrase);

   char menuOp = '-';

   //Menu
   do {
       menuOp = DisplayMenu();
       if (menuOp == 'c')
        {
            printf("Number of non-whitespace characters: %d\n", GetNumOfNonWSCharacters(phrase));
        }
        // 
        else if (menuOp == 'w')
        {
            printf("Number of words: %d\n", GetNumOfWords(phrase));
        }
        // 
        else if (menuOp == 'f')
        {
            FixCapitalization(phrase);
            printf("Edited text: %s\n", phrase);
        }
        // 
        else if (menuOp == 'r')
        {
            ReplaceExclamation(phrase);
            printf("Edited text: %s\n", phrase);
        }
        else if (menuOp == 's')
        {
            ShortenSpace(phrase);
            printf("Edited text: %s\n", phrase);
        }
        } while(menuOp != 'q');




   return 0;
}

void ShortenSpace(char usrStr[]) {
   int i, x;
  for(i=x=0; usrStr[i]; ++i)
    if(!isspace(usrStr[i]) || (i > 0 && !isspace(usrStr[i-1])))
      usrStr[x++] = usrStr[i];
  usrStr[x] = '\0';

}

void FixCapitalization(char usrStr[]) {
    int i;
    if(islower(usrStr[0])) {
        usrStr[0] = toupper(usrStr[0]);
    }
    for(i = 0; i < strlen(usrStr); i++) {
        
        while(usrStr[i - 1] == ' ' && islower(usrStr[i]) && usrStr[i-2] != ',' 
                && usrStr[i-3] != ',' && usrStr[i-2] != ';' && usrStr[i-3] != ';' 
            && (usrStr[i-2] == ' ' || usrStr[i-2] == '.' || usrStr[i-2] == '!' 
                || usrStr[i-2] == '?')) {
            usrStr[i] = toupper(usrStr[i]);
        }
    }
}

void ReplaceExclamation(char usrStr[]) {
    int i;
    for(i = 0; i < strlen(usrStr); i++) {
        if(usrStr[i] == '!') {
            usrStr[i] = '.';
        }
    }
}

int GetNumOfWords(const char usrStr[]) {
    int length = 0;
    int i;
    //char check = '-';
    for(i = 0; i < strlen(usrStr); i++) {
       
        if(usrStr[i] == ' ' && usrStr[i-1] != ' ')
        {
            length = length + 1;
            //check = usrStr[i];
        }
    }
    return length + 1;
}

int GetNumOfNonWSCharacters(const char usrStr[]) {
        int length = 0;
    int i;
   for(i = 0; i < strlen(usrStr); i++)
   {
      
    if(usrStr[i] != ' ')
    {
        length = length + 1;
    }
   }
   
    return length;
}

char DisplayMenu()
{
    char input;
    printf("\nMENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n");

    printf("\nChoose an option:\n");
    scanf(" %c", &input);

    return input;
}
