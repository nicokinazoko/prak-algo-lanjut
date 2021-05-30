// menukar isi dua string tanpa memakai pointer
#include <iostream>
#include <string.h>
#define panjang 20
using namespace std;

char nama1[panjang] = "hanif";
char nama2[panjang] = "fathimah";

int main()
{
    char namax[panjang];
    cout << "semula : " << endl;
    cout << "nama1 -> " << nama1 << endl;
    cout << "nama2 -> " << nama2 << endl;

    // penukaran string
    strcpy(namax, nama1);
    strcpy(nama1, nama2);
    strcpy(nama2, namax);

    cout << "kini : " << endl;
    cout << "nama1 -> " << nama1 << endl;
    cout << "nama2 -> " << nama2 << endl;
}