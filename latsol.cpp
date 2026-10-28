#include <iostream>
using namespace std;

struct kepdes{
    string nama;
    int umur;
    string kelamin;
};

struct desa{
    string nama;
    int sejak;
    kepdes pengurus1;
    kepdes pengurus2;
};

int main(){
    kepdes kepdes1, kepdes2;
    kepdes1.nama = "Jonathan";
    kepdes1.kelamin = "Laki-laki";
    kepdes1.umur = 27;
    kepdes2.nama = "Lisa";
    kepdes2.kelamin = "Perempuan";
    kepdes2.umur = 20;

    desa desa1, desa2;
    desa1.nama = "Sukodono";
    desa1.sejak = 1995;
    desa1.pengurus1 = kepdes1;
    desa2.nama = "Sukorame";
    desa2.sejak = 1981;
    desa2.pengurus2 = kepdes2;

    cout << "===============" << endl;
    cout << "   " << desa1.nama << " " << endl;
    cout << "===============" << endl;
    cout << "Di kepalai oleh: " << desa1.pengurus1.nama << endl;
    cout << "Umur: " << desa1.pengurus1.umur << endl;
    cout << "Berkelamin: " << desa1.pengurus1.kelamin << endl;
    cout << "Sudah berdiri sejak: " << desa1.sejak << endl;

    return 0;
}
