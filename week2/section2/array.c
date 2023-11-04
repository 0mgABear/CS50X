//section / tutorial proposed problem

/*create a program which prompts the user for a size, n.

Dynamically create an array of that size where each element is 2 times the previous one.
Array starts at 1.
Print the array, integer by integer.*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int size;
  do
  {
    size = get_int("Array size: ");
  } while (size < 1);

  int power[size];
  power[0] = 1;
  printf('%i\n', power[0]);

  for(let i = 1; i < size ; i ++)
  {
    power[i] = 2 * power[i -1];
    printf('$i\n', power[i]);
  }
  
}