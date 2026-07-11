#include <stdio.h>

int main()
{
  int age = 25;
  float weight = 65.5f;
  double pi = 3.1415926535;
  char grade = 'A';

  // %d is for integers
  printf("I am %d years old.\n", age);

  // %f is for floats (%.2f rounds to 2 decimal places)
  printf("My weight is %.2f kg.\n", weight);

  // %lf is for doubles (long float)
  printf("Pi is approximately %lf.\n", pi);

  // %c is for characters
  printf("I got a %c in math.\n", grade);

  return 0;
}