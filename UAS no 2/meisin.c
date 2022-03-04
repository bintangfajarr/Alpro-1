#include "header.h" //panggil header
void solve(angka data[])
{ //pertama kita sorting dulu angkanya disini ada 3 nested for i untuk jumlah elemen arr, lalu j dan k untuk menyortingnya
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp; //variabel bantuan untuk menyimpan sementara nilainya
            for (int k = j + 1; k < 4; k++)
            {
                if (data[i].arr[j] >= data[i].arr[k]) //jadi ketika dia menemukan yg lebih besar maka tukar yg lebih besar itu ke belakang, dan yg kecil otomatis ke depan
                {
                    temp = data[i].arr[j];
                    data[i].arr[j] = data[i].arr[k];
                    data[i].arr[k] = temp;
                }
                //jadi ditukar tukar sampai berurutan, sehingga otomatis yg paling atas adalah yg paling kecil berurutan
            }
        }
    }
    int batas, count = 0; //deklarasi variabel bantuan

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++) //disini kita menggunakan array yg terakhir alias yg ke 3 karena otomatis akan menjadi digit yg terbesar
        {
            if (data[i].arr[3] < 10) //fungsi batas adalah menentukan jumlah digitnya, terdapat beberapa kondisi, ini adalah satuan
            {
                batas = 1;
            }
            else if (data[i].arr[3] >= 10 && data[i].arr[3] < 100) //ini kondisi puluhan/2 digit
            {
                batas = 2;
            }
            else if (data[i].arr[3] >= 100 && data[i].arr[3] < 1000) //ini kondisi ratusan atau 3 digit
            {
                batas = 3;
            }
            else //ini kondisi ribuan, karena selain 3 diatas hanya ada ribuan, sehingga disimpan di else
            {
                batas = 4;
            }
        }
        for (int j = 0; j < 4; j++) //setelah itu tinggal kita print
        {

            for (int k = 0; k < count; k++) //print spasi dulu sebelum angka dengan batas count ini, count nantinya akan bertambah tergantung batas
            {
                printf(" ");
            }

            printf("%d\n", data[i].arr[j]); //print angkanya
        }
        count += batas; //tambahkan count dengan batas tergantung digitnya
    }
}