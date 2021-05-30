// menukar isi dua string yang ditunjuk pointer
#include <iostream>
using namespace std;

char *nama1 = "hanif";
char *nama2 = "fathimah";

int main()
{
    char *namax;
    cout << "semula : " << endl;
    cout << "nama1 -> " << nama1 << endl;
    cout << "nama2 -> " << nama2 << endl;

    // penukaran string yang ditunjuk oleh pointer nama1 dan nama2
    namax = nama1;
    nama1 = nama2;
    nama2 = namax;

    cout << "kini : " << endl;
    cout << "nama1 -> " << nama1 << endl;
    cout << "nama2 -> " << nama2 << endl;
}