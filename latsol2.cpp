#include <iostream>
using namespace std;

int main(){
    cout << "=====SOAL 1.1=====" << endl;
    for (int i = 1; i <= 8; i++){
        cout << "Lampu menyala ke-" << i << endl;
    }
    cout << endl;

    cout << "=====SOAL 1.2=====" << endl;
    for (int i = 10; i >= 1; i--){
        cout << i << endl;
    }
    cout << "Luncurkan!" << endl;
    cout << endl;
    
    cout << "=====SOAL 1.3=====" << endl;
    int i = 2;
    while (i <= 20){
        cout << i << " ";
        i+=2;
    }
    cout << endl << endl;


    return 0;
}