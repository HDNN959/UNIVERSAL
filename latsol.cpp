#include <iostream>
using namespace std;

// struct Stat{
//     int attack;
//     int hp;
// };
struct Stat { int attack; int hp; };

struct Hero{
    string lane;
    string role;
    Stat stat;
};

int main(){
    Hero Alucard;
    Alucard.lane = "Junggle";
    Alucard.role = "Assasin";
    Alucard.stat.attack = 157;
    Alucard.stat.hp = 5000;
    
    Hero Edith = {"ExpLane", "Fighter/Mage", 150, 6000};

    cout << endl << "===Alucard===" << endl;
    cout << "Lane: " << Alucard.lane << endl;
    cout << "Role: " << Alucard.role << endl;
    cout << "Attack: " << Alucard.stat.attack << endl;
    cout << "HP: " << Alucard.stat.hp << endl;
    cout << endl;
    cout << "===Edith===" << endl;
    cout << "Lane: " << Edith.lane << endl;
    cout << "Role: " << Edith.role << endl;
    cout << "Attack: " << Edith.stat.attack << endl;
    cout << "HP: " << Edith.stat.hp << endl;



    return 0;
}