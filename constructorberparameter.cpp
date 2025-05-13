#include <iostream>
using namespace std;

class mahasiswa{
    public:
        mahasiswa (int nim, string nama);
    };

    mahasiswa::mahasiswa(int nim, string nama){
        cout << "Constructor Dengan Berparameter Terpanggil" << endl;
        cout << "NIM    : " << nim << endl;
        cout << "Nama   : " << nama << endl;
    }
    
int main(){
   return 0;
}