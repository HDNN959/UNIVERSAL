#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa { string nama; string nim; int umur; };
struct Hero { string Nama; int hp; };

int main(){
    Mahasiswa mhs1;
    cout << "===== SOAL 2.1 =====" << endl;
    cout << "Masukan nama : ";
    getline(cin, mhs1.nama); 
    cout << "Masukan NIM : ";
    cin >> mhs1.nim;
    cout << "Masukan umur : ";
    cin >> mhs1.umur;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "NIM  : " << mhs1.nim << endl;
    cout << "Umur : " << mhs1.umur << endl << endl;
    
    cout << "===== SOAL 2.2 =====" << endl;
    Hero daftar[3] = {
        {"Alucard", 3000}, 
        {"Alpha", 3450}, 
        {"Zetian", 2500}
    };
    for (int i = 0; i <= 2; i++){
        cout << daftar[i].Nama << " HP: " << daftar[i].hp << endl;
    }
    cout << endl;

    cout << "===== SOAL 2.3 =====" << endl;
    int idxTerbesar = 0;
    for (int i = 0; i <= 2; i++){
        if (daftar[i].hp > daftar[idxTerbesar].hp){
            idxTerbesar = i;
        }
    }
    cout << daftar[idxTerbesar].Nama << endl;
    return 0;
}