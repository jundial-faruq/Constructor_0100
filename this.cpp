#include <iostream>
using namespace std;

class buku{
    string Judul;

    public:
        string setget(string jdl){
            this->Judul = jdl; // nilai parameter "judul" untuk member variable "judul"
            return this->Judul; // return variable judul0.
        }
    
    public:
        buku setJudul(string judul){
            this->Judul = judul;
            return *this; //chain fuction

        }
        string getJudul(){
            return this->Judul;
        }

};

int main()
{
    buku bukunya;
    cout<<bukunya.setJudul("Matematika").getJudul(); // cain fuction calls
    return 0;
}


