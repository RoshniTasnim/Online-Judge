#include<stdio.h>

int main()
{
    int tes;
    scanf("%d",&tes);
    for(int i =1;i<=tes;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
    }
    return 0;
}
