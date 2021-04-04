#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int FPB(int x, int y);

int main()
{
    int bil1, bil2;
    cout << "Masukkan bilangan pertama  : ";
    cin >> bil1;
    cout << "Masukkan bilangna kedua    : ";
    cin >> bil2;
    cout << "Faktor Persekutuan Terbesar : " << FPB(bil1, bil2) << endl;
}

int FPB(int x, int y)
{
    float hasil;
    if (y == 0)
        hasil = x;
    else
        hasil = FPB(y, (x % y));
    return hasil;
}

