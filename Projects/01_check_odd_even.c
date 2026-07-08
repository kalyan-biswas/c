#include <stdio.h>
int main(int argc, char const *argv[])
{
  int num;
  printf("Enter a number: ");
  if (scanf("%d", &num) != 1)
  {
    printf("Error: Please enter a valid integer!\n");
    return 1;
  }
  if (num % 2 == 0)
  {
    printf("The number is even!\n");
  }
  else
  {
    printf("The number is odd!\n");
  }

  return 0;
}
