#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    static int data_huruf[2][8][7] = {
        {{1, 1, 1, 1, 1, 1, 1},
         {1, 1, 0, 0, 0, 0, 1},
         {1, 1, 1, 1, 1, 1, 1},
         {0, 0, 0, 0, 1, 1, 1},
         {1, 0, 0, 0, 1, 1, 1},
         {1, 1, 1, 1, 1, 1, 1},
         {0, 0, 0, 0, 0, 0, 0}},

        {{1, 1, 0, 0, 0, 1, 1},
         {1, 1, 0, 0, 0, 1, 1},
         {1, 1, 0, 0, 0, 1, 1},
         {1, 1, 1, 1, 1, 1, 1},
         {1, 1, 1, 0, 0, 1, 1},
         {1, 1, 1, 0, 0, 1, 1},
         {1, 1, 1, 0, 0, 1, 1},
         {0, 0, 0, 0, 0, 0, 0}}};

    // Tampilkan huruf
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 7; k++)
            {
                // if (data_huruf[i][j][k])
                //     cout << '\xDB';
                // else
                //     cout << " "; // spasi

                cout << data_huruf[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
}
