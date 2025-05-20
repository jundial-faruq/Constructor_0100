#include <iostream>
using namespace std;

class barang{
private:
    string Nama;
    int kodeBarang;
public:
barang(string iNama,int ikodeBarang) {
    Nama = iNama;
    kodeBarang = ikodeBarang;
}
void output(){
        cout << "Nama Barang : " << Nama << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main(){
    barang brg("Rayhan Fatih Ramadhani", 9999);
    brg.output();

    return 0;
}