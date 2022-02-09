/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 9 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//library dari header
#include "header.h"
//ini adalah convert string mundur sesuai panjang string tersebut
void geser(data sihir[], int n)
{
    /* pertama kita simpan dulu panjang stringnya ke suatu array*/
    int len[100];
    for (int i = 0; i < n; i++)
    {
        len[i] = strlen(sihir[i].str2);
    }
    // lalu setelah itu kita buat variabel untuk menandakan si huruf ini mundur sejauh panjang string
    /* menggunakan modulus, jadi 97 itu asciinya huruf a, ketika k atau suatu huruf dikurangi panjang, misal huruf a dikurangi 4, otomatis 
    harus ke huruf z lagi, jika tidak, maka akan mengprint suatu karakter dengan ascii tersebut dibawah 97, setelah direset ke z, maka kurangi 
    dengan k dan -1 karena kita meresetnya ke z, bukan ke z+1, jadi ada -1nya, kondisi ini berlaku hanya jika huruf alfabetnya kurang dari
    sama dengan 97
   */
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(sihir[i].str2); j++)
        {
            if ((sihir[i].str2[j] - len[i] < 97) && (sihir[i].str2[j] - len[i] >= 71))
            {
                k = sihir[i].str2[j];
                k = 97 % (k - len[i]);
                sihir[i].str2[j] = 'z';
                sihir[i].str2[j] -= k - 1;
            }
            // ini kondisi dimana panjang stringnya lebih dari 26, jadi perlu di modulus 26 dulu sebelum k - panjangnya
            // agar tidak lebih dari 26
            else if (sihir[i].str2[j] - len[i] < 71)
            {
                k = sihir[i].str2[j];
                k = 97 % (k - (len[i] % 26));
                sihir[i].str2[j] = 'z';
                sihir[i].str2[j] -= k - 1;
            }
            // ini kondisi ketika suatu huruf dikurangin panjang string tidak kurang dari 97, jadi langsung kurangin saja
            else
            {
                sihir[i].str2[j] -= len[i];
            }
        }
    }
}

// ini prosedur mencari barang
void caribarang(data sihir[], char str[], int n, int m)
{

    int cek = 0;          // inin  variabel untuk mengecek apabila kode sama atau ditemukan di kode
    int energiawal = 100; // ini energi

    for (int i = 0; i < n; i++)
    {
        if (strcmp(str, sihir[i].str2) == 0) //pertama ubah str yang awal menjadi kode
        {
            str = sihir[i].kode;
        }
    }
    for (int i = 0; i < n; i++) // setelah diubah,cek si kode ini apakah ada di list kode yg akan dicari, jika ada tandai dengan cek==1
    {
        if (strcmp(str, sihir[i].kode2) == 0)
        {
            cek = 1;
        }
    }

    if (cek == 1) // ini adalah perintah ketika ceknya ==1
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++) //kurangi terus energi yg diminta m kode
            {
                if (strcmp(sihir[i].kode, sihir[j].kode2) == 0)
                {
                    energiawal -= *sihir[i].energi; // menggunakan pointer karena ini adalah operasi variabel lokal dan global
                }
            }
            if (strcmp(str, sihir[i].kode2) == 0 && energiawal > 0) // jika sudah ditemukan dan energinya masih ada, print temukan
            {
                printf("Barang ditemukan di %s\n", str);
            }
            else if (strcmp(str, sihir[i].kode2) == 0 && energiawal <= 0) // jika sudah ditemukan dan energinya habis print barang tidak ditemukan karena energi habis
            {
                printf("Barang tidak ditemukan energi habis\n");
            }
        }
    }

    else // kondisi jika cek==0 alias barangnya tidak dicari di M
    {
        printf("Barang tidak ditemukan\n");
    }
}

void printasli(data sihir[], int n) //prosedur print asli barang setelah diconvert
{
    printf("=================\nnama asli barang\n=================\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s %s\n", sihir[i].kode, sihir[i].str2);
    }
    printf("=================\n");
}
