#include <stdio.h>
#include <ctype.h>

int main()
{
  float temp;
  char unit;

  printf("Enter temperature in format (e.g., 50c or 122f): ");
  // Takes the float value and the immediately following character
  if (scanf("%f%c", &temp, &unit) == 2)
  {
    // Convert to uppercase to handle both 'c' and 'C'
    unit = toupper(unit);

    if (unit == 'C')
    {
      float fahrenheit = (temp * 9.0 / 5.0) + 32.0;
      printf("You entered %.2f Celsius, which is %.2f Fahrenheit.\n", temp, fahrenheit);
    }
    else if (unit == 'F')
    {
      float celsius = (temp - 32.0) * 5.0 / 9.0;
      printf("You entered %.2f Fahrenheit, which is %.2f Celsius.\n", temp, celsius);
    }
    else
    {
      printf("Error: Invalid unit '%c'. Please use 'C' or 'F'.\n", unit);
    }
  }
  else
  {
    printf("Error: Invalid input format.\n");
  }

  return 0;
}
