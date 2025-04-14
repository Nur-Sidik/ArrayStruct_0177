#include <iostream>
using namespace std;

struct Hero{
    string Nama;
    string role;
    string tipe;
};

int main()
{
    Hero arhero[15];
    
    for(int i = 0; i < 15; i++){
        cout << "Hero ke- " << i+1 << endl;
        cout << "Masukan nama hero = ";
        cin >> arhero[i].Nama;
        cout << "Masukan jenis role = ";
        cin >> arhero[i].role;
        cout << "Masukan tipe hero =";
        cin >> arhero[i].tipe;
    }
    
    
    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    for(int i = 0; i < 15; i++){
        cout << "Hero ke- " << i+1 << endl;
        cout << "Nama Hero = " << arhero[i].Nama << endl;
        cout << "Jenis Role Hero = " << arhero[i].role << endl;
        cout << "Tipe Role = " << arhero[i].tipe << endl;
    }

}
