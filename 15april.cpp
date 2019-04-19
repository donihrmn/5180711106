#include<iostream>
using namespace::std;
int ModulusYoung (int angka, int modulus)
{
    if(angka<modulus)
        return 0;
    else
        return 1+ModulusYoung(angka-modulus,modulus);
}
main()
{
    int angka,modulus;
    cout<<"Masukkan Tegangan : ";cin>>angka;
    cout<<"Masukkan Regangan : ";cin>>modulus;
    cout<<"Modulus Young : "<<ModulusYoung(angka,modulus);
}
