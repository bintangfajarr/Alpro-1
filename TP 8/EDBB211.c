/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 8 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//library
#include <stdio.h>
#include <string.h>

//kodingan utama
int main()
{
    char str[201], arr[100][1000], arrlama[100][1000]; //deklarasi variabel untuk string masukan, string yg sudah dipisah, lalu string yg sudah dipisah dan diconvert
    int i, j = 0, slash = 0;                           //variabel iterasi dan pananda jumlah string/ jumlah slash

    scanf("%s", str);

    /*program untuk memmisahkan string
    jadi ketika di string terdeteksi slash atau null, maka slash akan bertambah dan j akan direset 
    kembali ke 0, lalu jika selain itu, masukkan str i kedalam array baru, jnya ditambah, sehingga 
    otomatis string akan terbagi ke array baru dengan jumlah banyaknya slash+1*/
    for (i = 0; i <= (strlen(str)); i++)
    {
        if (str[i] == 92 || str[i] == '\0')
        {
            arr[slash][j] = '\0';
            slash++;
            j = 0;
        }
        else
        {
            arr[slash][j] = str[i];
            j++;
        }
    }
    /*program untuk mencari string terpanjang dan juga memasukkan array yang sudah tadi dipisah ke 
    array lagi, agar bisa di print di kamus nanti, karena si arraynya akan di convert*/
    int panjang[100], max = 0;
    for (i = 0; i < slash; i++)
    {
        panjang[i] = strlen(arr[i]);
        if (panjang[i] > max)
        {
            max = panjang[i];
        }
        for (j = 0; j < strlen(arr[i]); j++)
        {
            arrlama[i][j] = arr[i][j];
        }
    }
    //mencari nilai k, nilai k pasti lebih dari 26 karena ascii terkecilnya saja 65, jadi kita moduluskan
    int k = 0;
    for (i = 0; i < strlen(arr[slash - 1]); i++)
    {
        k += arr[slash - 1][i];
    }
    k = k % 26;

    /*program konversi ditambah berdasarkan huruf k, diadakan kondisi jika asciinya melebihi huruf z atau melebihi 90
    yaitu dengan cara modulus, karena jika tidak dimoduluskan akan keluar karakter random, 2 kondisi dibawah jika
    huruf besar atau jika huruf kecil*/
    int c = 0;
    for (i = 0; i < slash; i++)
    {
        for (j = 0; j < strlen(arr[i]); j++)
        {
            if ((arr[i][j] >= 'A' && arr[i][j] <= 'Z'))
            {
                if (arr[i][j] + k > 90)
                {
                    c = arr[i][j];
                    c = (c + k) % 90;
                    arr[i][j] = 'A';
                    arr[i][j] += c - 1;
                }
                else
                {
                    arr[i][j] += k;
                }
            }
            if ((arr[i][j] >= 'a' && arr[i][j] <= 'z'))
            {
                if (arr[i][j] + k > 122)
                {
                    c = arr[i][j];
                    c = (c + k) % 122;
                    arr[i][j] = 'a';
                    arr[i][j] += c - 1;
                }
                else
                {
                    arr[i][j] += k;
                }
            }
        }
    }

    /*deklarasi variabel untuk pola, jadi saya mengprint arr indeks pertama sampai tengah+1(jika ganjil) 
    atau arr indeks pertama sampai tengah(jika genap)
    setelah itu print karakter abcdefg... lalu diakhir print arr indeks tengah sampai akhir, char pola tengah akan direset
    setelah melebihi z*/
    char a = 'a';
    printf(">> Pola Pesan <<\n");
    for (i = 0; i < slash; i++)
    {
        if (strlen(arr[i]) == max)
        {
            printf("%s", arr[i]);
        }
        else
        {
            if (strlen(arr[i]) % 2 == 0)
            {
                for (j = 0; j < strlen(arr[i]) / 2; j++)
                {
                    printf("%c", arr[i][j]);
                }

                for (j = 0; j < max - strlen(arr[i]); j++)
                {
                    printf("%c", a);
                    a++;
                    if (a == 'z' + 1)
                    {
                        a = 'a';
                    }
                }
                for (j = strlen(arr[i]) / 2; j < strlen(arr[i]); j++)
                {
                    printf("%c", arr[i][j]);
                }
            }
            else
            {
                for (j = 0; j < strlen(arr[i]) / 2 + 1; j++)
                {
                    printf("%c", arr[i][j]);
                }

                for (j = 0; j < max - strlen(arr[i]); j++)
                {
                    printf("%c", a);
                    a++;
                    if (a == 'z' + 1)
                    {
                        a = 'a';
                    }
                }
                for (j = strlen(arr[i]) / 2 + 1; j < strlen(arr[i]); j++)
                {
                    printf("%c", arr[i][j]);
                }
            }
        }
        printf("\n");
    }
    //print path directory, ya diadakan kondisi agar tidak ada slash diakhir
    printf("\n>> Path Directory Terenkripsi <<\n");
    for (i = 0; i < slash; i++)
    {
        printf("%s", arr[i]);
        if (i != slash - 1)
        {
            printf("/");
        }
    }
    //print kamus, disini arrlama tadi terpakai, karena arr sudah dikonversi
    printf("\n\n>> Kamus <<\n");
    for (i = 0; i < slash; i++)
    {
        printf("%d. [%s] -> [%s]\n", i + 1, arr[i], arrlama[i]);
    }
    //mereset kode ke 0
    return 0;
}
