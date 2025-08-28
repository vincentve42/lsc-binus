#include <stdio.h>


int hitungPermutasi(int angka)
{
    int hasil = 1;
    for(int i=1; i<=angka; i++)
    {
        hasil *= i;
        
        
    }
    return hasil;
}

int main()
{
    int a;
    scanf("%d", &a);
    int hasil = hitungPermutasi(a);
    
    printf("Hasil : %d \n", hasil);
}