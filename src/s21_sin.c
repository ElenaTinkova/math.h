#include "s21_math.h"

long double s21_sin(double x) {
  long double sum = 0.0;
  int i = 1;
  if (x == 0.) {
    sum = 0.;
  } else if (S21_IS_NAN(x)) {
    sum = S21_NAN;
  } else if (S21_IS_INF(x)) {
    sum = S21_NAN;
  }
  if (x > S21_PI) {
    x = s21_fmod(x, 2 * S21_PI);
  }
  if (x < -S21_PI) {
    x = s21_fmod(x, 2 * S21_PI);
  }

  long double n = x;
  while (s21_fabs(n) > S21_EPS) {
    sum += n;
    n *= (-1.0 * x * x) / ((2 * i + 1) * (2 * i));
    i++;
  }
  return sum;
}
