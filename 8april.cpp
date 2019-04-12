#include <iostream>
using namespace::std;
struct Semesteran
{
    float tugas,absen,uts,uas,jumlah;
    string text;
};
Semesteran nilai;
double Masukan(string text)
{
    float nilai;
    cout<<"Masukan Nilai "<<text;cin>>nilai;
    return nilai;
}
void Penjumlahan()
{
    nilai.tugas = Masukan("TUGAS :");
    nilai.absen = Masukan("ABSEN :");
    nilai.uts = Masukan("UTS :");
    nilai.uas = Masukan("UAS :");
    nilai.jumlah=nilai.tugas*0.35+nilai.absen*0.15+nilai.uts*0.20+nilai.uas*0.30;
    cout<<"Jumlah Semua Nilai :"<<nilai.jumlah<<endl;
}
void Nilai()
{
    if(nilai.jumlah>=80)
        cout<<"NILAI A";
    else if(nilai.jumlah>=60)
        cout<<"NILAI B";
    else if(nilai.jumlah>=40)
        cout<<"NILAI C";
    else if(nilai.jumlah>=20)
        cout<<"NILAI D";
    else if(nilai.jumlah>=0)
        cout<<"NILAI E";
}
main()
{
    Penjumlahan();
    Nilai();
}
