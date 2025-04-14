#include <iostream>
#include <string>
using namespace std;

struct Skill{
    string skill1;
    string skill2;
    string skill3;
};

struct Hero{
    string Nama;
    string role;
    string tipe;
    Skill skill;
};

int main()
{
    Hero arhero[15];
    
    for(int i = 0; i < 15; i++)
    {
        cout << "Hero ke- " << i+1 << endl;
        cout << "Masukan nama hero = ";
       getline(cin, arhero[i].Nama);

        cout << "Masukan jenis role = ";
        getline(cin, arhero[i].role);

        cout << "Masukan tipe hero =";
        cin >> arhero[i].tipe;
        cin.ignore();

       cout << "Masukan skill 1 ";
       getline(cin, arhero[i].skill.skill1);
       cout << "Masukan skill 2 ";
       getline(cin, arhero[i].skill.skill2);
       cout << "Masukan skill 3 ";
       getline(cin, arhero[i].skill.skill3);
    }
    
    
    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    for(int i = 0; i < 15; i++){
        cout << "Hero ke- " << i+1 << endl;
        cout << "Nama Hero = " << arhero[i].Nama << endl;
        cout << "Jenis Role Hero = " << arhero[i].role << endl;
        cout << "Tipe Role = " << arhero[i].tipe << endl;

        cout << "Skill 1 = " << arhero[i].skill.skill1 << endl;
        cout << "Skill 2 = " << arhero[i].skill.skill2 << endl;
        cout << "Skill 3 = " << arhero[i].skill.skill3 << endl;
    }

}