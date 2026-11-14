#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukan nomor punggung: ";
    cin >> n;

    bool prima = true;

    if (n < 2){
        prima = false;
    }

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            prima = false;
            break;
        }
    }

    if (prima == true){
        cout << n << " adalah bilangan prima" << endl;
    } else {
        cout << n << " bukan bilangan prima" << endl;
    }
    
    return 0;
}