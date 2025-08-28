#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int data;
    scanf("%d", &data);

    int *size = malloc(data);
    for(int i=0; i<data; i++)
    {
        int cek = 0;
        
        scanf("%d", &size[i]);
        cek = size[i] % 2;
        if(cek > 0)
        {
            printf("Bilangan %d merupakan bilangan ganjil \n", size[i]);
            
        }
        else
        {
            printf("Bilangan %d merupakan bilangan genap \n", size[i]);
        }
    }
}