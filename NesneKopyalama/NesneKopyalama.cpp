// NesneKopyalama.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
class TelefonRehberi
{
    string* isimler;
    long* telefonlar;
public:
    TelefonRehberi(string* _isimler, long*_telefonlar):isimler(_isimler),telefonlar( _telefonlar){}
    TelefonRehberi(TelefonRehberi& rehber);
    void yazdir();
};
TelefonRehberi::TelefonRehberi(TelefonRehberi& rehber)
{
    isimler = rehber.isimler;
    telefonlar = rehber.telefonlar;
}

void TelefonRehberi::yazdir()
{
    for (int i = 0; i < 5; i++)
        cout << isimler[i] << " " << telefonlar[i] << endl;   
}

int main()
{
    string isimler[] = { "Eren Giyden","Zeynep Bora","Sener Sen","Hande Yener","Giray Altinok","Sezen Aksu"};
    long telefonlar[] = { 1111111,2222222,3333333,4444444,5555555,6666666 };
    TelefonRehberi rehber1(isimler, telefonlar);
    TelefonRehberi rehber2(rehber1);
    rehber2.yazdir();
    return 0;
}

