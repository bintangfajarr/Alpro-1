/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 6 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//library
#include <stdio.h>

//bungkusan, c untuk kode awal, m untuk nama barang awal, a untuk kode terjual, b untuk biner, dan x untuk menandakan jumlah barang yg terjual
typedef struct
{
    char c, m[1000], a;
    int b[8], x;
} data; //nama bungkusan

//kodingan utama
int main()
{

    int base, hasil, k;               // base dan hasil untuk operasi biner nanti, k untuk iterator
    data barang[1000];                // deklarasi bungkusan yang tadi
    int n, i = 0, ci, stokawal[1000]; // deklarasi variabel, n untuk inputan, i dan ci iterator, stokawal menyimpan desimal yg sudah diconvert dari biner
    scanf("%d", &n);                  // inputan

    while (i < n) //kondisi while dimana i<n
    {
        scanf(" %c", &barang[i].c);                  // scan kode
        scanf(" %c", &barang[i].m[0]);               //scan nama barang untuk indeks ke 0
        k = 0;                                       // inisialisasi
        while ((barang[i].m[k] != ';') && (k < 100)) // ini scan nama barang yang dimulai dari indeks ke 1, karena iterasi duluan sebelum scan
        {
            k++;
            scanf(" %c", &barang[i].m[k]);
        }
        int j = 0;
        while (j < 8) // ini scan biner, menggunakan iterator j
        {
            scanf("%d", &barang[i].b[j]);
            j++;
        }
        i++; // ini iterasi di while utama yaitu i
    }

    scanf("%d", &barang[0].a);  // scan kode barang yg akan dijual indeks ke 0
    ci = 0;                     // iterasi untuk scan kode barang
    while (barang[ci].a != '*') // ini scan kode barang, sama seperti yang tadi, karena iterator duluan, jadi indeks ke 1 yg diisi
    {
        ci++;
        scanf(" %c", &barang[ci].a);
        if (barang[ci].a != '*') // ini kondisi dimana kode bukan barangnya bintang, dia akan terus scan, dan jika bintang, maka dia tidak akan jalan
        {
            scanf("%d", &barang[ci].x);
        }
    }

    printf("Stok Barang Awal\n"); // print stok barang awal

    i = 0; // inisialisasi dari perulangan while
    while (i < n)
    {
        // base=1 karena mulai dari 2^0
        base = 1; // deklarasi base dan hasil untuk kode biner, hasil adalah jumlahnya, dan base adalah eksponen yg akan terus dinaikkan dikali2,
        hasil = 0;
        printf("- %c ", barang[i].c); // print kode barang
        int j = 0;
        while (j < 100 && barang[i].m[j] != ';') //print nama barang, kondisi != ; agar si titik koma tidak ikut terprint
        {
            printf("%c", barang[i].m[j]);
            j++;
        }

        printf(" ");
        j = 7;
        while (j >= 0) // operasi binernya, mulai dari yang kanan, jadi pakainya decreement, lalu basenya juga 2^0
        {
            hasil += barang[i].b[j] * base;
            base *= 2;
            j--;
        }
        printf("%d", hasil); // print hasil biner lalu dimasukkan ke arr stokawal, karena nantinya akan dipakai di pengurangan
        stokawal[i] = hasil;
        printf("\n");
        i++;
    }
    int stokakhir[100] = {0}, l, stoktambah[100]; // deklarasi variabel, stok akhir untuk update, l iterasi, stoktambah untuk menjumlah yg terjual
    i = 0;
    while (i < n) // ini while untuk menghitung  barang update
    {
        l = 0;
        while (l < 100)
        {
            if (barang[i].c == barang[l].a) //sebelum dikurangi, yg terjualnya di jumlahkan terlebih dahulu, karena bisa jadi lebih dari n
            {
                stoktambah[i] += barang[l].x;
            }
            l++;
        }
        stokakhir[i] = stokawal[i] - stoktambah[i]; // ini adalah proses pengurangannya, jadi sesuai urutan kode, biar enak
        if (stokakhir[i] <= 0)                      // jika negatif maka jadikan 0
        {
            stokakhir[i] = 0;
        }
        i++;
    }

    if (barang[1].a == '*') // kondisi dimana dia tidak menjual apa apa, alias indeks 1 nya tuh bintang, karena iterasi duluan
    {
        printf("\n---Stok Tetap---\n");
    }
    else
    {
        printf("\nStok Barang Update\n"); // stok update, ketika indeks 1 nya tidak langsung bintang,
        i = 0;
        while (i < n) // perulangan stok update
        {

            printf("- %c ", barang[i].c); // print kode barang
            int j = 0;
            while (j < 100 && barang[i].m[j] != ';') // print nama barang
            {
                printf("%c", barang[i].m[j]);
                j++;
            }

            printf(" %d", stokakhir[i]); // print stok akhir, barang yang sudah dikurangin
            printf("\n");
            i++;
        }
    }
    // mereset kode ke 0
    return 0;
}