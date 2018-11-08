#include <stdio.h>
int main(void)
{
  /* This program will be taking Fahrenheit as the input, putting that variable
  through the equation to get Celcius, then outputting the result as a double.*/

  double Fah = 0.0;
  double Cel = 0.0;

    printf("Enter the temperature in degrees Fahrenheit. \n");
    scanf("%lf", &Fah);

    Cel = (5.0/9.0) * (Fah-32);

    printf("%lf \n", Cel);

  return 0;
}

