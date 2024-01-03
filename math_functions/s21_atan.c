#include "../s21_math.h"

// арктангенс
long double s21_atan(double x) {
  long double rezult = 0;

  if (x == s21_INFINITY)
    rezult = s21_PI / 2;
  else if (x == -s21_INFINITY)
    rezult = -s21_PI / 2;
  else if (x != x)
    rezult = s21_NAN;
  else if (x == 1)
    rezult = s21_PI / 4;
  else if (x == -1)
    rezult = -s21_PI / 4;
  else {
    int in_range = (x > -1 && x < 1);

    if (in_range) {
      for (int i = 0; i < 2000; i++)
        rezult += (s21_pow(-1, i) * s21_pow(x, 2 * i + 1)) / (2 * i + 1);
    } else {
      for (int i = 0; i < 2000; i++)
        rezult += (s21_pow(-1, i) * s21_pow(x, -2 * i - 1)) / (2 * i + 1);
      rezult = (s21_PI * s21_fabs(x) / (2 * x)) - rezult;
    }
  }

  return rezult;
}