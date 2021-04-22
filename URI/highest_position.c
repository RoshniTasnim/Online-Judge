#include<stdio.h>
int main()
{
    int i,a[100],j,max,loc;
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
        for(i=1;i<100;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            loc = i+1;
        }
    }
    printf("%d\n%d\n",max,loc);
    return 0;
}
