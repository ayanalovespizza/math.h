#include "../s21_math.h"

// возвращает значение e, возведенное в заданную степень
long double s21_exp(double x) {
  long double add_value = 1, rezult = 1, i = 1;

  if (x == s21_INFINITY)
    rezult = s21_INFINITY;
  else if (x == -s21_INFINITY)
    rezult = 0;
  else if (x != x)
    rezult = s21_NAN;

  else {
    while (s21_fabs(add_value) > s21_EPS) {
      add_value *= x / i;
      i += 1;
      rezult += add_value;
    }
  }

  return rezult;
}