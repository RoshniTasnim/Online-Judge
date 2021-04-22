#include<stdio.h>
int main()
{
    int tes,a,b,c,i;
    b =0;
    c =1;
    scanf("%d",tes);
    for( i =1;i<=tes;i++)
    {
        scanf("%d",a);
        if(a == 10)
            printf("Case %d:%d %d\n",i,b,a);
        else if(a %2 != 0)
              printf("Case %d:%d %d\n",i,c,a-1);
            else if(a %2 == 0)
              printf("Case %d:%d %d\n",i,b,a);

    }
}

