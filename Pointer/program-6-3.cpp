// Contoh pointer yang menunjuk array
#include <iostream>
using namespace std;

int main()
{
    static int tgl_lahir[] = {27, 8, 1977};
    int *ptgl;
    ptgl = tgl_lahir; // ptgl berisi alamat array

    cout << "nilai yang ditunjuk oleh ptgl = " << *ptgl << endl;
    cout << "nilai dari tgl_lahir[0] = " << tgl_lahir[0] << endl;
}