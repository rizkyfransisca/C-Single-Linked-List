#include <iostream>
#include "perpus.h"

using namespace std;
/**
    Nama: Kadek Rizky Fransisca Putra
    NIM : 1301194035
**/
int main()
{
    List L;
    address ad, adbaru;
    buatList(L);
    buatElemen(ad, "id01", "buku1", "anna", "Informatika", 2017); //setiap ada ad berarti buat kotak cuy karena P menunjuk ad dan P membuat kotak baru
    tambahDataTerakhir(L, ad);
    buatElemen(ad, "id03", "buku3", "cikita", "gramedia", 2018);
    tambahDataTerakhir(L, ad);
    lihatList(L);

    ad = cariElemen(L, "Informatika");
    buatElemen(adbaru, "id02", "buku2", "bana", "Informatika", 2018); //kalo adbaru harus sama ad baru juga dong
    tambahDataSetelah(L, ad, adbaru);
    lihatList(L);

    ad = cariElemen(L, "penerbit");
    buatElemen(adbaru, "id05", "buku5", "wafa", "Informatika", 2018);
    tambahDataSetelah(L, ad, adbaru);
    lihatList(L);

    hapusDataTerakhir(L, ad);
    lihatList(L);

    cout<<"Jumlah buku yang terbit sebelum tahun 2015 yaitu " << jumBuku(L, 2015)<<endl;
    cout<<"Jumlah buku yang terbit sebelum tahun 2018 yaitu " << jumBuku(L, 2018)<<endl;
    return 0;
}
