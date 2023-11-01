//covered during lecture

#include <cs50.h>
#include <stdio.h>
#include <string.h>

//version 1 (without string.h)
int main(void)
{
  string name = get_string("What's your name? ");

  int n = 0;
  while (name[n] != "\0") //only strings have this null character, not arrays.
  {
    n++
  }
  printf("%i\n", n); //prints out the length of the string!
}

//version 2 (with string.h)
int main2(void)
{
  string name = get_string("What's your name? ");
  int n = strlen(name);
  printf("%i\n", n);
}