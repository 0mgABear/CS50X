//check if a string is alphabetical in order
//check if lowercase string's characters are in alphabetical order
//If yes, print yes, if not print no.
//asciichart.com


#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string word = get_string("Word: ");
  int length = strlen(word);
  for (int i = 0; i < length - 1 ; i++)
  {
    if (word[i] > word[i+1])
    {
      printf('No\n');
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}