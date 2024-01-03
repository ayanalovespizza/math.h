#include "../s21_math.h"

// косинус
long double s21_cos(double x) {
  x = s21_fmod(x, 2 * s21_PI);
  double rezult, add_value, i;
  rezult = 1;
  add_value = 1;
  i = 1;

  while (add_value > 1e-6 || add_value < -1e-6) {
    add_value *= (-1) * x * x / ((2 * i - 1) * (2 * i));
    rezult += add_value;
    i++;
  }

  return rezult;
}