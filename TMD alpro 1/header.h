/*Saya Muhammad Cahyana Bintang Fajar  NIM 2102665 mengerjakan 
evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//library, menggunakan library string karena kita akan menggunakan beberapa fungsi dari library tersebut
#include <stdio.h>
#include <string.h>

//deklarasi prosedur untuk beberapa pola yang akan dipakai,selengkapnya akan saya jelaskan di mesin
void prtengah(int n);
void prkanan(int n);
void prkiri(int n);
void prkiriakhir(int n);
void prkirikanan(int n);
void prtengahkiri(int n);
void kiriakhir(int n);
void kiritengahakhir(int n);
void prtengahakhir(int n);
void angka3(int n);

//lalu ini ada deklarasi prosedur untuk baris utama pola, yaitu terdiri dari 5 baris utama
void baris1(int n, char str[]);
void baris2(int n, char str[]);
void baris3(int n, char str[]);
void baris4(int n, char str[]);
void baris5(int n, char str[]);

//deklarasi prosedur untuk mengconvert string ke array of integer 2 dimensi, supaya memudahkan saat print spasinya
void converttoarray(char str[]);

//deklarasi variabel array of integernya, yang dua dimensi tadi
int simpanascii[101][101];
