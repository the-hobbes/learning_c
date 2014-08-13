#include <stdio.h>

/* print fahrenheit-celsius table using a for loop*/
main()
{
  int fahr;
  
  printf("Normally formatted table\n");
  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

  printf("Reverse sorted table\n");
  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
