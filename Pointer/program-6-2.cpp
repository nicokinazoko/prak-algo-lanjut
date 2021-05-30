// Contoh pemakaian pointer yang salah
#include <iostream>
using namespace std;

int main()
{
    float *pu;
    float nu;
    // int u = 1234;
    float u = 1234;
    pu = &u; // pernyataan ini salah
             // sebab pu adalah pointer float padahal u bertipe int
    nu = *pu;
    cout << "u = " << u << endl;
    cout << "nu = " << nu << endl;
}