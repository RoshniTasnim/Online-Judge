#include<stdio.h>

int main()
{
    int n,h;
    float s1,s2;

    scanf("%d %d %f",&n,&h,&s1);
    printf("NUMBER = %d\n",n);
    s2 =(float) h*s1;
    printf("SALARY = U$ %.2f\n",s2);

    return 0;
}
