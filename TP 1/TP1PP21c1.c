/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//library
#include <stdio.h>

typedef struct
{

    int panjang, lebar, tinggi, jam, menit, detik, luaspermukaan, waktu; //deklarasi variabel
} balok;

//codingan utama
int main()
{
    balok a;
    scanf("%d %d %d", &a.panjang, &a.lebar, &a.tinggi); //perintah untuk masukkan input dari user panjang lebar dan tinggi

    a.luaspermukaan = 2 * (a.panjang * a.tinggi) + 2 * (a.lebar * a.tinggi);         //menghitung jumlah meter persegi tembok yang di cat
    a.waktu = a.luaspermukaan * 100;                                                 // menghitung total luas waktu yang diperlukan dalam detik, (luas*100)
    a.jam = a.waktu / 3600;                                                          //menghitung jam yang diperlukan
    a.menit = a.waktu / 60 % 60;                                                     //menghitung menit yang diperlukan
    a.detik = a.waktu % 60;                                                          //menghitung detik yang diperlukan
    printf("Luas ruang tamu : %d meter persegi\n", a.luaspermukaan);                 //perintah output luas ruang tamu
    printf("Waktu menunggu  : %d jam, %d menit, %d detik", a.jam, a.menit, a.detik); // perintah output waktu untuk mengecat dalam jam menit detik
    printf("\n");                                                                    //perintah newline
    return 0;                                                                        // perintah untuk reset program ke 0
}