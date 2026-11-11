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


    // cout << "=====SOAL 2.1=====" << endl;
    // int tamu;
    // int nilai;
    // int total = 0;
    // cout << "Masukan jumlah tamu: ";
        // cin >> tamu;
        // for (int i = 1; i <= tamu; i++){
        //     cout << "Nilai tamu ke-" << i << ": ";
        //     cin >> nilai;
        //     total += nilai;
        // }
        // cout << "Total nilai kado: " << total << endl << endl;
        
        // cout << "=====SOAL 2.2=====" << endl;
        // int n;
        // cout << "Masukan nilai n: ";
        // cin >> n;
        // for (int i = 1; i <= 10; i++){
        //     cout << i * n << " ";
        // }
        // cout << endl << endl;
        
        // cout << "=====SOAL 2.3=====" << endl;
        // int hitung = 0;
        // for (int i = 1; i <= 30; i++){
        //     if (i % 2 == 0) hitung++;
        // }
        // cout << "Jumlah bilangan genap: " << hitung << endl << endl;

        // cout << "=====SOAL 2.4=====" << endl;
        // int hari;
        // double suhu;
        // double total_suhu = 0;
        // double average;
        // cout << "Masukan jumlah hari: ";
        // cin >> hari;
        // for (int i = 1; i <= hari; i++){
            //     cout << "Suhu hari ke " << i << " : ";
            //     cin >> suhu;
            //     total_suhu += suhu;
            // }
            // average = total_suhu / hari;
            // cout << "Rata-rata suhu: " << average;
            
    cout << "=====SOAL 3.1=====" << endl;
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 6; j++){
            cout << "# ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "=====SOAL 3.2=====" << endl;
    int n;
    cout << "Masukan nilai n: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "=====SOAL 3.3=====" << endl;
    int z = 5;
    for (int i = z; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "=====SOAL 3.4=====" << endl;
    int x = 4;
    for (int i = 1; i <= x; i++){
        for (int s = 3; s >= i; s--){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}