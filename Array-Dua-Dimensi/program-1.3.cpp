#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A[3][4], B[3][4], X[3][4], Y[3][4], C[3][4], i, j;

    // Masukkan matriks A
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "input data matrik A[" << i + 1 << "][" << j + 1 << "] : ";
            fflush(stdin);
            cin >> A[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // Masukkan matriks B
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "input data matrik B[" << i + 1 << "][" << j + 1 << "] : ";
            fflush(stdin);
            cin >> B[i][j];
        }
        cout << endl;
    }

    // Proses penjumlahan matriks A dan B
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            X[i][j] = A[i][j] + B[i][j];
    }

    // Cetak isi matriks A
    cout << "\n Matriks A \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            cout << "  " << A[i][j];
        cout << endl;
    }
    cout << endl;

    // Cetak isi matriks B
    cout << "\n Matriks B \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            cout << "  " << B[i][j];
        cout << endl;
    }
    cout << endl;

    // Cetak hasil penjumlahan matriks A dan B
    cout << "\n Matriks penjumlahan A+B \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            cout << "  " << X[i][j];
        cout << endl;
    }
    cout << endl;
}
