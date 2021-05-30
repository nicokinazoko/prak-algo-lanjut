// contoh fungsi dengan keluaran berupa pointer
#include <iostream>
using namespace std;

char *nama_hari(int n);

int main()
{
    int hr;
    cout << "hari(1..7) : ";
    cin >> hr;
    cout << nama_hari(hr) << endl;
}

char *nama_hari(int n)
{
    static char *hari[] = {
        "kode hari salah", "senin", "selasa", "rabu",
        "kamis", "jumat", "sabtu", "minggu"};

    return (n < 1 || n > 7) ? hari[0] : hari[n];

    // if (n < 1 || n > 7)
    // {
    //     return hari[0];
    // }
    // else
    // {
    //     return hari[n];
    // }
}