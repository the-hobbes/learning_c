#include <stdio.h>

# define LOWER 0
# define UPPER 300
# define STEP 20

/* print fahrenheit-celsius table using a for loop*/
main()
{
  int fahr;
  
  printf("Normally formatted table\n");
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
