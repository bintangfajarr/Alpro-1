/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal UTS nomer 2 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//library
#include <stdio.h>

//kodingan utama
int main()
{

    //deklarasi variabel
    int n, i, awal, akhir, m, j;
    //deklarasi variabel untuk menampung output
    int jumlah[100] = {0};
    //meminta masukkan jumlah n dari user atau array pertama
    scanf("%d", &n);
    //deklarasi array pertama
    char x[n];
    //meminta masukkan isi n array pertama
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &x[i]);
    }
    //deklarasi rentang index yang akan di cek
    scanf("%d %d", &awal, &akhir);
    //meminta masukkan jumlah m dari user atau huruf yg ingin di cek
    scanf("%d", &m);
    //deklarasi array kedua untuk mencari huruf yang akan dicari
    char y[m];
    //meminta masukkan dari user isi m yang akan di cek ada atau engganya di x
    for (i = 0; i < m; i++)
    {
        scanf(" %c", &y[i]);
    }
    //perintah untuk mengecek jumlah huruf, menggunakan nested for
    for (i = awal; i <= akhir; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (x[i] == y[j])
            {
                jumlah[j]++;
            }
        }
    }
    //setelah di cek, langsung print tanpa ada white space di akhir
    for (i = 0; i < m; i++)
    {
        if (i == m - 1)
        {
            printf("%d", jumlah[i]);
        }
        else
        {
            printf("%d ", jumlah[i]);
        }
    }
    //newline
    printf("\n");
    //mengembalikan kode ke 0
    return 0;
}
