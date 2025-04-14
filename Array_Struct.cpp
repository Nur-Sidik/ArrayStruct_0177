#include <iostream>
using namespace std;

string matkul[] = {"Pemrogramn Dasar" , "Algoritma"};

float NilaiAkhir[2] = {1 , 2.5};

char grade[5];

int main()
{
    cout << "Nama Matakuliah : " << matkul[1] << endl;
    matkul[0] = "Logika teknk pemrograman";
    cout << "Nama Matakuliah : " << matkul[0] << endl;

    for(int i = 0; i < 2; i++)
    {
        cout << "Nilai akhir ke-" << i+1 << "=" << NilaiAkhir[i] << endl;
    }

    cout <<  "input Grade" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Masukkan Grade";
        cin >> grade[i];
    }
    cout << endl;
    cout << "Tampilkan Grade" << endl;
    cout << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Grade = " << grade[i] <<  endl;
    }
}