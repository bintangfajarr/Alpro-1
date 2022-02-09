/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 9 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//library dari header
#include "header.h"
int main()
{
    int n, m;        // deklarasi var n dan m untuk  banyak barang yang terkena sihir dan banyak langkah pencarian
    data sihir[200]; // deklarasi struct
    char str[1000];  //deklarasi string yg akan dicari

    //scan
    scanf("%s %d", str, &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %s", sihir[i].kode, sihir[i].energi, sihir[i].str2);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%s", sihir[i].kode2);
    }

    //panggil prosedur
    geser(sihir, n);
    caribarang(sihir, str, n, m);
    printasli(sihir, n);
    return 0;
}