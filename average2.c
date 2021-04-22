#include<stdio.h>
int main()
{
    float A,B,C,x,y,z,MEDIA;
    scanf("%f%f%f",&A,&B,&C);
    x = A*2;
    y = B*3;
    z = C*5;
    MEDIA = (x+y+z)/(2+3+5);
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}
