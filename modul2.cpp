#include <iostream>
#include <string>
#include "modul2.h"
using namespace std;

// Yigin dugumu: bir islem kaydi ve altindaki dugum
struct Islem {
    string aciklama;
    Islem* alt;
};

Islem* yiginTepe = NULL;  // yiginin en ustu, bossa NULL

// Yeni islemi yiginin en ustune ekler
void stackPush(string yazi) {
    Islem* yeni = new Islem;
    yeni->aciklama = yazi;
    yeni->alt = yiginTepe;
    yiginTepe = yeni;
}

// En ustteki islemi gosterir, yigindan cikarmaz
void stackPeek() {
    if (yiginTepe == NULL) {
        cout << "Yigin bos." << endl;
        return;
    }
    cout << "En ustteki islem: " << yiginTepe->aciklama << endl;
}

// En ustteki islemi yigindan cikarir ve bellekten siler
void stackPop() {
    if (yiginTepe == NULL) {
        cout << "Yigin bos, cikarilacak islem yok." << endl;
        return;
    }
    Islem* silinecek = yiginTepe;
    cout << "Cikarildi: " << silinecek->aciklama << endl;
    yiginTepe = yiginTepe->alt;
    delete silinecek;
}

// Yigini en usten en alta dogru listeler
void stackListele() {
    if (yiginTepe == NULL) {
        cout << "Yigin bos." << endl;
        return;
    }
    Islem* gecici = yiginTepe;
    while (gecici != NULL) {
        cout << gecici->aciklama << endl;
        gecici = gecici->alt;
    }
}

// Program kapanirken tum dugumleri bellekten siler
void stackTemizle() {
    while (yiginTepe != NULL) {
        Islem* silinecek = yiginTepe;
        yiginTepe = yiginTepe->alt;
        delete silinecek;
    }
}

// Kuyruk dugumu: odunc kitap bekleyen ogrenci kaydi
struct Ogrenci {
    string ogrenciNo;
    string adSoyad;
    string kitap;
    Ogrenci* sonraki;
};

Ogrenci* kuyrukBas = NULL;  // siradaki ilk ogrenci
Ogrenci* kuyrukSon = NULL;  // siranin en sonundaki ogrenci

// Ogrenciyi siranin sonuna ekler
void queueEnqueue(string ogrenciNo, string adSoyad, string kitap) {
    Ogrenci* yeni = new Ogrenci;
    yeni->ogrenciNo = ogrenciNo;
    yeni->adSoyad = adSoyad;
    yeni->kitap = kitap;
    yeni->sonraki = NULL;

    if (kuyrukBas == NULL) {
        kuyrukBas = yeni;
    } else {
        kuyrukSon->sonraki = yeni;
    }
    kuyrukSon = yeni;
}

// Siradaki ilk ogrenciye hizmet verir ve siradan cikarir
void queueDequeue() {
    if (kuyrukBas == NULL) {
        cout << "Sira bos, bekleyen ogrenci yok." << endl;
        return;
    }
    Ogrenci* silinecek = kuyrukBas;
    cout << "Hizmet verildi: " << silinecek->adSoyad
         << " (" << silinecek->ogrenciNo << ") - " << silinecek->kitap << endl;
    kuyrukBas = kuyrukBas->sonraki;
    if (kuyrukBas == NULL) {
        kuyrukSon = NULL;
    }
    delete silinecek;
}

// Sirayi bastan sona (ilk gelen ilk sirada) listeler
void queueListele() {
    if (kuyrukBas == NULL) {
        cout << "Sira bos." << endl;
        return;
    }
    Ogrenci* gecici = kuyrukBas;
    int sira = 1;
    while (gecici != NULL) {
        cout << sira << ". " << gecici->adSoyad << " (" << gecici->ogrenciNo
             << ") - " << gecici->kitap << endl;
        gecici = gecici->sonraki;
        sira++;
    }
}

// Program kapanirken kuyruktaki tum dugumleri bellekten siler
void queueTemizle() {
    while (kuyrukBas != NULL) {
        Ogrenci* silinecek = kuyrukBas;
        kuyrukBas = kuyrukBas->sonraki;
        delete silinecek;
    }
    kuyrukSon = NULL;
}
