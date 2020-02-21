#include <iostream>
#include "perpus.h"

using namespace std;

void buatList(List &L){
    L.first = NULL;
    L.last = NULL;
}
bool listKosong(List L){
    bool cek;
    if(L.first==NULL){
        cek = true;
    }
    else {
       cek = false;
    }
    return cek;
}
address cariElemen(List L, string X){
    address bantuan = L.first;
    bool ketemu = false;
    while(bantuan != NULL && !ketemu){
        if(bantuan->info.penerbit == X){
            ketemu = true;
        }else {
            bantuan = bantuan->next;
        }
    }
    return bantuan;
}
void buatElemen(address &P, string ID, string judul,string pengarang, string penerbit, int Tahun){
    P = new elmlist;
    P->info.ID = ID;
    P->info.pengarang = pengarang;
    P->info.judul = judul;
    P->info.penerbit = penerbit;
    P->info.Tahun = Tahun;
    P->next = NULL;
}
void tambahDataTerakhir(List &L, address P){ // P adalah kotak baru
    if(!listKosong(L)){
        L.last->next = P; // P adalah kotak baru
    }else{
        L.first = P;
    }
    L.last = P;
}
void tambahDataSetelah(List &L, address Prec, address P){
    if(!listKosong(L)&& Prec != NULL){
        if(L.last == Prec){
            L.last = P;
        }else{
            P->next = Prec->next;
        }
        Prec->next = P;
    }
}
void hapusDataTerakhir(List &L, address &P) {
    /** address P penganti bantuan 2 **/
    address bantuan = L.first;
    while(bantuan->next->next!=NULL){
        bantuan = bantuan->next;
    }
    P = bantuan->next;
    L.last = bantuan;
    bantuan->next = NULL;
}
void lihatList(List L){
    address bantuan;
    bantuan = L.first;
    while(bantuan != NULL){
        cout<<bantuan->info.ID<<", "<<bantuan->info.judul<<", "<<bantuan->info.pengarang<<endl;
        bantuan = bantuan->next;
    }
    cout<<endl;
}
int jumBuku(List L, int thn){
    int i = 0;
    address bantuan = L.first;
    while(bantuan!=NULL){
        if(bantuan->info.Tahun <= thn){
            i++;
        }
        bantuan = bantuan ->next;
    }
    return i;
}
