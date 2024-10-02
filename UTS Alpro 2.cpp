#include<iostream>
using namespace std;
int main()
{
    int tinggi;

    cout<<"Masukkan Tinggi Segitiga : ";
    cin>>tinggi;


    for (int i = 1; i <= tinggi; i++) {

        for (int spasi = 1; spasi <= tinggi - i; spasi++) {
            cout << " ";
        }
        for (int bintang = 1; bintang <= (2 * i - 1); bintang++) {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}
