#include <iostream>
using namespace std;

struct Hero{
    string lane;
    string role;
};

int main(){
    Hero Alucard;
    Alucard.lane = "Junggle";
    Alucard.role = "Assasin";
    
    Hero Edith = {"ExpLane", "Fighter/Mage"};

    cout << endl << "===Alucard===" << endl;
    cout << "Lane: " << Alucard.lane << endl;
    cout << "Role: " << Alucard.role << endl;
    cout << endl;
    cout << "===Edith===" << endl;
    cout << "Lane: " << Edith.lane << endl;
    cout << "Role: " << Edith.role << endl;



    return 0;
}