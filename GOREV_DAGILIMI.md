# Görev Dağılımı - Grup 13

**Proje:** Kampüs Kütüphanesi ve Öğrenci Hizmetleri Otomasyonu

**Ders:** BLP 205 Veri Yapıları

| Modül | Ad Soyad | Öğrenci No | GitHub |
|---|---|---|---|
| Modül 1: Bağlı listeler ve dosya işlemleri | - | - | - |
| Modül 2: Stack ve Queue | Muhammed Furkan Gençkurt | 202507012084 | mFurkanGenckurt |
| Modül 3: Sıralama ve arama | - | - | - |
| Modül 4: Graf ve kampüs rotası | - | - | - |

Grup üyeleri: Eren Norçin, Doğukan Yıldırım, Bora Sözen, Muhammed Furkan Gençkurt

Fonksiyon isimleri plandır, kod yazıldıkça gerçek adlarla güncellenecektir.

### Başlarken

1. Hocanın öğrenci mailine gönderdiği GitHub davetini kabul edin.
2. Yukarıdaki tablodan boş bir modül seçin. Bu dosyayı GitHub'da açıp kalem ikonuna basın, o modülün satırına adınızı, numaranızı ve GitHub adınızı yazıp kaydedin. Dolu satır alınmış demektir.
3. Aşağıda kendi modülünüzün bölümünü ve "Ana Menüye Bağlama" kısmını okuyun.
4. Kodunuzu kendi hesabınızdan yükleyin. Son kontrol tarihleri: 27 Kasım, 30 Kasım, 3 Aralık, 5 Aralık. Son teslim 6 Aralık.

---

## Modül 1 - Bağlı Listeler ve Dosya İşlemleri

**Sorumlu:** -

**Dosyalar:** `modul1.h`, `modul1.cpp`

**Fonksiyonlar:**
- Kitap kataloğu (çift yönlü doğrusal bağlı liste): `kitapBasaEkle`, `kitapSonaEkle`, `kitapArayaEkle` (verilen ID'den önce), `kitapSil` (ID'ye göre)
- Listeleme: `ileriListele` (next ile baştan sona), `geriListele` (prev ile sondan başa)
- Analiz: `katalogAnaliz` (toplam kitap, toplam sayfa, ortalama sayfa, en az ve en çok sayfalı kitap), `esikUstuListele` (sayfa eşiğini aşan kitaplar)
- Duyuru panosu (tek yönlü dairesel bağlı liste): `duyuruEkle`, `duyuruListele` (bir tam tur)
- Dosya: `dosyayaYaz` (alanlar `|` ile ayrılır), `dosyadanOku`
- Bellek: `katalogTemizle`, `duyuruTemizle`
- Menü ve veri: `modul1Menu`, `ornekKitaplariYukle`, `ornekDuyurulariYukle`

**Test edeceği bölümler:**
- Boş listede listeleme ve analiz hata vermeden mesaj gösteriyor
- Başa, sona ve hedef ID öncesine ekleme
- İlk, orta ve son düğümü silme; olmayan ID ile silme
- İleri ve geri listeleme aynı kayıtları ters sırada gösteriyor
- Dairesel listede bir tur sonra başa dönülüyor, sonsuz döngü yok
- Dosyaya yazılan kayıtlar okunup ekranda gösteriliyor

**Ortak çalışma:** Kitap listesinin başının (`kitapBas`) Modül 3 ile paylaşılması

---

## Modül 2 - Stack ve Queue

**Sorumlu:** Muhammed Furkan Gençkurt

**Dosyalar:** `modul2.h`, `modul2.cpp`

**Fonksiyonlar:**
- İşlem geçmişi (bağlı liste tabanlı yığın): `stackPush`, `stackPop`, `stackPeek`, `stackListele`
- Ödünç bekleme sırası (bağlı liste tabanlı kuyruk, öğrenci no, ad soyad ve istenen kitap): `queueEnqueue`, `queueDequeue`, `queueListele` (FIFO sırası)
- Bellek: `stackTemizle`, `queueTemizle`
- Menü ve veri: `modul2Menu`, `ornekIslemleriYukle`, `ornekOgrencileriYukle`

**Test edeceği bölümler:**
- Boş yığında Pop ve Peek, boş kuyrukta Dequeue mesaj gösteriyor
- Yığın son giren ilk çıkar (LIFO) sırasını koruyor
- Kuyruk ilk giren ilk çıkar (FIFO) sırasını koruyor

**Ortak çalışmalar:**
- Ana menü (`main.cpp`) ve modüllerin menüye bağlanması
- `ortak.h` / `ortak.cpp`: `Kitap` yapısı, `sayiOku` ve `metinOku`
- Geçersiz menü seçimi mesajları
- Çıkışta tüm modüllerin temizlik fonksiyonlarının çağrılması
- `README.md`, `GOREV_DAGILIMI.md`, `TEST_SENARYOLARI.md`
- Ekran görüntüleri (`ekran_goruntuleri/`)

---

## Modül 3 - Sıralama ve Arama

**Sorumlu:** -

**Dosyalar:** `modul3.h`, `modul3.cpp`

