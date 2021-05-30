// Contoh pengaksesan isi array dengan pointer
#include <iostream>
using namespace std;

int main()
{
    static int tgl_lahir[] = {27, 8, 1977};
    int i;
    int *ptgl;

    ptgl = tgl_lahir; // ptgl berisi alamat array

    for (i = 0; i < 3; i++)
        cout << *(ptgl + i) << " ";
    cout << endl;
}