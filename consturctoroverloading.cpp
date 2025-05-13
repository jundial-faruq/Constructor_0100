#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
        int nim;
        string nama;
    public:
        mahasiswa();
        mahasiswa(int);
        mahasiswa(string);
        mahasiswa(int iNim, string iNama);
        void cetak();
    
};

mahasiswa :: mahasiswa(int iNim){
    nim = iNim; // definisi hanya nim
}

mahasiswa :: mahasiswa(int iNama){
    nim = iNama; // definisi hanya nama
}

mahasiswa :: mahasiswa(int iNim, string iNama){
    nim = iNim; // definisi hanya nim
    nama = iNama;
}

void mahasiswa::cetak(){
    cout << endl << "NIM = " << nim << endl;
    cout << "Nama = " << nama << endl;
}