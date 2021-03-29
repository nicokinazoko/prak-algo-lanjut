#include <iostream>
using namespace std;

int main()
{
    int i, j, matriks[5][5], baris, kolom;

    cout << "Mencari Nilai Transpose dari Matriks" << endl;
    cout << "Masukkan jumlah baris = ";
    cin >> baris;

    cout << "Masukkan jumlah kolom = ";
    cin >> kolom;

    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            cout << "Matriks [" << i + 1 << "][" << j + 1 << "] = ";
            cin >> matriks[i][j];
        }
        cout << endl;
    }

    cout << "Output Matriks " << endl;
    // matriks asli
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            cout << " " << matriks[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "Hasil Transpose Matriks " << endl;
    //proses Transpose Matriks
    for (i = 0; i < kolom; i++)
    {
        for (j = 0; j < baris; j++)
        {
            cout << " " << matriks[j][i];
        }
        cout << endl;
    }
}
