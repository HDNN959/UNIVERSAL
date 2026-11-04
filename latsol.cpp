#include <iostream>
using namespace std;

struct Mahasiswa {string nama; string nim; int umur; };

int main(){

    Mahasiswa mhs1;
    mhs1.nama = "Joseph Joestar";
    mhs1.nim = "123456789";
    mhs1.umur = 19;
    cout << "=====Mahasiswa=====" << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "NIM  : " << mhs1.nim << endl;
    cout << "Umur : " << mhs1.umur << endl;



    return 0;
}