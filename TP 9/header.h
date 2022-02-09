/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 9 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//library
#include <stdio.h>
#include <string.h>

//deklarasi struct
typedef struct data
{
    char kode[100], str2[100], kode2[100];
    int energi[100];
} data;

//deklarasi prosedur
void geser(data sihir[], int a);                         // ini untuk mengubah/convert string
void printasli(data sihir[], int a);                     // ini untuk print setelah convert
void caribarang(data sihir[], char str[], int a, int b); //ini untuk mencari barang
