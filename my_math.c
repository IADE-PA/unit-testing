#include "my_math.h"

float square_root(float n) {
    float x = 10000;
    float s = n / x;
    while (x - s >= 0.05) {
        x = (x + s) / 2;
        s = n / x;
    }
    return x;
}

int gcd(int a, int b) {
    int c = a - b;
    while (c > 0) {
        if (c > b) {
            a = c;
        } else {
            a = b;
            b = c;
        }
        c = a - b;
    }
    return a;
}