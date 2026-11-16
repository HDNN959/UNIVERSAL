#include <iostream>
using namespace std;

struct Hero { string nama; int hp; };
Hero daftar[4] = { {"Alucard", 3000}, {"Masha", 3300}, {"Zhuxin", 2400} };

struct Mahasiswa { string nama; double nilai; };
Mahasiswa mhs[3];

int main(){
    int idxTerbesar = 0;
    cout << "=====BENTUK 1=====" << endl;
    for (int i = 0; i <= 3; i++){
        cout << daftar[i].nama << " HP: " << daftar[i].hp << endl;
    }
    for (int i = 0; i < 3; i++){
        if (daftar[i].hp > daftar[idxTerbesar].hp){
            idxTerbesar = i;
        }
    }
    cout << "HP terbesar adalah "<<daftar[idxTerbesar].nama << endl;
    cout << endl;
    
    cout << "=====BENTUK 2=====" << endl;
    double total = 0;
    double average;
    int lulus = 0;
    for (int i = 0; i < 3; i++){
        cout << "Nama Mahasiswa ke-" << i + 1 << ": ";
        cin >> mhs[i].nama;
        cout << "Nilai: ";
        cin >> mhs[i].nilai;
        total += mhs[i].nilai;
    }
    for (int i = 0; i < 3; i++){
        if (mhs[i].nilai >= 60){
            lulus++;
        }
    }

    average = total / 3;
    cout << "Nilai rata-rata: " << average << endl;
    cout << "Jumlah Mahasiswa lulus: " << lulus << endl;
    cout << endl;
    
    // cout << "=====BENTUK 3=====" << endl;


    return 0;
}