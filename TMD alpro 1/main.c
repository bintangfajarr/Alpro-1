/*Saya Muhammad Cahyana Bintang Fajar  NIM 2102665 mengerjakan 
evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h" // memanggil header ke dalam main
//kodingan utama
int main()
{
    char str[101];    //deklarasi string untuk masukkan
    int n;            //deklarasi n untuk ketebalan
    scanf("%s", str); //scan string
    scanf("%d", &n);  // scan n

    converttoarray(str); //panggil prosedur convert agar stringnya di ubah ke array of int 2 dimensi
    // panggol pola ke main
    baris1(n, str);
    baris2(n, str);
    baris3(n, str);
    baris4(n, str);
    baris5(n, str);

    //mereset kode ke 0
    return 0;
}