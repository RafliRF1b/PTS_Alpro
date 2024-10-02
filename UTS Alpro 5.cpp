#include <iostream>
using namespace std;
int main()
{
    float beratbadan,tinggibadan,tinggibadanm,total;
    cout<<"Masukkan Berat Badan : ";
    cin>>beratbadan;
    cout<<"Masukkan Tinggi Badan : ";
    cin>>tinggibadan;

    tinggibadanm = tinggibadan / 100;

    total = beratbadan / (tinggibadanm*tinggibadanm);

    if (total < 18.4)
    {
        cout<<"Berat Badan Kurang\n";
        cout<<"Nilai IMT Anda : "<<total;
    }
    else if (total > 18.4)
    {
        cout<<"Berat Badan Ideal\n";
        cout<<"Nilai IMT Anda : "<<total;
    }
    else if(total > 24.9)
    {
        cout<<"Berat Badan Lebih\n";
        cout<<"Nilai IMT Anda : "<<total;
    }
    else if (total > 29.9)
    {
        cout<<"Berat Badan Gemuk\n";
        cout<<"Nilai IMT Anda : "<<total;
    }
    else if (total > 40)
    {
        cout<<"Berat Badan Sangat Gemuk\n";
        cout<<"Nilai IMT Anda : "<<total;
    }







return 0;
}
