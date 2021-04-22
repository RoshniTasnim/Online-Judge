#include<stdio.h>
int main()
{
    float x,y,a,b,MEDIA;
    scanf("%f%f",&x,&y);
    a = x*3.5;
    b = y*7.5;
    MEDIA = (a+b)/(3.5+7.5);
    printf("MEDIA = %.5f",MEDIA);
    return 0;
}
