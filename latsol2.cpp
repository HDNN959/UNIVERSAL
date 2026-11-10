#include <iostream>
using namespace std;

int main(){
    // cout << "=====SOAL 1.1=====" << endl;
    // for (int i = 1; i <= 8; i++){
    //     cout << "Lampu menyala ke-" << i << endl;
    // }
    // cout << endl;

    // cout << "=====SOAL 1.2=====" << endl;
    // for (int i = 10; i >= 1; i--){
    //     cout << i << endl;
    // }
    // cout << "Luncurkan!" << endl;
    // cout << endl;
    
    // cout << "=====SOAL 1.3=====" << endl;
    // int k = 2;
    // while (k <= 20){
    //     cout << k << " ";
    //     k+=2;
    // }
    // cout << endl << endl;
    
    // cout << "=====SOAL 1.4=====" << endl;
    // int total = 0;
    // int uang = 5000;
    // for (int i = 1; i <= 12; i++){
    //     total += uang;
    // }
    // cout << "Total tabungan: " << total << endl;
    // cout << endl;
    
    // cout << "=====SOAL 1.5=====" << endl;
    // for (int i = 1; i <= 15; i++){
        //     if (i % 4 == 0) continue;
        //     if (i == 13) break;
        //     cout << i << " ";
        // }


        cout << "=====SOAL 2.1=====" << endl;
        int tamu;
        int nilai;
        int total = 0;
        cout << "Masukan jumlah tamu: ";
        cin >> tamu;
        for (int i = 1; i <= tamu; i++){
            cout << "Nilai tamu ke-" << i << ": ";
            cin >> nilai;
            total += nilai;
        }
        cout << "Total nilai kado: " << total << endl << endl;
        
        cout << "=====SOAL 2.2=====" << endl;
        int n;
        cout << "Masukan nilai n: ";
        cin >> n;
        for (int i = 1; i <= 10; i++){
            cout << i * n << " ";
        }
        cout << endl << endl;
        
        cout << "=====SOAL 2.3=====" << endl;
        int hitung = 0;
        for (int i = 1; i <= 30; i++){
            if (i % 2 == 0) hitung++;
        }
        cout << "Jumlah bilangan genap: " << hitung;
    return 0;
}