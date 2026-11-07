#include <iostream>
#include <string>
using namespace std;

struct Alamat { string kota; string jalan; };
struct Mahasiswa { string nama; Alamat alamat; };

struct Stat { int attack; int hp; };
struct Hero { string nama; string role; Stat stat; };

int main(){
    Mahasiswa mhs1;
    mhs1 = { "Jotaro", "Malang", "Masrtrip" };
    cout << "=====SOAL 3.1=====" << endl;
    cout << "Nama  : " << mhs1.nama << endl;
    cout << "Kota  : " << mhs1.alamat.kota << endl;
    cout << "Jalan : " << mhs1.alamat.jalan << endl << endl;

    Hero hero1, hero2;
    hero1 = {"Alucard", "Junggle", 200, 3000};
    hero2 = {"Alpha", "ExpLane", 182, 3600};
    cout << "=====SOAL 3.1=====" << endl;
    cout << hero1.nama << " | " << hero1.role << " | " << "ATT: " << hero1.stat.attack << " | " << "HP: " << hero1.stat.hp << endl;
    cout << hero2.nama << " | " << hero2.role << " | " << "ATT: " << hero2.stat.attack << " | " << "HP: " << hero1.stat.hp << endl;
    return 0;
}