#include <iostream>
#include <string>
using namespace std;


typedef struct
{
    char namaPegawai[100];
    char nipPegawai[10];
    int hariKerja;
    int gajiPerHari;
    int totalGaji;
} dataPegawai;

dataPegawai pegawai;

int main()
{
    cout << "Data Pegawai " << endl;
    cout << "Masukkan Data Pegawai : " << endl;

    //Input data Pegawai
    cout << "Nama Pegawai : ";
    cin.getline(pegawai.namaPegawai,sizeof(pegawai.namaPegawai));

    cout << "Nip Pegawai : ";
    cin >> pegawai.nipPegawai;

    cout << "Hari Kerja : ";
    cin >> pegawai.hariKerja;

    cout << "Gaji Per Hari : ";
    cin >> pegawai.gajiPerHari;

    //perhitungan total gaji
    pegawai.totalGaji = pegawai.hariKerja * pegawai.gajiPerHari;

    //output data pegawai
    cout << endl
         << endl
         << endl;

    cout << "Data Pegawai " << endl;
    cout << "Nama Pegawai \t: " << pegawai.namaPegawai << endl;
    cout << "Nip Pegawai \t: " << pegawai.nipPegawai << endl;
    cout << "Hari Kerja \t: " << pegawai.hariKerja << endl;
    cout << "Gaji Per Hari \t: " << pegawai.gajiPerHari << endl;
    cout << "Total Gaji \t: " << pegawai.totalGaji << endl;
}