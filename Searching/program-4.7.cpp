#include <iostream>
using namespace std;

int main()
{
    int x[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90,100};
    int i, j, k, l;
    int nilaiCari;
    bool found = false;

    cout << "Nilai yang dicari = ";
    cin >> nilaiCari;

    i = 0;
    j = 10;

    cout << x[(i + j) / 2] << endl;
    while ((!found) & (i <= j))
    {
        k = (i + j) / 2;
        if (nilaiCari == x[k])
        {
            found = true;
        }
        else
        {
            if (nilaiCari < x[k])
            {
                j = k - 1;
            }
            else
            {
                i = k + 1;
            }
        }
    }

    if (found)
    {
        cout << nilaiCari << " Ditemukan pada Array index ke-" << k << endl;
    }
    else
    {
        cout << "Tidak ada " << nilaiCari << " Dalam Array" << endl;
    }

}