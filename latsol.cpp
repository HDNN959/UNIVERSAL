#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama; 
    string nim; 
    int umur; 
};
struct Buku { string judul; string penulis; int tahun; };


int main(){
    Mahasiswa mhs1;
    mhs1.nama = "Joseph Joestar";
    mhs1.nim = "123456789";
    mhs1.umur = 19;
    cout << "=====SOAL 1.1=====" << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "NIM  : " << mhs1.nim << endl;
    cout << "Umur : " << mhs1.umur << endl << endl;
    
    Buku buku1, buku2;
    buku1.judul = "Phantom Blood";
    buku1.penulis = "Hirohito Araki";
    buku1.tahun = 1986;
    buku2.judul = "One Piece";
    buku2.penulis = "Eiichiro Oda";
    buku2.tahun = 1997;
    cout << "=====SOAL 1.2=====" << endl;
    cout << "===Buku1===" << endl;
    cout << "Judul    : " << buku1.judul << endl;
    cout << "Penulis  : " << buku1.penulis << endl;
    cout << "Tahun    : " << buku1.tahun << endl;
    cout << "===Buku2===" << endl;
    cout << "Judul    : " << buku2.judul << endl;
    cout << "Penulis  : " << buku2.penulis << endl;
    cout << "Tahun    : " << buku2.tahun << endl;




    return 0;
}