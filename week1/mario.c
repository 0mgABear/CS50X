#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
  int n;
  do
  {
    n = get_int("Size: ");
  }
  while (n < 1);
  for(int i = 0; i < n; i++)
  {
    for(int j=0; j<n; j++)
    {
      printf('#')/
    }
    print("\n")
  }
}

int alt_main(void)
{
  //get size of grid
  int n = get_size();
  //print grid of bricks
  print_grid(n);
}

int get_size(void)
{
  int n;
  do
  {
    n = get_int("Size:");
  } while ({
    (n < 1)
  });
  return n;
}

void print_grid(int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      printf('#');
    }
    printf('\n');
  }
}