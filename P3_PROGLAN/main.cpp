#include <iostream>

using namespace std;


class Laras
{
public :
    int panjang_laras;
    Laras(int add_laras)
    {
        this->panjang_laras = add_laras;
    }
    void pasang_laras()
    {
        cout<< "Panjang Laras : " << panjang_laras << endl;
    }
};

class Peluru
{
private:

public:
    int Jumlah_peluru;
    Peluru(int add_peluru)
    {
        this->Jumlah_peluru = add_peluru;
    }
    void loadBullet()
    {
        cout<<"Jumlah peluru " << Jumlah_peluru << endl;
    }

    void reloadBullet(int add_bullet)
    {
        this->Jumlah_peluru += add_bullet;
    }

};

class gun : public Laras,public Peluru{
private:

public:
    gun(int p_laras,int j_peluru) : Peluru(j_peluru),Laras(p_laras)
    {
        //panjang_laras = p_laras;
        //Jumlah_peluru = j_peluru;
    }
    void dor()
    {
        Jumlah_peluru -= 1;
        cout << "Menembak target sejauh" << panjang_laras * 100 << endl;
        cout << "Jumlah Peluru" << Jumlah_peluru << endl;
    }

};

int main()
{
    gun AK47(100,5);
    AK47.pasang_laras();
    AK47.loadBullet();


    for ( int i = 0; i < 5; i++)
    {
        AK47.dor();
    }

    AK47.reloadBullet(10);
    for ( int i = 0; i < 10; i++)
    {
        AK47.dor();
    }

    cout << "Hello world!" << endl;
    return 0;

}
