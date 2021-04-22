#include<stdio.h>
int main()
{
    int i,j,c,f;
    c = 7;
    f = 5;
    for(i =1;i<=9;i++)
    {
        for(j=c;j>=f;j--)
            printf("I=%d J=%d\n",i,j);
        c =c+2;
        f = f+2;
        i++;
    }
    return 0;
}
