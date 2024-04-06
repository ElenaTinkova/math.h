#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res;
  if (y == 0 || (S21_IS_INF(x) && S21_IS_INF(y)) || S21_IS_NAN(x) ||
      S21_IS_NAN(y))
    return S21_NAN;
  else if (S21_IS_INF(y))
    return x;
  else
    res = x - ((x / y) < 0 ? s21_ceil(x / y) : s21_floor(x / y)) * y;

  return res;
}