**Fonksiyonlar:**
- `listedenDiziyeAktar` (bağlı listedeki kitapları diziye kopyalama)
- `bubbleSortSayfa` (sayfa sayısına göre küçükten büyüğe, karşılaştırma ve takas sayısı)
- `insertionSortSayfa` (sayfa sayısına göre küçükten büyüğe, karşılaştırma ve kaydırma sayısı)
- `quickSortID` (ID'ye göre, karşılaştırma ve takas sayısı)
- `binarySearchID` (ID'ye göre sıralı dizide arama, bulundu/bulunamadı ve adım sayısı)
- `diziyiYazdir`, `modul3Menu`

**Test edeceği bölümler:**
- Üç sıralama yönteminin sonucu doğru ve sayaçlar raporlanıyor
- Binary Search bulunan ve bulunamayan ID ile deneniyor
- Boş katalogda sıralama ve arama hata vermiyor

**Ortak çalışma:** Modül 1 kitap listesiyle dizi entegrasyonu

---

## Modül 4 - Graf ve Kampüs Rota Analizi

**Sorumlu:** -

**Dosyalar:** `modul4.h`, `modul4.cpp`

**Kampüs modeli (6 birim):** Merkez Kütüphane, MYO Bilgisayar Laboratuvarı, Mühendislik Binası, Öğrenci İşleri, Yemekhane ve Sosyal Alan, Konferans Salonu. Kenar ağırlıkları yürüme mesafesidir.

**Fonksiyonlar:**
- `grafOlustur` (iki boyutlu komşuluk matrisi), `matrisYazdir` (tablo hâlinde)
- `bfsGezinme`, `dfsGezinme` (seçilen başlangıç biriminden)
- `dijkstraEnKisaYol` (başlangıç ve hedef seçilir, en kısa mesafe ve izlenen rota yazdırılır)
- `birimleriListele`, `modul4Menu`

**Test edeceği bölümler:**
- Komşuluk matrisi tablo olarak doğru gösteriliyor
- Farklı başlangıç birimleriyle BFS ve DFS
- En az bir Dijkstra rota sorgusu
- Geçersiz bina numarası girişinde mesaj gösteriliyor

**Ortak çalışma:** Kampüs örnek verisinin hazırlanması

---

## Modüller Arası Bağlantı

- **Modül 1 ve Modül 3:** Modül 3, Modül 1'in kitap listesini diziye aktarıp sıralar. `Kitap` yapısı `ortak.h` dosyasında hazırdır, iki modül de bu dosyayı `#include "ortak.h"` ile kullanır. Alan adları (`id`, `ad`, `yazar`, `sayfa`) değiştirilmez.
- **Modül 2 ve Modül 4:** Diğer modüllerden bağımsızdır.
- **Kullanıcı girişi:** Tüm modüller sayı okumak için `sayiOku()`, boşluk içerebilen metin (ad, kitap adı, duyuru) okumak için `metinOku()` kullanır. İkisi de `ortak.h` içindedir.
- **Ana menü:** Her modül kendi menü fonksiyonunu (`modul1Menu` ... `modul4Menu`) ve temizlik fonksiyonlarını (örnek: `katalogTemizle`) kendi `.h` dosyasına yazar, ana menü bunları çağırır.
- Modül 1 bitmeden Modül 3 kendi örnek kitap dizisiyle çalışabilir, entegrasyon sonra yapılır.

---

## Ana Menüye Bağlama

Her modül aynı şablonu kullanır. Örnek Modül 3 içindir, diğer modüllerde numara değişir.

`modul3.h`: sadece fonksiyon bildirimleri

```cpp
#ifndef MODUL3_H
#define MODUL3_H

void modul3Menu();

#endif
```

`modul3.cpp`: alt menü ve fonksiyonlar

```cpp
#include <iostream>
#include "ortak.h"
#include "modul3.h"
using namespace std;

void modul3Menu() {
    int secim;
    do {
        cout << "\n--- MODUL 3: SIRALAMA VE ARAMA ---\n";
        cout << "1. Bubble Sort (sayfa)\n";
        cout << "0. Ana menuye don\n";
        cout << "Seciminiz: ";
        secim = sayiOku();
        switch (secim) {
            case 1: /* bubbleSortSayfa(); */ break;
            case 0: break;
            default: cout << "Gecersiz secim\n";
        }
    } while (secim != 0);
}
```

Kurallar:
- Modül dosyalarında `main()` olmaz. `main()` sadece `main.cpp` içindedir.
- Kendi modülünüzü denemek için geçici bir `deneme.cpp` dosyası açıp içinde `main()` ile `modulXMenu()` çağırabilirsiniz. Bu dosya depoya yüklenmez.
- Modül 1, kitap listesinin başını `modul1.h` içinde `extern Kitap* kitapBas;` olarak paylaşır. Modül 3 listeye bu değişkenle ulaşır.

---

## Ortak Kurallar

- Her alt menüde ana menüye dönüş seçeneği (`0`) bulunur.
- `new` ile oluşturulan her düğüm için bir temizlik fonksiyonu yazılır.
- Hatalı girişlerde (geçersiz seçim, olmayan ID, geçersiz bina numarası) anlaşılır mesaj verilir.
- Kodda tanımlayıcılar, yorumlar ve konsol mesajları Türkçe karakter içermez (örnek: `ogrenciAdi`, `Gecersiz secim`).
- Derleme: `g++ -std=c++11` ile hatasız derlenmelidir.
- Herkes kendi kodunu kendi GitHub hesabından, ne yapıldığını anlatan commit mesajlarıyla yükler (örnek: `Modul 1: kitap silme eklendi`). Son gün tek seferde yükleme yapılmaz.
