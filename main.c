#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
char *degree = readline ("Enter tempreture in celsius: ");
double c = atof(degree);
double f = 1.8*c+32.0;
printf("%.6f° in celsius is equavalent to %.6f° f Fahrenheit./n",c,f);
  return 0;
}