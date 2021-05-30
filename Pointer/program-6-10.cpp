// contoh pointer sebagai parameter fungsi
#include <iostream>
using namespace std;

void naikkan_nilai(int *x, int *y);

void turunkan_nilai(float *x, float *y);

int main()
{
    int a = 3;
    int b = 7;

    // float a = 3;
    // float b = 7;

    cout << "semula : a = " << a << " b = " << b << endl;

    naikkan_nilai(&a, &b);
    // turunkan_nilai(&a, &b);
    cout << "kini : a = " << a << " b = " << b << endl;
}

void naikkan_nilai(int *x, int *y)
{
    *x = *x + 2;
    *y = *y + 2;
}

void turunkan_nilai(float *x, float *y)
{
    *x = *x - 2;
    *y = *y - 2;
}