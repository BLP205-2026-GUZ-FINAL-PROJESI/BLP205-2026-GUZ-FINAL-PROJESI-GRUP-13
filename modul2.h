#ifndef MODUL2_H
#define MODUL2_H

#include <string>

void stackPush(std::string yazi);
void stackPeek();
void stackPop();
void stackListele();
void stackTemizle();

void queueEnqueue(std::string ogrenciNo, std::string adSoyad, std::string kitap);
void queueDequeue();
void queueListele();
void queueTemizle();

#endif
