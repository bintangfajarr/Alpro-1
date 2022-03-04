/*Saya Muhammad Cahyana Bintang Fajar  NIM 2102665 mengerjakan 
evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h" //memanggil header

void converttoarray(char str[]) //prosedur untuk mengconvert string ke array of integer
{
    int temp, batas; //deklarasi variabel bantuan untuk mengconvert
    for (int i = 0; i < strlen(str); i++)
    {
        int inx = 0;    //deklarasi variavbel inx gunanya sebagai pembatas di indeks array of int yang kedua
        int n = str[i]; //deklarasi variabel n, karena n variabel lokal di main dan tidak dipanggil ke sini sebagai parameter
        //maka tidak akan terjadi apa apa

        if (n < 100) //ascii huruf berkisar dari 65-ratusan sehingga pasti ada dua kondisi, yg pertama ketika kurang dari 100, pasti puluhan
        {
            temp = 10; //sehingga temp yang akan kita gunakan adalah 10
            batas = 2; //lalu batasnya 2 digit alias puluhan
        }
        else //selain puluhan, pasti ratusan
        {
            temp = 100; // sehingga tempnya adalah 100
            batas = 3;  //dan batasnya adalah 3 karena 3 digit
        }

        for (int j = 0; j < batas; j++) // ini adalah perulangan dengan batas sesuai kondisi yg tadi
        {
            simpanascii[i][inx++] = n / temp; //taroh n/temp ke dalam arr of integer mulai dari angka paling kiri, sebagai contoh jika asciinya 128, makan akan ditaroh 1
                                              // lalu di perulangan berikutnya,n akan di modulus dengan temp, jadi yg di simpan di arr of int berikutnya adalah 28/10 alias 2,
                                              // dan temp akan dibagi sepuluh, n akan di moduluskan temp lagi sehingga yg disimpan di perulangan berikutnya adalah 8
            n %= temp;
            temp /= 10;
        }
    }
}

void prtengah(int n) // prosedur untuk pola tengah, jika digambarkan akan menjadi -B-. spasi, B, spasi
{
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
}
void prkanan(int n) //prosedur untuk pola kanan, jika digambarkan akan menjadi --B. spasi, spasi, B
{
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
}
void prkiri(int n) // prosedur untuk pola kiri, jika digambarkan akan menjadi B--. B, spasi, spasi
{
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
}
void prkirikanan(int n) // prosedur untuk pola kanan kiri, jika digambarkan akan menjadi B-B. B, spasi, B
{
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
}
void prtengahkiri(int n) // prosedur untuk pola tengah dan kiri, jika digambarkan akan menjadi BB-. B,B, spasi
{
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
}
void prkiriakhir(int n) // prosedur untuk pola yang membutuhkan satu B saja, contohnya adalah angka 1, dan lain lain
{
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
}
void prtengahakhir(int n) // prosedur untuk pola tengah, tapi berada di akhir. akan menjadi -B, atau spasi, B
{
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
}
void kiritengahakhir(int n) // prosedur untuk pola kiri dan tengah tapi diakhir. akan menjadi BB, atau B,B
{
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
}
void angka3(int n) //prosedur ini saya buat khusus untuk angka 3, karena angka 3 hanya perlu B,spasi, bukan spasi,B,spasi
{
    for (int j = 0; j < n; j++)
    {
        printf("B");
    }
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }
}

void baris1(int n, char str[]) //prosedur untuk print pola ke baris 1
{
    int batas;                  //deklarasi variabel bantuan, batas
    for (int l = 0; l < n; l++) //awalnya perulangan sesuai n atau ketebalannya
    {
        for (int k = 0; k < strlen(str); k++) //lalu perulangan sesuai panjang stringnya
        {
            if (str[k] < 100) //jika asciinya kurang dari 100 maka batasnya 2 atau 2 digit
            {
                batas = 2;
            }
            else //selain itu pasti 3, atau 3 digit
            {
                batas = 3;
            }
            for (int i = 0; i < batas; i++) //setelah itu perulangan perbatas alias per angkanya
            {
                if (i == batas - 1 && k == strlen(str) - 1) // jika angka itu berada di akhir, maka tidak diperbolehkan ada spasi sehingga membuat kondisi khusus untuk itu
                {
                    if ((simpanascii[k][i]) == 6 || (simpanascii[k][i]) == 2 ||
                        (simpanascii[k][i]) == 0 || (simpanascii[k][i]) == 5 ||
                        (simpanascii[k][i]) == 8 || (simpanascii[k][i]) == 9)
                    {
                        prtengahakhir(n); //ketika angkanya 0,2,5,6,8,9  maka panggil prosedur tengah dan diakhir(-B)
                    }
                    else if ((simpanascii[k][i]) == 4)
                    {
                        prkirikanan(n); //ketika angka 4 maka panggil prosedur kiri kanan(B-B)
                    }
                    else if ((simpanascii[k][i] == 7))
                    {
                        kiritengahakhir(n); //ketika angkanya 7 maka panggil prosedur kiritengahakhir(BB)
                    }
                    else
                    {
                        prkiriakhir(n); //ketika angkanya 3 dan 1 maka panggil kiri akhir alias B
                    }
                }
                else //jika angkanya tidak berada di akhir, kurang lebih sama seperti yang tadi, perbedaannya adalah tidak ada spasi di akhir
                {
                    if ((simpanascii[k][i]) == 6 || (simpanascii[k][i]) == 2 ||
                        (simpanascii[k][i]) == 0 || (simpanascii[k][i]) == 5 ||
                        (simpanascii[k][i]) == 8 || (simpanascii[k][i]) == 9)
                    {
                        prtengah(n); //ini adalah -B-
                    }
                    else if ((simpanascii[k][i]) == 3)
                    {
                        angka3(n); //lalu untuk angka 3 adalah -B
                    }

                    else if ((simpanascii[k][i]) == 4)
                    {
                        prkirikanan(n); //dan ketika angkanya 4, maka sama seperti yang tadi yaitu B-B
                    }
                    else if ((simpanascii[k][i] == 7))
                    {
                        prtengahkiri(n); //ketika angkanya 7 maka BB-
                    }
                    else
                    {
                        prkiriakhir(n); //dan ketika angkanya 1 maka cukup B saja
                    }
                }

                if (i == batas - 1 && k != strlen(str) - 1) //jika spasinya berada diantara string, maka spasi dikali 2
                {
                    for (int o = 0; o < n * 2; o++)
                    {
                        printf(" ");
                    }
                }
                else if (i != batas - 1) //jika spasi tidak berada diantara string, maka cukup spasi n kali
                {
                    for (int o = 0; o < n; o++)
                    {
                        printf(" ");
                    }
                }
            }
        }

        printf("\n"); //print newline di akhir
    }
}

void baris2(int n, char str[]) //prosedur untuk pola baris yang kedua, prosesnya sama persis sama baris 1, bedanya adalah ketika di print pola per angkanya berbeda"
{
    int batas;
    for (int l = 0; l < n; l++)
    {
        for (int k = 0; k < strlen(str); k++)
        {
            if (str[k] < 100)
            {
                batas = 2;
            }
            else
            {
                batas = 3;
            }
            for (int i = 0; i < batas; i++)
            {
                if (i == batas - 1 && k == strlen(str) - 1) //kondisi ketika angkanya berada di akhir pola
                {
                    if ((simpanascii[k][i]) == 2 ||
                        (simpanascii[k][i]) == 7)
                    {
                        prkanan(n); //disini adalah perbedaannya, ketika angkanya 2 atau 7 dan berada di akhir, maka print kanan(--B)
                    }
                    else if ((simpanascii[k][i]) == 3)
                    {
                        prtengahakhir(n); //ketika angkanya 3, maka print tengah yang akhir(-B)
                    }
                    else if ((simpanascii[k][i]) == 4 || (simpanascii[k][i]) == 0 ||
                             (simpanascii[k][i]) == 8 || (simpanascii[k][i] == 9))
                    {
                        prkirikanan(n); //ketika angkanya 0,4,8,9, maka print kiri kanan(B-B)
                    }

                    else
                    {
                        prkiriakhir(n); //dan ketika angkanya 1,5,6 maka print kiri saja atau B saja
                    }
                }
                else
                {
                    if ((simpanascii[k][i]) == 2 ||
                        (simpanascii[k][i]) == 7) //ketika angka 2 dan 7, maka yg dibutuhkan adalah kanan, alias --B
                    {
                        prkanan(n);
                    }
                    else if ((simpanascii[k][i]) == 3) //ketika angka 3, kita butuh tengah akhir, karena cuman butuh 2 petak saja -B
                    {
                        prtengahakhir(n);
                    }

                    else if ((simpanascii[k][i]) == 4 || (simpanascii[k][i]) == 0 ||
                             (simpanascii[k][i]) == 8 || (simpanascii[k][i] == 9)) //ketika 0,4,8,9, maka kiri kanan, B-B
                    {
                        prkirikanan(n);
                    }
                    else if ((simpanascii[k][i]) == 5 || (simpanascii[k][i]) == 6) //ketika angka 5 dan 6,maka kiri alias--B
                    {
                        prkiri(n);
                    }
                    else //sisanya angka 1 kiri akhir
                    {
                        prkiriakhir(n);
                    }
                }

                if (i == batas - 1 && k != strlen(str) - 1) //spasi untuk antar ascii karakter, dikali 2
                {
                    for (int o = 0; o < n * 2; o++)
                    {
                        printf(" ");
                    }
                }
                else if (i != batas - 1) //spasi untuk per angka yg didalam ascii
                {
                    for (int o = 0; o < n; o++)
                    {
                        printf(" ");
                    }
                }
            }
        }

        printf("\n"); //newline juga dikahir baris
    }
}
void baris3(int n, char str[]) //prosedur untuk baris utama ke tiga, perbedaannya hanya terletak di pola per angkanya saja
{
    int batas;
    for (int l = 0; l < n; l++)
    {
        for (int k = 0; k < strlen(str); k++)
        {
            if (str[k] < 100)
            {
                batas = 2;
            }
            else
            {
                batas = 3;
            }
            for (int i = 0; i < batas; i++)
            {
                if (i == batas - 1 && k == strlen(str) - 1) //ketika angkanya berada di akhir
                {
                    if ((simpanascii[k][i]) == 2 ||
                        (simpanascii[k][i]) == 4 || (simpanascii[k][i]) == 5 ||
                        (simpanascii[k][i]) == 6 || (simpanascii[k][i]) == 8 ||
                        (simpanascii[k][i]) == 9) //untuk angka yg akhir, 2,4,5,6,8,9 itu tengah akhir atau -B
                    {
                        prtengahakhir(n);
                    }

                    else if ((simpanascii[k][i]) == 0) //dan untuk angka 0, tetap kiri kanan atau B-B
                    {
                        prkirikanan(n);
                    }
                    else if ((simpanascii[k][i]) == 7) //ketika angkan 7, kitaprint kanan --B
                    {
                        prkanan(n);
                    }
                    else //sisanya kiri akhir, angka 1 dan 3
                    {
                        prkiriakhir(n);
                    }
                }
                else //ketika angkanya tidak berada di akhir
                {
                    if ((simpanascii[k][i]) == 2 ||
                        (simpanascii[k][i]) == 4 || (simpanascii[k][i]) == 5 ||
                        (simpanascii[k][i]) == 6 || (simpanascii[k][i]) == 8 ||
                        (simpanascii[k][i]) == 9)
                    {
                        prtengah(n); //ketika angka 2,4,5,6,8,9, maka print tengah
                    }
                    else if ((simpanascii[k][i]) == 3) //khusus untuk angka 3, print angka3 karena angka 3 cuman butuh 2 space yaitu B-
                    {
                        angka3(n);
                    }

                    else if ((simpanascii[k][i]) == 0) // untuk angka 0 maka print kiri kanan B-B
                    {
                        prkirikanan(n);
                    }
                    else if ((simpanascii[k][i]) == 7) // untuk angka 7, maka print kanan --B
                    {
                        prkanan(n);
                    }
                    else
                    {
                        prkiriakhir(n); //dan ini untuk angka 1, yaitu kiri akhir
                    }
                }

                if (i == batas - 1 && k != strlen(str) - 1) //spasi untuk jarak angka perascii, dikali 2
                {
                    for (int o = 0; o < n * 2; o++)
                    {
                        printf(" ");
                    }
                }
                else if (i != batas - 1) //spasi untuk jarak per angka yg didalam ascii
                {
                    for (int o = 0; o < n; o++)
                    {
                        printf(" ");
                    }
                }
            }
        }

        printf("\n"); //newline di akhirr perulangan
    }
}
void baris4(int n, char str[]) //prosedur untuk pola baris utama ke 4
{
    int batas;
    for (int l = 0; l < n; l++)
    {
        for (int k = 0; k < strlen(str); k++)
        {
            if (str[k] < 100)
            {
                batas = 2;
            }
            else
            {
                batas = 3;
            }
            for (int i = 0; i < batas; i++)
            {
                if (i == batas - 1 && k == strlen(str) - 1) //ini untuk angka yg berada di akhir
                {

                    if ((simpanascii[k][i]) == 0 || (simpanascii[k][i]) == 6 ||
                        (simpanascii[k][i]) == 8) //jika angkanya 0,8,6, maka kiri kanan, B-B
                    {
                        prkirikanan(n);
                    }
                    else if ((simpanascii[k][i]) == 7 || (simpanascii[k][i]) == 4 ||
                             (simpanascii[k][i]) == 5 ||
                             (simpanascii[k][i]) == 9)
                    {
                        prkanan(n); //jika angka 4,5,7,9 maka kanan, atau --B
                    }
                    else if ((simpanascii[k][i]) == 3)
                    {
                        prtengahakhir(n); //jika angka 3, maka tengah akhir -B
                    }
                    else
                    {
                        prkiriakhir(n); //sisanya kiri akhir, angka 1,2
                    }
                }
                else //ketika angkanya tidak berada di akhir
                {
                    if ((simpanascii[k][i]) == 2) //bedanya yg akhir dan bukan terletak di angka 2 saja untuk baris ke 4, sisanya sama semua
                    {
                        prkiri(n); //jika di atas kiri akhir, disini kiri saja alias B--
                    }
                    else if ((simpanascii[k][i]) == 0 || (simpanascii[k][i]) == 6 ||
                             (simpanascii[k][i]) == 8)
                    {
                        prkirikanan(n);
                    }
                    else if ((simpanascii[k][i]) == 7 || (simpanascii[k][i]) == 4 ||
                             (simpanascii[k][i]) == 5 ||
                             (simpanascii[k][i]) == 9)
                    {
                        prkanan(n);
                    }
                    else if ((simpanascii[k][i]) == 3)
                    {
                        prtengahakhir(n);
                    }

                    else
                    {
                        prkiriakhir(n);
                    }
                }
                if (i == batas - 1 && k != strlen(str) - 1) //spasi jika jarak per ascii,dikali 2
                {
                    for (int o = 0; o < n * 2; o++)
                    {
                        printf(" ");
                    }
                }
                else if (i != batas - 1) //spasi jika angkanya perangka di ascii
                {
                    for (int o = 0; o < n; o++)
                    {
                        printf(" ");
                    }
                }
            }
        }

        printf("\n"); //newline di akhir
    }
}
void baris5(int n, char str[]) //dan ini prosedur untuk baris utama ke 5 atau terakhir
{
    int batas;
    for (int l = 0; l < n; l++)
    {
        for (int k = 0; k < strlen(str); k++)
        {
            if (str[k] < 100)
            {
                batas = 2;
            }
            else
            {
                batas = 3;
            }
            for (int i = 0; i < batas; i++)
            {
                if (i == batas - 1 && k == strlen(str) - 1) //ketika angkanya berada di akhir
                {
                    if ((simpanascii[k][i]) == 2 || (simpanascii[k][i]) == 0 ||
                        (simpanascii[k][i]) == 5 ||
                        (simpanascii[k][i]) == 6 || (simpanascii[k][i]) == 8 ||
                        (simpanascii[k][i]) == 9)
                    {
                        prtengahakhir(n); //dan ketika angkanya 0,2,5,6,8,9 maka print tengah akhir atau B-
                    }
                    else if ((simpanascii[k][i]) == 7 || (simpanascii[k][i]) == 4)
                    {
                        prkanan(n); //ketika angkanya 4,7 mka printnya kanan ataau --B
                    }
                    else
                    {
                        prkiriakhir(n); //sisanya adalah angka 1 dan 3 maka printnya kiri akhir
                    }
                }
                else //ketika angkanyatidak berada di akhir
                {
                    if ((simpanascii[k][i]) == 2 || (simpanascii[k][i]) == 0 ||
                        (simpanascii[k][i]) == 5 ||
                        (simpanascii[k][i]) == 6 || (simpanascii[k][i]) == 8 ||
                        (simpanascii[k][i]) == 9)
                    {
                        prtengah(n); //sama seperti angka yg akhir, tetapi ini tengah saja, bukan tengah akhir
                    }
                    else if ((simpanascii[k][i]) == 3) //khusus angka 3, kita print pola angka 3 sendiri yaitu B-
                    {
                        angka3(n);
                    }
                    else if ((simpanascii[k][i]) == 7 || (simpanascii[k][i]) == 4) //ketika angkanya 4 dan 7, maka print kanan --B
                    {
                        prkanan(n);
                    }
                    else
                    {
                        prkiriakhir(n); //laluu ketika angkanya 1, maka print kiri akhirr
                    }
                }

                if (i == batas - 1 && k != strlen(str) - 1) //print spasi ketika diantara ascii, maka dikali 2
                {
                    for (int o = 0; o < n * 2; o++)
                    {
                        printf(" ");
                    }
                }
                else if (i != batas - 1) //dan ketika antara angka di ascii maka tergantung n saja
                {
                    for (int o = 0; o < n; o++)
                    {
                        printf(" ");
                    }
                }
            }
        }

        printf("\n"); //newlineeeeee
    }
}
//ALHAMDULILLAH SELESAIIIIIIIIIII