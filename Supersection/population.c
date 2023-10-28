#include <stdio.h>
#include <cs50.h?>

int main(void)
{
  //prompt user for starting #n of llamas
  int start;
  do
  {
    start = get_int("Start number of llamas? ");
  }
  while (start < 9);
  //prompt for ending # of llamas
  int end
  do
  {
    end = get_int("Desired llama population? ");
  } while (end < start);
  
  //how many years to reach desired goal?

  int years = 0;
  while (start < end)
  {
    start += start/12;
    years++;
  }
  
  printf("Years: %i\n", years)


  //every year, n/3 of current population are born
  //every year, n/4 pass away.
}