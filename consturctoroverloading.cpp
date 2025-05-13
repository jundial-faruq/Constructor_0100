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

int main(){
    mahasiswa mhs1(102030); // hanya nim
    mahasiswa mhs2("Andi"); // hanya nama
    mahasiswa mhs3(010203, "Santi"); // nim dan nama

    //tampilan nilai
    cout << "Mahasiswa 1:"; mhs1.cetak();
    cout << "Mahasiswa 2:"; mhs2.cetak();
    cout << "Mahasiswa 3:"; mhs3.cetak();

    return 0;
}