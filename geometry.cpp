#include "easy.h"

#define PI 3.14;

int itc_skv(int num) {
    if (num < 0)return -1;
    return num * num;
}

int itc_spr(int num, int num2) {
    if (num < 0)return -1;
    if (num2 < 0)return -1;
    return num * num2;
}

int itc_str(int a, int b, int c) {
    if (a < 0)return -1;
    if (b < 0)return -1;
    if (c < 0)return -1;
    int p = (a + b + c)/2;
    return itc_sqrt(p * (p - a) * (p - b) * (p - c));
}

double itc_scir(int r) {
    if (r < 0)return -1;
    return r * r * PI;
}
