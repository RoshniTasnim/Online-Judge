#include<stdio.h>
int main()
{
    int i,s = 0;
    int n[5];//j = 0.00,a;
    for(i = 0;i<6;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i =0;i<6;i++)
    {
        if(n[i]%2 == 0)
        {
               s = s+1;
        }
    }
    printf("%d valores positivos\n",s);
    return 0;
}
