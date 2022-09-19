#include "easy.h"

int itc_pow(int a, int n) {
    if (n < 0 || a <= 0) return -1;
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= a;
        if (MAX_INT - result < a) return -1;
    }
    return result;
}

int itc_sqrt(int num) {
    if (num <= 0 || num > MAX_SQRT) return -1;
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
