#include <iostream>
using namespace std;

// struct kepdes{
//     string nama;
//     int umur;
//     string kelamin;
// };

// struct desa{
//     string nama;
//     int sejak;
//     kepdes pengurus1;
//     kepdes pengurus2;
// };

struct aktor {
    string nama;
    int tahun;
    string asal;
};

struct film {
    string judul;
    string genre;
    int tahun;
    aktor pemeran1;
    aktor pemeran2;
    aktor pemeran3;
};




int main(){
    aktor aktor1, aktor2;
    film film1, film2, film3;
    aktor1.nama = "Giorno";
    aktor1.asal = "Surabaya";
    aktor1.tahun = 1987;
    aktor2.nama = "Buciarati";
    aktor2.asal = "Bandung";
    aktor2.tahun = 1970;

    film1.pemeran1 = aktor1;
    film2.pemeran2 = aktor2;
    film3.pemeran3 = aktor1, aktor2;

    film1.judul = "Stardust Crusader";
    film1.genre = "Petualangan";
    film1.tahun = 2008;
    

    // kepdes kepdes1, kepdes2;
    // kepdes1.nama = "Jonathan";
    // kepdes1.kelamin = "Laki-laki";
    // kepdes1.umur = 27;
    // kepdes2.nama = "Lisa";
    // kepdes2.kelamin = "Perempuan";
    // kepdes2.umur = 20;

    // desa desa1, desa2;
    // desa1.nama = "Sukodono";
    // desa1.sejak = 1995;
    // desa1.pengurus1 = kepdes1;
    // desa2.nama = "Sukorame";
    // desa2.sejak = 1981;
    // desa2.pengurus2 = kepdes2;

    // cout << endl;
    // cout << "===============" << endl;
    // cout << "=   " << desa1.nama << " =" << endl;
    // cout << "===============" << endl;
    // cout << "Di kepalai oleh: " << desa1.pengurus1.nama << endl;
    // cout << "Umur: " << desa1.pengurus1.umur << endl;
    // cout << "Berkelamin: " << desa1.pengurus1.kelamin << endl;
    // cout << "Sudah berdiri sejak: " << desa1.sejak << endl;
    
    // cout << endl;
    
    // cout << "===============" << endl;
    // cout << "=   " << desa2.nama << " =" << endl;
    // cout << "===============" << endl;
    // cout << "Di kepalai oleh: " << desa2.pengurus2.nama << endl;
    // cout << "Umur: " << desa2.pengurus2.umur << endl;
    // cout << "Berkelamin: " << desa2.pengurus2.kelamin << endl;
    // cout << "Sudah berdiri sejak: " << desa2.sejak << endl;

    return 0;
}
