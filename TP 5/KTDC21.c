/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 5 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//library
#include <stdio.h>

//kodingan utama
int main()
{
    //deklarasi variabel, setiap variabel disini memiliki fungsinya masing masing
    int n, m, i, a = 0, b = 0, w = 0, c = 0, d = 0, e = 0, f = 0;
    //meminta masukkan dari user jumlah kartu techi
    scanf("%d", &n);
    //deklarasi array untuk kartu techi
    char x[n];
    //membuat perulangan untuk meminta masukkan dari user
    for (i = 0; i < n; i++)
    {
        //masukkan kartu techi dari user diulang sebanyak jumlah kartu techi/m
        scanf(" %c", &x[i]);

        //mengecek kondisi, apabila A-I, artinya ubah c menjadi 1
        if (x[i] == 'A' || x[i] == 'B' || x[i] == 'C' || x[i] == 'D' || x[i] == 'E' || x[i] == 'F' || x[i] == 'G' || x[i] == 'H' || x[i] == 'I')
        {
            c = 1;
        }
        //apabila angka, 1-9, maka ubah d menjadi 1
        else if (x[i] == '1' || x[i] == '2' || x[i] == '3' || x[i] == '4' || x[i] == '5' || x[i] == '6' || x[i] == '7' || x[i] == '8' || x[i] == '9')
        {
            d = 2;
        }
    }
    // membuat masukkan dari user unntuk jumlah kartu karla
    scanf("%d", &m);
    //deklarasi variabel array untuk kartu karla
    char y[m];

    //membuat perulangan kartu karla, prosesnya mirip seperti yang tadi
    for (i = 0; i < m; i++)
    {
        //masukkan macam macam kartu karla
        scanf(" %c", &y[i]);

        //mengecek kartu karla, apabila huruf A-I maka ubah e=1
        if (y[i] == 'A' || y[i] == 'B' || y[i] == 'C' || y[i] == 'D' || y[i] == 'E' || y[i] == 'F' || y[i] == 'G' || y[i] == 'H' || y[i] == 'I')
        {
            e = 1;
        }
        //dan apabila angka 1-9, maka ubah f menjadi 2
        else if (y[i] == '1' || y[i] == '2' || y[i] == '3' || y[i] == '4' || y[i] == '5' || y[i] == '6' || y[i] == '7' || y[i] == '8' || y[i] == '9')
        {
            f = 2;
        }
    }

    //jika m==n artinya jika kartu techi dan karla sama,
    if (m == n)
    {
        //print urutan kartinya
        for (i = 0; i < m; i++)
        {
            //jika bukan diakhir maka kasih spasi

            if (x[i] != x[n - 1])
            {
                printf("%c %c ", x[i], y[i]);
            }
            //jika diakhir, maka jangan kasih spasi
            else
            {
                printf("%c %c", x[i], y[i]);
            }
        }
        printf("\n");
    }
    //konvert kartu techi yang tadinya A-I menjadi 1-9, lalu ketika sudah dikonvert, jumlahkan semuanya
    for (i = 0; i < n; i++)
    {
        if (x[i] == 'A')
        {
            x[i] = '1';
        }
        if (x[i] == 'B')
        {
            x[i] = '2';
        }
        if (x[i] == 'C')
        {
            x[i] = '3';
        }
        if (x[i] == 'D')
        {
            x[i] = '4';
        }
        if (x[i] == 'E')
        {
            x[i] = '5';
        }
        if (x[i] == 'F')
        {
            x[i] = '6';
        }
        if (x[i] == 'G')
        {
            x[i] = '7';
        }
        if (x[i] == 'H')
        {
            x[i] = '8';
        }
        if (x[i] == 'I')
        {
            x[i] = '9';
        }
        a += x[i];
    }
    //konvert kartu karla yg tadinya A-I menjadi 1-9, setelah itu jumlahkan semuanya
    for (i = 0; i < m; i++)
    {
        if (y[i] == 'A')
        {
            y[i] = '1';
        }
        if (y[i] == 'B')
        {
            y[i] = '2';
        }
        if (y[i] == 'C')
        {
            y[i] = '3';
        }
        if (y[i] == 'D')
        {
            y[i] = '4';
        }
        if (y[i] == 'E')
        {
            y[i] = '5';
        }
        if (y[i] == 'F')
        {
            y[i] = '6';
        }
        if (y[i] == 'G')
        {
            y[i] = '7';
        }
        if (y[i] == 'H')
        {
            y[i] = '8';
        }
        if (y[i] == 'I')
        {
            y[i] = '9';
        }
        b += y[i];
    }
    // ini adalah kondisi dimana kartu mereka sejenis, yang tadi diatas kita sudah menandakan jika angka sama angka, atau huruf sama huruf
    if ((d == f || b == c))
    {
        printf("Kartu mereka sejenis,\nternyata mereka bersaudara!\n");
    }

    // kondisi jika setelah dikonvert dan dijumlahkan hasilnya sama
    else if (a == b && m == n)
    { // lalu ini adalah program untuk mengurutkan kartu techi dari yg terbesar
        for (int i = 0; i < n; i++)
        {
            int temp;
            for (int j = i + 1; j < n; j++)
            {
                if (x[i] < x[j])
                {
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }
        //program untuk mengurutkan kartu karla dari yg terbesar
        for (int i = 0; i < n; i++)
        {
            int temp;
            for (int j = i + 1; j < n; j++)
            {
                if (y[i] < y[j])
                {
                    temp = y[i];
                    y[i] = y[j];
                    y[j] = temp;
                }
            }
        }
        //jika sudah diurutkan maka cek apakah kartu techi dan karla sama urutannya?, jika iya maka tambahkan w
        for (i = 0; i < n; i++)
        {
            if (x[i] == y[i])
            {
                w++;
            }
        }
        //tadi kita sudah menambahkan w, artinya jika w ini sama dengan m atau n, maka urutannya sama persis, jadi karla menyukai balik
        if (w == n && w == m)
        {
            printf("Nilai kartu mereka cocok,\nCarla menyukai balik Techi.\n");
        }
        //jika urutannya tidak sama, maka karla tidak suka balik
        else
        {
            printf("Nilai kartu mereka tidak cocok,\nCarla tidak menyukai Techi.\n");
        }
    }
    //jika jumlah kartunya sama, dan beda jenis

    else if (a != b && m == n)
    {
        printf("Nilai kartu mereka tidak cocok,\nCarla tidak menyukai Techi.\n");
    }
    //kondisi jika jumlah kartu sama atau tidak, dan kartunya sejenis
    else if ((n != m || n == m) && (d == f || b == c))
    {
        printf("Kartu mereka sejenis,\nternyata mereka bersaudara!\n");
    }
    //kondisi jika jumlah kartunya sama atau tidak, dan kartunya tidak sejenis
    else if ((n != m || n == m) && (d != f || b != c))
    {
        printf("Nilai kartu mereka tidak cocok,\nCarla tidak menyukai Techi.\n");
    }
    //reset kode ke 0
    return 0;
}