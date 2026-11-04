#include <iostream>
using namespace std;

// struct Stat { int attack; int hp; };

// struct Hero{
//     string lane;
//     string role;
//     Stat stat;
// };

// enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};
// enum level {MUDAH = 1, SEDANG = 3, SULIT = 5, EKSTRIM = 10};

struct Aktor { string nama; int umur; };

struct Film {
    string judul;
    string genre;
    int tahun;
    Aktor aktor;
};

int main(){
    Aktor pemeran1, pemeran2;
    Film film1, film2, film3;
    
    film1.judul = "Battel tendency";
    film1.genre = "Pertarungan";
    film1.tahun = 2001;
    film1.aktor = pemeran1;

    


    // Hero Alucard;
    // Alucard.lane = "Junggle";
    // Alucard.role = "Assasin";
    // Alucard.stat.attack = 157;
    // Alucard.stat.hp = 5000;
    
    // Hero Edith = {"ExpLane", "Fighter/Mage", 150, 5000};

    // cout << endl << "===Alucard===" << endl;
    // cout << "Lane: " << Alucard.lane << endl;
    // cout << "Role: " << Alucard.role << endl;
    // cout << "Attack: " << Alucard.stat.attack << endl;
    // cout << "HP: " << Alucard.stat.hp << endl;
    // cout << endl;
    // cout << "===Edith===" << endl;
    // cout << "Lane: " << Edith.lane << endl;
    // cout << "Role: " << Edith.role << endl;
    // Edith.stat.hp = Edith.stat.hp + 1000;   
    // cout << "Attack: " << Edith.stat.attack << endl;
    // cout << "HP: " << Edith.stat.hp << endl;

    // hari Today = RABU;
    // level Lvl = SULIT;

    // switch (Today){
    //     case SENIN: cout << "Awal Pekan" << endl;
    //     break;
    //     case RABU: cout << "Tengah Pekan" << endl;
    //     break;
    //     case JUMAT: cout << "Hampir Libur!" << endl;
    //     break;
    //     default: cout << "Hari Biasa" << endl;
    //     break;
    // } 
    
    // cout << "Hari ini: " << Today << endl;
    // cout << "Kesulitan: " << Lvl << endl;



    return 0;
}