#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  fahr = lower;
  printf("Fahrenheit to Celsius:\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    /* fahr is formatted to display 0 decimals, celsius 1 decimal. */
    printf("%3.0f\t%6.1f\n", fahr, celsius); 
    fahr = fahr + step;
  }

  printf("Celsius to Fahrenheit:\n");
  celsius = lower;
  while(celsius <= upper) {
    fahr =  (celsius * (9.0 / 5.0) ) + 32;
    printf("%3.0f\t%6.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
