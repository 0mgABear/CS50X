//covered during lecture

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


//a function to convert everything to uppercase.
int main(void)
{
  string s = get_string("Before: ");
  printf("After: ");
  for (int i = 0; i < strlen(s); i++)
  {
    if (s[i] >= "a" && s[i] <= "z")
    {
      printf('%c', s[i] - 32);
    }
    else{
      print("%c", s[i]);
    }
  }
}

//version 2 using <ctype.h>
int main(void)
{
  string s = get_string("Before: ");
  printf("After: ");
  for (int i = 0; i < strlen(s); i++)
  {
    if (islower(s[i]))
    {
      printf('%c', toupper(s[i]));
    }
    else{
      print("%c", s[i]);
    }
  }
}