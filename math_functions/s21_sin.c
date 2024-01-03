#include "../s21_math.h"

// синус
long double s21_sin(double x) {
  x = s21_fmod(x, 2 * s21_PI);
  double rezult, add_value, i;
  rezult = x;
  add_value = x;
  i = 0;

  while (add_value > 1e-6 || add_value < -1e-6) {
    add_value *= (-1) * pow(x, 2) / ((2 * i + 2) * (2 * i + 3));
    rezult += add_value;
    i++;
  }

  return rezult;
}