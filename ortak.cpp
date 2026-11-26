#include <iostream>
#include <string>
#include "ortak.h"
using namespace std;

int sayiOku() {
    int sayi;
    while (!(cin >> sayi)) {
        cout << "Lutfen bir sayi girin: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');  // satirin kalanini temizler, sonraki metinOku bozulmasin
    return sayi;
}

string metinOku() {
    string metin;
    getline(cin, metin);
    while (metin == "") {
        cout << "Bos birakilamaz, tekrar girin: ";
        getline(cin, metin);
    }
    return metin;
}
