#include "../s21_math.h"

// возвращает ближайшее целое число, не превышающее заданное значение
long double s21_floor(double x) {
  long double count = 0, rezult = 0;
  double x_tmp = 0;

  if (x == s21_INFINITY)
    rezult = s21_INFINITY;
  else if (x == -s21_INFINITY)
    rezult = -s21_INFINITY;
  else if (x != x)
    rezult = s21_NAN;

  else {
    if ((int)(x) == x)
      rezult = x;
    else {
      if (x < 0)
        x_tmp = (-1) * x;
      else
        x_tmp = x;

      while (count < x_tmp) count += 1;

      if (x < 0)
        rezult = (-1) * count;
      else
        rezult = count - 1;
    }
  }

  return rezult;
}