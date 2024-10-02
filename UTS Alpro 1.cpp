#include<iostream>
using namespace std;
int main()
{
    int npm,nilaiabsen,nilaitugas,nilaiuts,nilaiuas,nilaiakhir,hasilabsen,hasiltugas,hasiluts,hasiluas;
    string nama;
    cout<<"Masukkan Nama : ";
    cin>>nama;
    cout<<"Masukkan NPM : ";
    cin>>npm;
    cout<<"Masukkan Nilai Absen : ";
    cin>>nilaiabsen;
    cout<<"Masukkan Nilai Tugas : ";
    cin>>nilaitugas;
    cout<<"Masukkan Nilai UTS : ";
    cin>>nilaiuts;
    cout<<"Masukkan Nilai UAS : ";
    cin>>nilaiuas;

    hasilabsen = 10*nilaiabsen/100;
    hasiltugas = 20*nilaitugas/100;
    hasiluts = 30*nilaiuts/100;
    hasiluas = 40*nilaiuas/100;

    nilaiakhir = hasilabsen + hasiltugas + hasiluts + hasiluas;


    if(nilaiakhir > 84)
    {
        cout<<"Nama : "<<nama<<endl;
        cout<<"NPM : "<<npm<<endl;
        cout<<"Nilai Absen : "<<nilaiabsen<<endl;
        cout<<"Nilai Tugas : "<<nilaitugas<<endl;
        cout<<"Nilai UTS : "<<nilaiuts<<endl;
        cout<<"Nilai UAS : "<<nilaiuas<<endl;
        cout<<"Nilai Akhir : "<<nilaiakhir<<endl;
        cout<<"Anda Mendapatkan Nilai A";

    }
    else if (nilaiakhir > 79)
    {
        cout<<"Nama : "<<nama<<endl;
        cout<<"NPM : "<<npm<<endl;
        cout<<"Nilai Absen : "<<nilaiabsen<<endl;
        cout<<"Nilai Tugas : "<<nilaitugas<<endl;
        cout<<"Nilai UTS : "<<nilaiuts<<endl;
        cout<<"Nilai UAS : "<<nilaiuas<<endl;
        cout<<"Nilai Akhir : "<<nilaiakhir<<endl;
        cout<<"Anda Mendapatkan Nilai B";
    }
    else if (nilaiakhir > 74)
    {
        cout<<"Nama : "<<nama<<endl;
        cout<<"NPM : "<<npm<<endl;
        cout<<"Nilai Absen : "<<nilaiabsen<<endl;
        cout<<"Nilai Tugas : "<<nilaitugas<<endl;
        cout<<"Nilai UTS : "<<nilaiuts<<endl;
        cout<<"Nilai UAS : "<<nilaiuas<<endl;
        cout<<"Nilai Akhir : "<<nilaiakhir<<endl;
        cout<<"Anda Mendapatkan Nilai C";
    }
    else if (nilaiakhir > 69)
    {
        cout<<"Nama : "<<nama<<endl;
        cout<<"NPM : "<<npm<<endl;
        cout<<"Nilai Absen : "<<nilaiabsen<<endl;
        cout<<"Nilai Tugas : "<<nilaitugas<<endl;
        cout<<"Nilai UTS : "<<nilaiuts<<endl;
        cout<<"Nilai UAS : "<<nilaiuas<<endl;
        cout<<"Nilai Akhir : "<<nilaiakhir<<endl;
        cout<<"Anda Mendapatkan Nilai D";
    }
    else
    {
       cout<<"Nama : "<<nama<<endl;
        cout<<"NPM : "<<npm<<endl;
        cout<<"Nilai Absen : "<<nilaiabsen<<endl;
        cout<<"Nilai Tugas : "<<nilaitugas<<endl;
        cout<<"Nilai UTS : "<<nilaiuts<<endl;
        cout<<"Nilai UAS : "<<nilaiuas<<endl;
        cout<<"Nilai Akhir : "<<nilaiakhir<<endl;
        cout<<"Anda Mendapatkan Nilai E";
    }


    return 0;
}
