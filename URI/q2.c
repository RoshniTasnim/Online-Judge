#include<stdio.h>
int main()
{
 float a,b;
    scanf("%f%f",&a,&b);
    if(a>0.00 && b>0.00)
    printf("Q1\n");
    else if(a<0.00 && b>0.00)
    printf("Q2\n");
    else if(a<0.00 && b<0.00)
    printf("Q3\n");
    else if(a>0.00 && b<0.00)
    printf("Q4\n");
    else if(a==0.00 && b==0.00)
    printf("Origem\n");
    else if(b==0.00 && (a<0.00 || a>0.00))
    printf("Eixo X\n");
    else if(a==0.00 && (b<0.00 || b>0.00))
    printf("Eixo Y\n");

    return 0;
}

