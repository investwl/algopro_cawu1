#include<stdio.h>

int fungsibit(int num)
{
    int count=0;
    while(num)
    {count+=num&1;
    num>>=1;}
    return count;
}

int main()
{
    int loop,i,length,j,k;
    int bit111=0,bit000=0;
    scanf("%d",&loop);
    for ( i = 0; i < loop; i++)
    {
        scanf("%d",&length);
        int array[length];
        int hasil;
        for ( j = 0; j < length; j++)
        {
            scanf("%d",&array[j]);
        }
        for ( j = 0; j < length; j++)
        {
            for ( k = 1+j; k < length; k++)
            {
            hasil=array[j]^array[k];
            int counting=fungsibit(hasil);
            if (counting>=3)
            {
                bit111++;
            }
            else bit000++;
            }
            
        }
        printf("Case #%d: %d %d\n",i+1,bit111,bit000);
        bit000=0;
        bit111=0;
    }
    
}