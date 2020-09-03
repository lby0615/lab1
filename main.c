#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
char *degree = readline ("Enter temperature in celsius: ");
double c = atof(degree);
double f = 1.8*c+32.0;
printf("%.6f° in Celsius is equavalent to %.6f°  Fahrenheit.",c,f);
  return 0;
}