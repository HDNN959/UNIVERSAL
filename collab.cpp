#include <iostream>
using namespace std;

struct Hero { string nama; int hp; };
Hero daftar[3] = { {"Alucard", 3000}, {"Masha", 3300}, {"Zhuxin", 2400} };

int main(){
    
    for (int i = 0; i <= 2; i++){
        cout << daftar[i].nama << " HP: " << daftar[i].hp << endl;
    }

    return 0;
}