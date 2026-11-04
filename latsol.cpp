#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa { string nama; string nim; int umur; };

int main(){
    Mahasiswa mhs1;
    cout << "===== SOAL 2.1 =====" << endl;
    cout << "Masukan nama : ";
    getline(cin, mhs1.nama); 
    cout << "Masukan NIM : ";
    cin, mhs1.nim;
    cout << "Masukan umur : ";
    cin, mhs1.umur;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "NIM  : " << mhs1.nim << endl;
    cout << "Umur : " << mhs1.umur << endl;

    
    return 0;
}