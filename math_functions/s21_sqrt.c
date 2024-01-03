#include "../s21_math.h"

// вычисляет квадратный корень
long double s21_sqrt(double x) {
  long double rezult = 0;
  long double near_rezult = 1;

  if (x == 0)
    rezult = 0;
  else if (x != x || x < 0 || x == -s21_INFINITY)
    rezult = s21_NAN;
  else if (x == s21_INFINITY)
    rezult = s21_INFINITY;
  else {
    for (int i = 0; i < 500; i++) {
      rezult = 0.5 * (near_rezult + x / near_rezult);
      near_rezult = rezult;
    }
  }

  return rezult;
}