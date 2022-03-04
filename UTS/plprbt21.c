/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal UTS nomer 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//library
#include <stdio.h>
//kodingan utama
int main()
{
    //deklarasi variabel
    int n, i, j;
    //meminta masukkan dari user
    scanf("%d", &n);

    //for induk pertama
    for (i = 0; i < n; i++)
    { //spasi
        for (j = (n * 5) + (n - 1); j > i; j--)
        {
            printf(" ");
        }
        //segitiga
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    //for induk kedua
    for (i = 0; i < n; i++)
    {
        //spasi pertama
        for (j = n * 2 - 1; j > i; j--)
        {
            printf(" ");
        }
        // segitiga pertama
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        // spasi setelah segitiga
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        //persegi panjang setelah spasi
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        // spasi setelah persegi panjang
        for (j = (n * 3) + (n - 1); j > i; j--)
        {
            printf(" ");
        }
        // segitiga setelah spasi
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        //spasi
        for (j = n * 2; j > i; j--)
        {
            printf(" ");
        }
        //piramida
        for (j = 0; j <= i * 2; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    //for induk ketiga/ yg ditengah
    for (i = 0; i < n; i++)
    {
        //persegi panjang yg diawal tengah
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        //spasi setelah persegi panjang
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        //persegi panjang kedua yg ditengah
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        //spasi setelah persegi panjang
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
        //persegi panjang lagi
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        //spasi setelahnya
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        //persegi panjang diantara piramida
        for (j = 0; j < n * 2 + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    //for induk keempat kebalikan dari for induk kedua
    for (i = 0; i < n; i++)
    {
        //spasi pertama
        for (j = 1; j <= n + i; j++)
        {
            printf(" ");
        }
        //segitiga terbalik
        for (j = n; j > i; j--)
        {
            printf("*");
        }
        //spasi setelah segitiga terbalik
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        //persegi panjang
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        //spasi setelah persegi panjang
        for (j = 1; j <= n * 3 + i; j++)
        {
            printf(" ");
        }
        //segitiga terbalik
        for (j = n; j > i; j--)
        {
            printf("*");
        }
        //spasi setelah segitiga terbalik
        for (j = 1; j <= n + 1 + i; j++)
        {
            printf(" ");
        }
        //segitiga piramida terbalik
        for (j = n * 2 - 2; j > i * 2 - 1; j--)
        {
            printf("*");
        }

        printf("\n");
    }
    //for induk terakhir kebalikan dari for induk pertama
    for (i = 0; i < n; i++)
    {
        //spasi awal
        for (j = 1; j <= n * 5 + i; j++)
        {
            printf(" ");
        }
        //segitiga terbalik
        for (j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    //mengembalikan kode ke 0
    return 0;
}
