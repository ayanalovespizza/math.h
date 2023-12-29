#include "../s21_math.h"

// остаток операции деления с плавающей точкой
long double s21_fmod(double x, double y) {
  long double rezult = 0;
  long long int mod = 0;

  if (x == 1 && y == 0)
    rezult = s21_NAN;
  else if (x == s21_INFINITY || x == -s21_INFINITY)
    rezult = s21_NAN;
  else if (y == s21_INFINITY || y == -s21_INFINITY)
    rezult = x;
  else {
    mod = x / y;
    rezult = x - mod * y;
  }

  return rezult;
}