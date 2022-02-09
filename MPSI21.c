/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 4 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//library
#include <stdio.h>
// codingan utama
int main()
{
    //deklarasi variabel, n untuk masukkan, i untuk baris, j untuk kolom, a dan b sebagai penanda
    int n, i, j, a = -2, b = -1;
    //deklarasi variabel char
    char c;
    //masukkan char dan int dari user
    scanf("%c %d", &c, &n);
    //for untuk baris pertama(tanduk)
    for (i = 1; i <= n; i++)
    { //spasi sebelum tanduk
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        // kondisi jika vokal
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        { // penanda angka agar terus bertambah genap
            a = a + 2;

            for (j = 0; j < i; j++)
            { //jika a sudah sudah 10, ulang dari 0
                if (a == 10)
                {
                    a = 0;
                }

                printf("%d", a);
            }
        }
        // sama kaya yang tadi, bedanya ini ganjil
        else
        {
            b = b + 2;

            for (j = 0; j < i; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        }

        //spasi ditengah tanduk
        for (j = (n * 10) - (4 + n) + 3; j >= i * 4; j--)
        {
            printf(" ");
        }
        //print tanduk kanan
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {

            for (j = 0; j < i; j++)
            {
                if (a == 10)
                {
                    a = 0;
                }

                printf("%d", a);
            }
        }
        else
        {

            for (j = 0; j < i; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        }
        //newline untuk baris
        printf("\n");
    }
    //for untuk baris kedua (kepala yg nahan tanduk)
    for (i = 1; i <= 1; i++)
    { //spasi sebelum kepala
        for (j = 1; j <= n - 1; j++)
        {
            printf(" ");
        }
        //menambahkan penanda, a genap, b ganjil
        a = a + 2;
        b = b + 2;
        //print yang dibawah tanduk
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            for (j = 1; j <= (n * 7) + 2; j++)
            {
                if (a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (j = 1; j <= (n * 7) + 2; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }
                printf("%d", b);
            }
        }

        printf("\n");
    }
    //for untuk baris ketiga (bagian tengah mata dan mulut gatau hidung tuh, intinya itu lah ya)
    for (i = 1; i <= n - 2; i++)
    {
        //spasi sebelum pola yang ditengah
        for (j = n - 2; j >= i; j--)
        {
            printf(" ");
        }
        //penanda
        a = a + 2;
        b = b + 2;
        //print segitiga yg kiri
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            for (j = 1; j <= i + 1; j++)
            {
                if (a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (j = 1; j <= i + 1; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }
                printf("%d", b);
            }
        }
        //spasi untuk jarak segitiga dan yang ditengah
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        //perintah if yang ditengah ini fungsinya adalah untuk memberikan spasi ditengah tengah
        //akan tetapi hanya berlaku untuk yg paling bawah jadi rumusnya jika i==n-2
        if (i == n - 2)
        {
            if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
            {
                for (j = 1; j <= n * 2; j++)
                {
                    if (a == 10)
                    {
                        a = 0;
                    }
                    printf("%d", a);
                }
            }

            else
            {
                for (j = 1; j <= n * 2; j++)
                {
                    if (b == 11)
                    {
                        b = 1;
                    }
                    printf("%d", b);
                }
            }
            //ini spasinya
            for (j = 1; j <= n; j++)
            {
                printf(" ");
            }
            if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
            {
                for (j = 1; j <= n * 2; j++)
                {
                    if (a == 10)
                    {
                        a = 0;
                    }
                    printf("%d", a);
                }
            }

            else
            {
                for (j = 1; j <= n * 2; j++)
                {
                    if (b == 11)
                    {
                        b = 1;
                    }
                    printf("%d", b);
                }
            }
        }
        //else untuk yang bukan paling bawah, jadi yang tidak ada spasinya
        else
        {
            if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
            {
                for (j = 1; j <= n * 5; j++)
                {
                    if (a == 10)
                    {
                        a = 0;
                    }
                    printf("%d", a);
                }
            }

            else
            {
                for (j = 1; j <= n * 5; j++)
                {
                    if (b == 11)
                    {
                        b = 1;
                    }
                    printf("%d", b);
                }
            }
        }
        //ini spasi sebelum segitiga kanan
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        //ini segitika yang di kanan
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            for (j = 1; j <= i + 1; j++)
            {
                if (a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (j = 1; j <= i + 1; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }
                printf("%d", b);
            }
        }
        printf("\n");
    }
    //for untuk baris keempat (line sebelum kaki/pondasi)/m
    for (i = 1; i <= 1; i++)
    { //penanda
        a += 2;
        b += 2;
        //cuman ada satu baris jadi ini saja
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            for (j = 1; j <= n * 9; j++)
            {
                if (a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (j = 1; j <= n * 9; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }
                printf("%d", b);
            }
        }
        printf("\n");
    }
    //for untuk baris kelima (pondasi atau kaki yg ada 4 tea)
    for (i = 1; i <= n; i++)
    { //penanda
        a += 2;
        b += 2;
        //spasi paling kiri
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        //tiang pertama
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            for (j = 1; j <= n; j++)
            {
                if (a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (j = 1; j <= n; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }
                printf("%d", b);
            }
        }
        //spasi kedua
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        //tiang kedua
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            for (j = 1; j <= n; j++)
            {
                if (a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (j = 1; j <= n; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }
                printf("%d", b);
            }
        }
        //spasi ketiga
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        //tiang ketiga
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            for (j = 1; j <= n; j++)
            {
                if (a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (j = 1; j <= n; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }
                printf("%d", b);
            }
        }
        //spasi keempat
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        //tiang ke empat
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            for (j = 1; j <= n; j++)
            {
                if (a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (j = 1; j <= n; j++)
            {
                if (b == 11)
                {
                    b = 1;
                }
                printf("%d", b);
            }
        }
        printf("\n");
    }
    //mengembalikkan/mereset kode ke semula
    return 0;
}