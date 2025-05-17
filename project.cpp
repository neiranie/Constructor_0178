#include <iostream>
#include <string>
using namespace std;

class Buku;
class Peminjam;
class Petugas;
class Admin;

class Buku{
private:
    string judul;
    string penulis;
    char dipinjam; // 'Y' untuk dipinjam, 'N' untuk tidak dipinjam

    void setDipinjam(char status){
        dipinjam = status;
    }
};