#include <cs50.h>
#include <stdio.h>

const int N = 3;

//prototype / declaration
float average (int array[]);

int main(void)
{
  int scores[3];
  for (int i = 0; i < 3; i++)
  {
    scores[i] = get_int("Score: ");
    printf("Average: %f\n", average(scores))
  }
}

float average(int array[])
{
  int sum = 0;
  for (int = 0; i < N; i++)
  {
    sum += array[i]
  }
  return sum / (float) N;
}
