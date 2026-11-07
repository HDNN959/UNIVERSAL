#include <iostream>
using namespace std;

int main() {
    // for (int i = 1; i <= 5; i++){
    //     cout << "Perulangan ke-" << i;
    // }
    // cout << endl;

    // int i = 10;
    // while (i < 5){
    //     cout << "tida pernah tercetak";
    // }

    // for (int i = 1; i <= 10; i++){
    //     if (i == 5) continue;
    //     if (i == 8) break;
    //     cout << "Angka: " << i << endl;
    // }

    // int total = 10;
    // for (int i = 1; i <= 10; i++){
    //     total += i;
    //     cout << total << endl;
    // }
    // cout << "Jumlah total = "<< total << endl;

    // int n = 5;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= 6; i++){
        if (i == 2) continue;
        if (i == 5) break;
        cout << i << " ";
    }
    return 0;
}