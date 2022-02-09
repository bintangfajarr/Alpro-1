/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 3 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//masukkan library, pake math.h juga untuk ngitung sqrt
#include <math.h>
#include <stdio.h>
//membuat bungkusan untuk x,y,r karena ada 2 lingkaran
typedef struct
{
    int x, y, r;
} lingkaran;
//codingan utama
int main()
{
    //deklarasi char c untuk masukkan user, persen untuk membuat %
    char c, persen;
    persen = '%';
    //deklarasi int
    int k, p, ratusan, puluhan, satuan;

    //bungkusan lingkaran a,b
    lingkaran a, b;
    //meminta masukkan dari user berupa 8 int dan 1 char
    scanf("%d %d %d %d %d %d %d %c %d", &k, &a.r, &a.x, &a.y, &b.r, &b.x, &b.y, &c, &p);
    //memisahkan k agar mudah di switchnya
    ratusan = k / 100;
    puluhan = (k - (ratusan * 100)) / 10;
    satuan = (k - (ratusan * 100)) - (puluhan * 10);
    //deklarasi variabel yang akan digunakan di perhitungan nantinya
    float luasa, luasb, keliling, luaspersen, phi = 3.14;
    //menghitung luas lingkaran A
    luasa = (phi * a.r * a.r);
    //menghitung luas lingkaran B
    luasb = (phi * b.r * b.r);
    //menghitung jumlah keliling
    keliling = (2 * phi * a.r) + (2 * phi * b.r);
    //deklarasi variabel untuk menghitung jarak dari lingkaran A ke B
    int jarak, tinggi, alas;
    //mengecek beberapa kondisi yg mungkin terjadi dan menentukan alas tingginya
    if (a.x > b.x && a.y > b.y)
    {
        tinggi = a.x - b.x;
        alas = a.y - b.y;
    }
    else if (a.x > b.x && a.y < b.y)
    {
        tinggi = a.x - b.x;
        alas = b.y - a.y;
    }
    else if (a.x < b.x && a.y > b.y)
    {
        tinggi = b.x - a.x;
        alas = a.y - b.y;
    }
    else if (a.x < b.x && a.y < b.y)
    {
        tinggi = b.x - a.x;
        alas = b.y - a.y;
    }
    //rumus jarak AB
    jarak = sqrt((tinggi * tinggi) + (alas * alas));
    //mengecek K sesuai yang diminta oleh soal, apabila 1 maka jumlah luas, 2 untuk jumlah keliling, 3 untuk jarak
    //dan selain 1,2,3, itu mengecek persentase p dari char yg diinput
    switch (ratusan)
    {
    case 1:
        printf("ELuas AB: %.2f cm2\n", luasa + luasb);
        break;
    case 2:
        printf("EKeliling AB: %.2f cm\n", keliling);
        break;
    case 3:
        printf("Jarak AB: %d satuan\n", jarak);
        break;

    default:
        if (c == 'A')
        {
            printf("Luas %d%c A: %.2f cm2\n", p, persen, (p * luasa) / 100);
        }
        if (c == 'B')
        {
            printf("Luas %d%c B: %.2f cm2\n", p, persen, (p * luasb) / 100);
        }
        break;
    }
    switch (puluhan)
    {
    case 1:
        printf("ELuas AB: %.2f cm2\n", luasa + luasb);
        break;
    case 2:
        printf("EKeliling AB: %.2f cm\n", keliling);
        break;
    case 3:
        printf("Jarak AB: %d satuan\n", jarak);
        break;

    default:
        if (c == 'A')
        {
            printf("Luas %d%c A: %.2f cm2\n", p, persen, (p * luasa) / 100);
        }
        if (c == 'B')
        {
            printf("Luas %d%c B: %.2f cm2\n", p, persen, (p * luasb) / 100);
        }
        break;
    }
    switch (satuan)
    {
    case 1:
        printf("ELuas AB: %.2f cm2\n", luasa + luasb);
        break;
    case 2:
        printf("EKeliling AB: %.2f cm\n", keliling);
        break;
    case 3:
        printf("Jarak AB: %d satuan\n", jarak);
        break;

    default:
        if (c == 'A')
        {
            printf("Luas %d%c A: %.2f cm2\n", p, persen, (p * luasa) / 100);
        }
        if (c == 'B')
        {
            printf("Luas %d%c B: %.2f cm2\n", p, persen, (p * luasb) / 100);
        }
        break;
    }
    //mereset program ke 0
    return 0;
}