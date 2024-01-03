#include "../s21_math.h"

// тангенс
long double s21_tan(double x) {
  long double rezult = 0;

  rezult = s21_sin(x) / s21_cos(x);

  return rezult;
}