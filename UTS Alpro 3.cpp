#include<iostream>
using namespace std;
int main ()
{
    int nilai,satu,dua;
    cout<<"Pilih Program Matematika\n";
    cout<<"1. penjumlahan\n";
    cout<<"2. pengurangan\n";
    cout<<"Masukkan Pilihan : ";
    cin>>nilai;

    if(nilai == 1)
    {
        cout<<"masukkan angka kesatu: ";
        cin>>satu;
        cout<<"Masukkan angka kedua: ";
        cin>>dua;
        cout<<satu + dua;
    }

    else if (nilai == 2)
    {
        cout<<"masukkan angka kesatu: ";
        cin>>satu;
        cout<<"Masukkan angka kedua: ";
        cin>>dua;
        cout<<satu - dua;
    }





    return 0;
}

