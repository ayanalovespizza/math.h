#include "s21_math.h"

long double s21_pow_int(double base, int exp) {
  long double rezult = 1;
  if (exp < 0) {
    exp = -exp;

    while (exp) {
      if (exp % 2 == 0) {
        exp /= 2;
        base *= base;
      } else {
        exp--;
        rezult *= base;
      }
    }
    rezult = 1 / rezult;

  } else {
    while (exp) {
      if (exp % 2 == 0) {
        exp /= 2;
        base *= base;
      } else {
        exp--;
        rezult *= base;
      }
    }
  }

  return rezult;
}