// pointer menunjuk pointer
#include <iostream>
using namespace std;

int main()
{
    int var_x = 273; // variabel int
    int *ptr1;       // pointer int
    int **ptr2;      // pointer menunjuk pointer int
    ptr1 = &var_x;   // ptr1 berisi alamat dari var_x
    ptr2 = &ptr1;    // ptr2 berisi alamat dari ptr1

    // mengakses nilai var_x melalui ptr1
    cout << "nilai var_x = " << *ptr1 << endl;

    // mengakses nilai var_x melalui ptr2
    cout << "nilai var_x = " << **ptr2 << endl;
}