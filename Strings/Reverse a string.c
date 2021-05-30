// Method 1 ----------------- By using New Character Array ---------------------------
# include <stdio.h>

int main ()
{
    char A[] = "Python"; 
    char B[7]; 
    int i, j; 
    for (i=0; A[i]!= '\0';i++)
    {
        
    }
    i = i - 1 ; 
    for (j = 0; i>=0; i--, j++)
    {
        B[j]=A[i]; 
    }
    B[j] = '\0'; 
    printf("%s",B);
}

// Method 2 -------------------- By swapping the characters of Array --------------------

#include <stdio.h>
#include <string.h>
void reverseStr(char str[])
{
  int n = strlen(str);

  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}

int main()
{
  char str[1000];
  scanf("%s", str);
  printf("\nString Before Reverse: %s", str);
  reverseStr(str);
  printf("\nString After Reverse: %s", str);
  return 0;
}
