#include <math.h>
#include <stdio.h>

#include "s21_math.h"

int main() {
  // for (double k = -9; k <= 9; k += 1.7) {
  //   for (double g = -5; g < 5; g += 1) {
  //     long double a = s21_pow(k, g);
  //     long double b = pow(k, g);
  //     if ((!isnan(a) && !isnan(b)) && !(a == INFINITY && b == INFINITY) &&
  //         !(a == -INFINITY && b == -INFINITY)) {
  //       printf("base = %f exp = %f\n", k, g);
  //       printf("Мой результат: %Lf\n", a);
  //       printf("Образец: %Lf\n\n", b);
  //     }
  //     a = s21_pow(g, k);
  //     b = pow(g, k);
  //     if ((!isnan(a) && !isnan(b)) && !(a == INFINITY && b == INFINITY) &&
  //         !(a == -INFINITY && b == -INFINITY)) {
  //       printf("exp = %f base = %f\n", k, g);
  //       printf("Мой результат: %Lf\n", a);
  //       printf("Образец: %Lf\n\n", b);
  //     }
  //   }
  // }

  printf("Мой результат: %Lf\n", s21_asin(-INFINITY));
  printf("Образец:       %f\n\n", asin(-INFINITY));
  return 0;
}