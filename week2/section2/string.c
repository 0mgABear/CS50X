#include <cs50.h>
#include <stdio.h>
#include <string.h> //provides functionality for strlen

int main(void)
{
  string name = "Emma";
  int length = strlen(name);
  for (int i = 0; i < length; i++)
  {
    printf('%c', name[i]);

    print("%i", name[i]); //this line will show the ASCI numbers

  }
  printf("\n");
}