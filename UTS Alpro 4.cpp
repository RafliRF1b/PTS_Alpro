#include<iostream>
using namespace std;
int main()
{
    int batasangka;
cout<<"Masukkan Batas Angka : ";
cin>>batasangka;


{ cout << "Bilangan Ganjil : \n";
    for (int i = 1;i < batasangka;i+=2)
    {
        cout<<i<<" \n";
    }
    cout<<endl;
}

{ cout << "Bilangan Genap : \n";
    int a = 0;
    while (a<batasangka)
    {
        cout << a <<" \n";
        a += 2;
    }
    cout << endl;
}

return 0;
}
