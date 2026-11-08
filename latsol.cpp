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

        cout << "=====SOAL 2.1=====" << endl;
        int total = 0;
        for (int i = 1; i <= 30; i++){
            if (i % 5 == 0){
                total += i;
            }

        }
        cout << total << " " << endl;

    return 0;
}