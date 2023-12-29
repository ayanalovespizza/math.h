#include "../s21_math.h"

// арктангенс
long double s21_atan(double x) {
  long double rezult = 0;

  if (x == 1)
    rezult = s21_PI / 4;
  else if (x == -1)
    rezult = -s21_PI / 4;
  else {
    if (x > -1 && x < 1) {
      for (int i = 0; i < 5000; i++) {
        rezult += (pow(-1, i) * pow(x, 2 * i + 1)) / (2 * i + 1);
      }
    } else if (x < -1 && x > 1) {
      rezult = (s21_PI * sqrt(pow(x, 2))) / (2 * x);
      for (int i = 0; i < 5000; i++) {
        rezult += (pow(-1, i) * pow(x, -2 * i - 1)) / (2 * i + 1);
      }
    }
  }

  return rezult;
}