#include "header.h" //panggil header
int main()
{
    angka data[101]; //panggil struct

    //scan jumlah
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &data[i].arr[j]); //scan struct
        }
    }
    solve(data); //panggil prosedur

    return 0; //reset kode ke 0
}