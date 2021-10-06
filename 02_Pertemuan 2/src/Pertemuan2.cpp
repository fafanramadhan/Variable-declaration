#include <iostream>
#include <conio.h>   //untuk mengghunakan fungsi getch()

using namespace std;

int main()
{
  //Deklarasi tipe data variable
  string nama;
  int umur;
  char jenis_kelamin;

    //----input data oleh pengguna----
 //input nama
    cout << "Tuliskan nama kamu \n"; 
    cout << "Jawab: ";
    getline(cin,nama);                      //menyimpan nama pengguna ke variabel "nama"

 //input umur
    cout << "Berapa umur kamu saat ini? \n";
    cout << "Jawab: ";
    cin >> umur;                           //menyimpan umur pengguna ke variable "umur"

 //input jenis kelamin
    cout << "Apakah kamu Laki-Laki atau Perempuan [L/P] \n";
    cout << "Jawab: ";
    cin >> jenis_kelamin;                 //menyimpan jenis kelamin pengguna ke variable "jenis_kelamin"

    //----Output----
    cout << "Hallo " << nama << ", salam kenal. \n";
    cout << "saat ini kamu berusia " << umur << " tahun \n";
    cout << "anda berjenis kelamin " << jenis_kelamin;
 
getch();
return 0;
}

