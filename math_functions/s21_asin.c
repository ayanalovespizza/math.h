#include "../s21_math.h"

// арксинус
long double s21_asin(double x) {
  long double rezult = 0;

  if (x == 1)
    rezult = s21_PI / 2;
  else if (x == -1)
    rezult = -s21_PI / 2;
  else if (x != x || x == s21_INFINITY || x == -s21_INFINITY)
    rezult = s21_NAN;
  else {
    if (x > -1 && x < 1) rezult = s21_atan(x / (sqrt(1 - pow(x, 2))));
  }

  return rezult;
}