/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 2 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//library
#include <stdio.h>

//codingan utama
int main()
{
    // deklarasi variabel m dan n untuk masukan user, klji untuk penanda
    int m, n, k = 0, l = 0, j = 0, i = 0;
    // deklarasi variabel char untuk masukan user
    char a, b, c, d;
    // perintah untuk memasukkan 4 karakter dan 2 integer dari user
    scanf("%c %c %c %c %d %d", &a, &b, &c, &d, &n, &m);

    // memeriksa karakter, apakah ada huruf vokal atau tidak, jika ya, maka tambahkan penanda menjadi 1.
    if (a == 'A' || a == 'I' || a == 'U' || a == 'E' || a == 'O')
    {
        k = 1;
    }
    if (b == 'A' || b == 'I' || b == 'U' || b == 'E' || b == 'O')
    {
        i = 1;
    }
    if (c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O')
    {
        l = 1;
    }
    if (d == 'A' || d == 'I' || d == 'U' || d == 'E' || d == 'O')
    {
        j = 1;
    }

    // menjumlahkan penanda,
    int jumlah = k + i + j + l;

    // memeriksa jika vokal ada 2, dan jumlahnya genap maka stone didapat
    if (jumlah == 2)
    {
        if ((n + m) % 2 == 0)
        {
            printf("Riddle Stone Acquired! Everybody comes home");
        }
        else
        {
            printf("You are unworthy, for you cannot riddle me");
        }
    }
    // memeriksa jika ada lebih dari 2 vokal, artinya ada 3 atau 4 vokal, dan jumlahnya ganjil, maka stone didapat
    else if (jumlah > 2)
    {
        if ((n + m) % 2 != 0)
        {
            printf("Riddle Stone Acquired! Everybody comes home");
        }
        else
        {
            printf("You are unworthy, for you cannot riddle me");
        }
    }
    // memeriksa jika ada lebih dari 2 konsonan, artinya hanya ada 0 atau 1 vokal, dan jika dijumlahkan lebih dari 14, maka stone didapat
    else if (jumlah < 2)
    {
        if (n + m >= 14)
        {
            printf("Riddle Stone Acquired! Everybody comes home");
        }
        else
        {
            printf("You are unworthy, for you cannot riddle me");
        }
    }
    // perintah newline
    printf("\n");

    // mengembalikan semua kode ke 0
    return 0;
}