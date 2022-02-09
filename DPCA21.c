/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 7 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//library
#include <stdio.h>
#include <string.h>

//kodingan utama
int main()
{
    char str[1000], a1[100], a2[100], desk2[100]; // deklarasi var, str untuk inputan, a1 = depan,a2=belakang, desk2 untuk dekripsi 2
    int i, j;                                     //iterator looping
    int pa1, pa2, pa3;                            //iterator panjang string, depan, belakang
    int k, t, x;                                  // var untuk penandaan di proses penghapusan string
    scanf("%s", &str);
    i = 0;
    while ((str[i] != '!') && (str[i] != '\0')) // ini depan, atau sebelum !
    {
        a1[i] = str[i];
        i++;
    }
    a1[i] = '\0';
    j = 0;
    while (i < strlen(str)) // ini belakang, setelah !, atau kunci
    {
        a2[j] = str[i + 1];
        i++;
        j++;
    }
    a2[j] = '\0';
    //panjang str depan atau belakang
    pa1 = strlen(a1);
    pa2 = strlen(a2);

    //ini proses penghapusan, menggunakan algoritma replace
    i = 0;
    do
    {
        t = i; //var t untuk menandakan cek indeks ke berapa, karena i nantinya akan ditambah jika menemukan yang sama
        j = 0;
        while (j < pa2)
        {
            if (a1[i] == a2[j])
            {
                i++;
            }
            j++;
        }

        k = i - t; // ini fungsinya untuk menghitung jumlah kunci, karena tadi i itu bertambah, dan t adalah i aslinya

        if (k == pa2) // indeks ke n diganti jadi indeks ke n+k
        {
            i = t; //ini dikembalikan lagi ke i asal sama j juga karena kit hanya mereplace mulai dari indeks yg sama
            j = i;
            while (j < (pa1 - pa2))
            {
                a1[j] = a1[j + pa2]; //ini proses nya, jadi a1 yg semula depan akan menjadi string yg terhapus, dan diakhir memakai null
                j++;
            }
            a1[j] = '\0';
        }
        else //lanjutkan perulangan jika tidak menemukan char yg sama
        {
            i++;
        }
    } while (i < pa1);

    pa3 = strlen(a1); // panjang yg terhapus

    if (pa3 == 0) // jika terhapus semua, print tidak valid, jika tidak, print kunci
    {
        printf("==== Inputan Tidak Valid! ====\n");
    }
    else
    {
        printf("Tanpa kunci: %s\n", a1);                 //print yg belum di ubah
        printf("\nDekripsi 1: ");                        //dekripsi 1 print selang seling
        i = 0;                                           //mulai dari inya 0
        j = pa3 - 1;                                     //mulai dari strlen akhir
        x = 0;                                           //ini variabel untuk menyimpan ke arr baru yg akan di print di dekripsi 2
        while ((i <= pa3 / 2) && (j >= pa3 - (pa3 / 2))) //batasnya dari i sampai tengah, lalu dari akhir sampai tengah juga
        {
            printf("%c", a1[i]); //print yang dari awal dulu, lalu print yg dari akhir
            printf("%c", a1[j]);
            desk2[x] = a1[i]; //masukkan ke array baru, karena memasukkannya 2 huruf, jadi iteratornya +=2
            desk2[x + 1] = a1[j];
            i++;
            j--;
            x += 2;
        }
        if (pa3 % 2 == 1) //ini print yang ada di tengah tengah jika panjang yg terhapusnya ganjil, lalu masukkan juga ke array baru
        {
            printf("%c", a1[pa3 / 2]);
            desk2[x] = a1[pa3 / 2];
            x++;
            desk2[x] = '\0';
        }
        printf("\n\nDekripsi 2: "); // ini dekripsi 2 printnya mulai dari tengah ke awal, lalu dari akhir ke tengah
        i = (pa3 / 2) - 1;          // deklarasi dari tengah
        while (i >= 0)
        {
            printf("%c", desk2[i]); //print tengah ke awal
            i--;
        }
        if (pa3 % 2 == 1) //jika panjang pass terhapus ganjil, maka print untuk yang di tengah tengahnya
        {
            printf("%c", desk2[pa3 / 2]);
        }
        j = pa3 - 1;
        while (j >= (x - (x / 2))) //ini print dari akhir ke tengah
        {
            printf("%c", desk2[j]);
            j--;
        }
        printf("\n");
    }
    //reset kode
    return 0;
}
