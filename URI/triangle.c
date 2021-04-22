#include<stdio.h>
int main()
{
    float a,b,c,A;
    scanf("%f%f%f",&a,&b,&c);
    A = ((a+b)*c)/2;
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
                printf("Perimetro = %.1f\n",a+b+c);
            else
                printf("Area = %.1f\n",A);
        }
        else
          printf("Area = %.1f\n",A);
    }
     else
        printf("Area = %.1f\n",A);
    return 0;
}
