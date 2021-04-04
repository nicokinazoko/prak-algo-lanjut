#include <iostream>
#include <string.h>
#include <string>
using namespace std;

typedef struct
{
    char namaPenduduk[100];
    char jenisKelaminPenduduk[20];
    char umurPenduduk[20];
    char alamatPenduduk[100];
    char agamaPenduduk[20];
    char golonganDarahPenduduk[20];
    char statusPenduduk[20];
} dataPenduduk;

dataPenduduk penduduk[10];

int pilihMenu, jumlahData, i, j;
char pilihan;
char namaCari[20];

void menuSatu();
void menuDua();
void menuTiga();
// void menuEmpat();
// void menuLima();

int main()
{
    do
    {
        cout << "Menu " << endl;
        cout << "1. Input Data " << endl;
        cout << "2. Pencarian Data " << endl;
        cout << "3. Penampilan Data " << endl;
        cout << "4. Penghapusan Data " << endl;
        cout << "5. Keluar " << endl;
        cout << "Silahkan Pilih angka : ";
        cin >> pilihMenu;

        if (pilihMenu == 1)
        {
            menuSatu();
        }
        else if (pilihMenu == 2)
        {
            menuDua();
        }
        else if (pilihMenu == 3)
        {
            menuTiga();
        }
        else if (pilihMenu == 4)
        {
            // menuEmpat();
        }
        else if (pilihMenu == 5)
        {
            // menuLima();
        }
        else
        {
            cout << "Pilihan Anda Salah !" << endl;
            cout << "Silahkan Mengulang " << endl;
        }

        cout << "Apakah ingin Mengulang ? y/t = ";
        cin >> pilihan;
        cout << endl;
    } while (pilihMenu < 1 || pilihMenu > 5 || pilihan == 'Y' || pilihan == 'y');
}

void menuSatu()
{
    cout << "Input Data " << endl;
    cout << "Masukkan Jumlah Data = ";
    cin >> jumlahData;
    for (i = 0; i < jumlahData; i++)
    {
        cout << "Data " << i + 1 << endl;
        cout << "Nama Penduduk : ";
        cin.ignore();
        cin.getline(penduduk[i].namaPenduduk, sizeof(penduduk[i].namaPenduduk));
    }
}

void menuDua()
{
    dataPenduduk dataPendudukCari;
    int hasilCari;
    cout << "Pencarian Data " << endl;
    cout << "Masukkan Nama yang akan dicari : ";
    cin >> namaCari;

    for (i = 0; i < jumlahData; i++)
    {
        hasilCari = strcmp(penduduk[i].namaPenduduk, namaCari);
        if (strcmp(penduduk[i].namaPenduduk, namaCari) == 0)
        {
            dataPendudukCari = penduduk[i];
            // cout << hasilCari;
        }
        else
        {
            
        }
    }

    if (dataPendudukCari.namaPenduduk != "")
    {
        
        cout << "Nama Penduduk = " << dataPendudukCari.namaPenduduk << endl;
    }
    else
    {
        cout << "Data Penduduk Tidak Ada" << endl;
    }
}
void menuTiga()
{
    cout << "Penampilan Data " << endl;
    for (i = 0; i < jumlahData; i++)
    {
        cout << "Data " << i + 1 << endl;
        cout << "Nama Penduduk : ";
        cout << penduduk[i].namaPenduduk << endl
             << endl;
    }
}
