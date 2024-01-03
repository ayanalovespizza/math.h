#include <math.h>
#include <stdio.h>

#include "s21_math.h"

int main() {
  printf("Мой результат: %Lf\n", s21_pow(0, s21_INFINITY));
  printf("Образец:       %f\n\n", pow(0, INFINITY));
  return 0;
}