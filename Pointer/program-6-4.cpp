#include <iostream>
using namespace std;

int main()
{
    int x, y; // x & y bertipe int
    int *px;  // px pointer yang menunjuk objek bertipe int

    x = 87;
    px = &x; // px berisi alamat dari x
    y = *px; // y berisi nilai yang ditunjuk px

    cout << "alamat x = " << &x << endl;
    cout << "isi px x = " << px << endl;
    cout << "nilai yang ditunjuk oleh px = " << px << endl;
    cout << "nilai y = " << y << endl;
}