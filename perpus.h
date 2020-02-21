#ifndef PERPUS_H_INCLUDED
#define PERPUS_H_INCLUDED
#include <iostream>


using namespace std;
struct buku{
    string ID,judul,pengarang,penerbit;
    int Tahun;

};
typedef struct buku infotype;
typedef struct elmlist *address;
struct elmlist {
    infotype info;
    address next;
};
struct List{
    address first;
    address last;
};
void buatList(List &L);
bool listKosong(List L);
address cariElemen(List L, string X);
void buatElemen(address &P, string ID, string judul, string pengarang, string penerbit, int Tahun);
void tambahDataTerakhir(List &L, address P);
void tambahDataSetelah(List &L, address Prec, address P);
void hapusDataTerakhir(List &L, address &P);
void lihatList(List L);
int jumBuku(List L, int thn);

#endif // PERPUS_H_INCLUDED
