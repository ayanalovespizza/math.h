#include "../s21_math.h"

// возводит число в заданную степень
long double s21_pow(double base, double exp) {
  long double rezult = 0, copy = base;

  if (exp == 0)
    rezult = 1;
  else if ((int)(base) == base && (int)(exp) == exp)
    rezult = s21_int_pow(base, exp);
  else if (base < 0) {
    copy = -copy;
    rezult = s21_exp(exp * s21_log(base));
    if (s21_fmod(exp, 2) != 0) rezult = -rezult;
  } else
    rezult = s21_exp(exp * s21_log(base));

  return rezult;
}