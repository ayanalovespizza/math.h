#ifndef S21_MATH_H
#define S21_MATH_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define s21_PI 3.14159265358979324
#define s21_E 2.71828182845904523
#define s21_EPS 1e-17
#define s21_INFINITY 1.0 / 0.0
#define s21_NAN 0.0 / 0.0

long double s21_factorial(int x);              // DONE факториал
long long int s21_int_pow(int base, int exp);  // pow для int

int s21_abs(int x);              // DONE модуль целого
long double s21_fabs(double x);  // DONE модуль десят

// DONE возвращает ближайшее целое число, не меньшее заданного значения
long double s21_ceil(double x);
// DONE возвращает ближайшее целое число, непревышающее заданное значение
long double s21_floor(double x);

long double s21_pow(double base, double exp);
long double s21_sqrt(double x);            // DONE
long double s21_fmod(double x, double y);  // DONE

long double s21_exp(double x);  // DONE
long double s21_log(double x);  // DONE

long double s21_cos(double x);  // DONE
long double s21_sin(double x);  // DONE
long double s21_tan(double x);  // DONE

long double s21_acos(double x);  // DONE
long double s21_asin(double x);  // DONE
long double s21_atan(double x);  // DONE

#endif