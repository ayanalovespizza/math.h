#include "../s21_math.h"

// синус
long double s21_sin(double x) {
  long double rezult = 0;

  if (x == s21_INFINITY || x == -s21_INFINITY || x == s21_NAN)
    rezult = s21_NAN;
  else {
    x = fmod(x, s21_PI);
    for (int i = 0; i < 5000; i++)
      rezult += pow(-1, i) * pow(x, 2 * i + 1) / s21_factorial(2 * i + 1);
  }

  return rezult;
}