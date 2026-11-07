#include <iostream>
#include <string>
using namespace std;

struct Alamat { string kota; string jalan; };
struct Mahasiswa { string nama; Alamat alamat; };

int main(){
    Mahasiswa mhs1;
    mhs1 = { "Jotaro", "Malang", "Masrtrip" };
    return 0;
}