#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string name = get_string('What is your name? ');
  int age = get_int('What is your age? ');
  string number = get_string("What's your phone number? ");

  printf("Age is %i. Name is %s. Phone number is %s", age, name, number);
}

//can get number as a string instead of as a number
//tend not to perform any operations to a phone number, don't need to keep it as a number
//can add in parentheses for area codes, or even country codes.
//can keep leading 0s, a long number would remove leading zeros.