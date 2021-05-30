// Method 1 ---------------- (Without using strupr)------------------------
#include <stdio.h>
void upper_string(char []);

int main()
{
   char string[100];
   
   printf("Enter a string to convert it into upper case\n");
   gets(string);
   
   upper_string(string);
   
   printf("The string in upper case: %s\n", string);
     
   return 0;
}

void upper_string(char s[]) {
   int c = 0;
   
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;                  //to convert into lower case use s[c] = s[c]+32
      }
      c++;
   }
}



// Method 2 - Using strupr -----------------------------------------------
#include <stdio.h>
#include <string.h>
int main()
{
   char string[1000];
   
   printf("Input a string to convert to upper case\n");
   gets(string);
   
   printf("The string in upper case: %s\n", strupr(string)); // to convert into lowercase use strlwr
   
   return  0;
}
