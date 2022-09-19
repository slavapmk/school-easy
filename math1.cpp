#include "easy.h"

int itc_pow(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i)
        result *= a;
    return result;
}

int itc_sqrt(int num) {
    int i = 0;
    while (i * i <= num)
        i += 1;
    return i - 1;
}

int itc_abs(int input) {
    return input < 0 ? input * -1 : input;
}


double itc_fabc(double input) {
    return input < 0 ? input * -1 : input;
}

int itc_revnbr(int input) {
    int a = input / 100;
    int b = input / 10 % 10;
    int c = input % 10;
    return c * 100 + b * 10 + a;
}
