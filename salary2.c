#include<stdio.h>
int main()
{
    char a[100];
    double m,s,e,t;

    scanf("%s%lf%lf",a,&m,&s);


    e = (15*s)/100;
    t = m+e;

    printf("TOTAL = R$ %.2lf\n",t);
    return 0;
}
