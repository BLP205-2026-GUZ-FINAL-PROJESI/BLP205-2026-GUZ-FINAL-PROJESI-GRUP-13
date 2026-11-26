#ifndef ORTAK_H
#define ORTAK_H

#include <string>

// Kitap kaydi: Modul 1 ve Modul 3 ortak kullanir
struct Kitap {
    int id;
    std::string ad;
    std::string yazar;
    int sayfa;
    Kitap* next;
    Kitap* prev;
};

// Kullanicidan sayi okur, hatali giriste tekrar sorar
int sayiOku();

// Kullanicidan bosluk iceren bir satir okur, bos giriste tekrar sorar
std::string metinOku();

#endif
