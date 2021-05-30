/* Program menginput nilai (bilangan) ke dalam array dimensi dua 
dan menampilkannya secara Row Major Order */

#include <iostream>
using namespace std;

int main()
{
    int baris, kolom, matriks[10][10];
    int i, j;
    int angkaCari, angkaMaks;

    // Input elemen array secara Row Major Order

    //Input jumlah baris
    cout << "Masukkan jumlah baris = ";
    cin >> baris;

    //Input jumlah kolom
    cout << "Masukkan jumlah kolom = ";
    cin >> kolom;

    //input elemen array
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

    cout << "Isi array Secara Row Major Order: \n";
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
            cout << "  " << matriks[i][j];
        cout << endl;
    }

    // Tampilkan elemen Array secara Column Major Order
    cout << "Isi array Column Major Order : \n";
    for (j = 0; j < baris; j++)
    {
        for (i = 0; i < kolom; i++)
            cout << "  " << matriks[i][j];
        cout << endl;
    }

    // Mencari elemen maksimum array
    angkaCari = 0;
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            if (matriks[i][j] >= angkaCari)
            {
                angkaMaks = matriks[i][j];
            }
        }
    }

    cout << "Nilai Maksimum dari Array adalah " << angkaMaks << endl;
}
