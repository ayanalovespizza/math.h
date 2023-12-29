#include "../s21_math.h"

// вычисляет натуральный логарифм
long double s21_log(double x) {
  long double rezult = 0;
  long double near_rezult = 1;

  if (x == s21_INFINITY)
    rezult = s21_INFINITY;
  else if (x == 0)
    rezult = -s21_INFINITY;
  else if (x < 0 || x != x)
    rezult = s21_NAN;
  else {
    for (int i = 0; i < 5000; i++) {
      rezult = near_rezult +
               2 * (x - s21_exp(near_rezult)) / (x + s21_exp(near_rezult));
      near_rezult = rezult;
    }
  }

  return rezult;
}