#include <iostream>
#include <string>
using namespace std;

struct Alamat { string kota; string jalan; };
struct Mahasiswa { string nama; Alamat alamat; };

struct Stat { int attack; int hp; };
struct Hero { string nama; string role; Stat stat; };

int main(){
    Mahasiswa mhs1, mhs2;
    mhs1.nama = "Jotaro";
    mhs1.alamat.kota = "Jember";
    mhs1.alamat.jalan = "JL. Mastrip";
    mhs2 = { "Kakyoin", {"Surabaya", "Jl. Ahmad Yani"}};
    cout << "=====SOAL 3.1=====" << endl;
    cout << "Nama  : " << mhs1.nama << endl;
    cout << "Kota  : " << mhs1.alamat.kota << endl;
    cout << "Jalan : " << mhs1.alamat.jalan << endl;
    cout << "Nama  : " << mhs2.nama << endl;
    cout << "Kota  : " << mhs2.alamat.kota << endl;
    cout << "Jalan : " << mhs2.alamat.jalan << endl << endl;

    Hero hero1, hero2;
    hero1 = {"Alucard", "Junggle", {200, 3000}};
    hero2 = {"Alpha", "ExpLane", {182, 3600}};
    cout << "=====SOAL 3.2=====" << endl;
    cout << hero1.nama << " | " << hero1.role << " | " << "ATK: " << hero1.stat.attack << " | " << "HP: " << hero1.stat.hp << endl;
    cout << hero2.nama << " | " << hero2.role << " | " << "ATK: " << hero2.stat.attack << " | " << "HP: " << hero2.stat.hp << endl << endl;
    
    cout << "=====SOAL 3.3=====" << endl;
    cout << hero1.nama << " HP: " << hero1.stat.hp << endl;
    hero1.stat.hp = hero1.stat.hp - 500;
    cout << hero1.nama << " terkena serang, hp nya menurun menjadi: " << hero1.stat.hp << endl;
    cout << hero1.nama << " HP: " << hero1.stat.hp << endl;
    int TotalAttack = hero1.stat.attack + hero2.stat.attack;
    cout << "Total attack " << hero1.nama << " dan " << hero2.nama << " adalah: " << TotalAttack << endl;
    return 0;
}