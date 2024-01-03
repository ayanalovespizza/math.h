#include "../s21_math.h"

// возводит число в заданную степень
long double s21_pow(double base, double exp) {
  long double rezult;
  long double copy = base;

  if (exp != 0) {
    if (copy != copy || copy == s21_INFINITY || copy == -s21_INFINITY)
      rezult = copy;

    if (copy < 0) {
      copy = -copy;
      rezult = s21_exp(exp * s21_log(copy));
      if (s21_fmod(exp, 2) != 0) {
        rezult = -rezult;
      }
    } else {
      rezult = s21_exp(exp * s21_log(base));
    }
  } else
    rezult = 1;

  return rezult;
}