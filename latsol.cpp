#include <iostream>
using namespace std;

int main(){
    // cout << "=====SOAL 1.1=====" << endl;
    // for (int i = 1; i <= 10; i++){
    //     cout << i << " ";
    // }
    // cout << endl << endl;
    
    // cout << "=====SOAL 1.2=====" << endl;
    // for (int j = 10; j >= 1; j--){
    //     cout << j << " ";
    // }
    // cout << endl << endl;
    
    // cout << "=====SOAL 1.3=====" << endl;
    // int k = 1;
    // while (k <= 10){
    //     cout << k << " ";
    //     k++;
    // }
    // cout << endl << endl;
    
    // cout << "=====SOAL 1.4=====" << endl;
    // int total = 0;
    // for (int i = 1; i <= 20; i++){
    //     total += i;
    // }
    // cout << "Jumlah total: " << total << endl;
    // cout << endl << endl;
    
    // cout << "=====SOAL 1.5=====" << endl;
    // for (int i = 1; i <= 15; i++){
        //     if (i % 3 == 0) continue;
        //     if (i == 12) break;
        //     cout << i << " ";
        // }
        // cout << endl << endl;
        
        // cout << "=====SOAL 2.1=====" << endl;
        // int total = 0;
        // for (int i = 1; i <= 30; i++){
        //     if (i % 5 == 0){
        //         total += i;
        //     }
        // }
        // cout << total << endl;
        // cout << endl;

        // cout << "=====SOAL 2.2=====" << endl;
        // int n;
        // cout << "Ketik sebuah angka: ";
        // cin >> n;
        // int i = 1;
        // while (i <= 10){
        //     cout << i << " x "<< n << " = "<< i * n << endl;
        //     i++;
        // }
        // cout << endl;

        // cout << "=====SOAL 2.3=====" << endl;
        // int jumlah;
        // int Total = 0;
        // int harga;
        // cout << "Masukan jumlah barang: ";
        // cin >> jumlah;
        // for (int j = 1; j <= jumlah; j++){
        //     cout << "Harga barang ke-" << j << ": ";
        //     cin >> harga;
        //     Total += harga;
        // }
        // cout << "Total jumlah barang : " << jumlah << endl;
        // cout << "Total harga         :"  << Total << endl;
        // cout << endl;

        // cout << "=====SOAL 2.4=====" << endl;
        // int Jumlah;
        // double ToTal = 0;
        // double nilai;
        // cout << "Jumlah nilai: ";
        // cin >> Jumlah;
        // for (int i = 1; i <= Jumlah; i++){
            //     cout << "Nilai ke-" << i << ": ";
            //     cin >> nilai;
            //     ToTal += nilai;
            // }
            // double rata = ToTal / Jumlah;
            // cout << "Rata-rata: " << rata;

            cout << "=====SOAL 3.1=====" << endl;
            for (int i = 1; i <= 3; i++){
                for (int j = 1; j <= 7; j++){
                    cout << "* ";
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
                    cout << "* ";
                }
                cout << endl;
            }
            cout << endl;
            
            cout << "=====SOAL 3.3=====" << endl;
            int x;
            cout << "Masukan nilai x: ";
            cin >> x;
            for (int i = 1; i <= x; i++){
                for (int j = 1; j <= i; j++){
                    cout << j << " ";
                }
                cout << endl;
            }
            cout << endl;
    return 0;
}