#include "s21_math.h"

long double s21_factorial(int x) {
  if (x < 0)
    return 0;
  else if (x == 0)
    return 1;
  else
    return x * s21_factorial(x - 1);
}

long long int s21_int_pow(int base, int exp) {
  long long int rezult = 1;

  if (exp > 0)
    for (int i = 0; i < exp; i++) rezult *= base;
  else if (exp < 0)
    for (int i = 0; i < s21_abs(exp); i++) rezult /= base;

  return rezult;
}