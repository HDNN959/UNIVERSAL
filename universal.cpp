#include <iostream>
using namespace std;

int main(){

    // int counter = 1;
    // while (counter <= 6) {
    //     cout << "C++" << endl;
    //     counter += 2;
    // } 


    int luas_kandang = 12;
    //int nomer_baris = 1;
    int total_bulan = 0;
    int total_luas_kandang = luas_kandang;

    while (total_bulan < 10) {
        luas_kandang +=7;
        total_luas_kandang += luas_kandang;

        total_bulan +=1;
        //cout << nomer_baris << ": " << luas_kandang << endl;
        //nomer_baris +=1;
        cout << "Total luas kandang: " << total_luas_kandang << " pada bulan ke: " << total_bulan << endl;
    }


    return 0;
}