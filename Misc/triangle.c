//covered in functions of week 2 shorts
//how to code a function that will check if it's a valid triangle

#include <stdio.h>
#include <stdbool.h>

bool valid_triangle (float x, float y, float z)
{
  if (x <= 0 || y <= 0 || z <= 0){
    return false;
  }
  if (x + y <= z || x + z <= y || y + z <= x)
  {
    return false;
  }

  return true;
}