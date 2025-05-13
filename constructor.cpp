#include <iostream>
using namespace std;

class mahasiswa{
    public:
        mahasiswa();
};

mahasiswa::mahasiswa(){
    cout << "Constructor Terpanggil" << endl;
};

int main(){
    mahasiswa mhs; // pembuatan objek

    return 0;

}