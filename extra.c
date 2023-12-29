#include "s21_math.h"

long double s21_factorial(int x) {
  long double rezult = 0;
  if (x < 0)
    rezult = 0;
  else if (x == 0)
    rezult = 1;
  else
    rezult = x * s21_factorial(x - 1);

  return rezult;
}

long long int s21_int_pow(int base, int exp) {
  long long int rezult = 1;

  if (exp > 0)
    for (int i = 0; i < exp; i++) rezult *= base;
  else if (exp < 0)
    for (int i = 0; i < s21_abs(exp); i++) rezult /= base;

  return rezult;
}