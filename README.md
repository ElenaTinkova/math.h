# math.h
This is an educational project for School 21.

C mathematical operations are a group of functions in the standard library of the C programming language implementing basic mathematical functions. 

- The library is developed in C language of C11 standard using gcc compiler;
- It follows the Google style;
- Made as a static library named *s21_math.a* (with the s21_math.h header file);
- Unit-tests check the results of implementation by comparing it with the implementation of the standard math.h library;
- Unit tests cover at least 80% of each function (checked using gcov);
- Makefile builds the library and tests (with the targets all, clean, test, s21_math.a, gcov_report);
- The gcov_report target generates a gcov report in the form of an html page. Unit tests are run with gcov flags to do this;
- The total verifiable accuracy is 16 significant digits;
- Verifiable accuracy of the fractional part is up to 6 decimal places.

<br>

| No. | Function | Description |
| --- | -------- | ----------- |
| 1 | `int abs(int x)` | computes absolute value of an integer value |
| 2 | `long double acos(double x)` | computes arc cosine |
| 3 | `long double asin(double x)` | computes arc sine |
| 4 | `long double atan(double x)` | computes arc tangent |
| 5 | `long double ceil(double x)` | returns the nearest integer not less than the given value |
| 6 | `long double cos(double x)` | computes cosine |
| 7 | `long double exp(double x)` | returns e raised to the given power |
| 8 | `long double fabs(double x)` | computes absolute value of a floating-point value |
| 9 | `long double floor(double x)` | returns the nearest integer not greater than the given value |
| 10 | `long double fmod(double x, double y)` | remainder of the floating-point division operation |
| 11 | `long double log(double x)` | computes natural logarithm |
| 12 | `long double pow(double base, double exp)` | raises a number to the given power |
| 13 | `long double sin(double x)` | computes sine |
| 14 | `long double sqrt(double x)` | computes square root |
| 15 | `long double tan(double x)` | computes tangent |  