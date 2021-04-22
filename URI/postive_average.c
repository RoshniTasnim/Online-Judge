#include<stdio.h>
int main()
{
    int i,s = 0;
    double n[5],j = 0.00,a;
    for(i =0;i<6;i++)
    {
        scanf("%lf",&n[i]);
    }
    for(i = 0;i<6;i++)
    {
        if(n[i]>0.0)
        {
            s = s+1;
            j = j+n[i];
        }
    }
    a = j/(double)s;
    printf("%d valores positivos\n%.1lf\n",s,a);
    return 0;
}
