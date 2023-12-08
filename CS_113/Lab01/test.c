#include <stdio.h>

int main()
{

    int a = 20;
    float f = 209.0;
    double g = 209.0;
    long long c = 1000;           //  formant : %llu
    unsigned long long d = 10000; // 0 - 2^64-1 ใหญ่สุดใน C formant : %ull
    char b = 'A';                 // เก็บได้ทั้งตัวเลขและตัวอักษร

    char e[10];

    // อาเรย์ของ char จะเก็บตัวอักษรได้เป็นจำนวนมาก
    printf("%d %lf\n", a, f); // char array least 1 char

    b += 20;
    printf("%c :", b);
    printf("%d\n", b);

    float q = 1 / 5.0;
    printf("%f", q);

    return 0;
}
