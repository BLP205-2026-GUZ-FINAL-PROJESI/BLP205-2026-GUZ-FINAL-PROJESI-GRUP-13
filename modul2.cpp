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
