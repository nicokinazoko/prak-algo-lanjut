/* Program menginput nilai (bilangan) ke dalam array dimensi dua 
dan menampilkannya secara Row Major Order */

#include <iostream>
using namespace std;

int main()
{
    int baris, kolom, matriks[10][10];
    int i,j;


    // Input elemen array secara Row Major Order

    cout << "Masukkan jumlah baris = " ;
    cin >> baris;
    cout << "Masukkan jumlah kolom = ";
    cin >> kolom;

    cout << "Input elemen Array : \n";
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            cout << "matriks[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> matriks[i][j];
        }
        cout << endl;
    }

    // Tampilkan elemen Array secara Row Major Order

    cout << "Isi array : \n";
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
            cout << "  " << matriks[i][j];
        cout << endl;
    }
}
