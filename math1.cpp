#include "easy.h"

int itc_pow(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i)
        result *= a;
    return result;
}

int itc_sqrt(int num) {
    for (int i = 0; i * i <= num; ++i)
        if (i * i == num) return i;
    return -1;
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
