#include <iostream>
using namespace std;

int main(){

    // int counter = 1;
    // while (counter <= 6) {
    //     cout << "C++" << endl;
    //     counter += 2;
    // } 
    int luas_kandang = 12;
    int nomer_baris = 1;

    while (nomer_baris <= 3) {
        luas_kandang +=7;
        cout << nomer_baris << ": " << luas_kandang << endl;

        nomer_baris +=1;
    }
    return 0;
}