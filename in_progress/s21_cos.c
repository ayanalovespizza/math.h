#include "../s21_math.h"

// косинус
long double s21_cos(double x) {
  long double rezult = 0;

  if (x == s21_INFINITY || x == -s21_INFINITY || x == s21_NAN)
    rezult = s21_NAN;
  else if (x == 0)
    rezult = 1;
  else if (x == 0.5)
    rezult = 30 * s21_PI / 180;
  else if (x == sqrt(2) / 2)
    rezult = 45 * s21_PI / 180;
  else if (x == sqrt(3) / 2)
    rezult = 60 * s21_PI / 180;
  else if (x == 1)
    rezult = 0;

  else {
    printf("я тут\n");
    for (int i = 0; i < 5000; i++)
      rezult += pow(-1, i) * pow(x, 2 * i) / s21_factorial(2 * i);
  }

  return rezult;
}