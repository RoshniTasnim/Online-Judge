#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        t = a;
        a =b;
        b = t;
    }
    if(b%a == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}
