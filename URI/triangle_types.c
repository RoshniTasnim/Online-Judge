#include<stdio.h>
#include<math.h>
int main()
{
    double a[3],A,B,C,A1,B1,C1,t;
    int i,j;
    for(i = 0;i<3;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(i = 0;i<3;i++)
    {
        for(j = i+1;j<3;j++)
        {
            if(a[i]<a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    A = a[0];
    B = a[1];
    C = a[2];
    A1 =pow(a[0],2);
    B1 = pow(a[1],2);
    C1 = pow(a[2],2);
    if(A>B+C||A==B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
         if(A == B&&A==C)
           printf("TRIANGULO EQUILATERO\n");
         else if(A==B||A==C||B==C)
           printf("TRIANGULO ISOSCELES\n");
    }
    else if(A1 == B1+C1)
    {
        printf("TRIANGULO RETANGULO\n");
            if(A == B&&A==C)
               printf("TRIANGULO EQUILATERO\n");
            else if(A==B||A==C||B==C)
               printf("TRIANGULO ISOSCELES\n");
    }
    else if(A1>B1+C1)
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if(A == B&&A==C)
          printf("TRIANGULO EQUILATERO\n");
        else if(A==B||A==C||B==C)
          printf("TRIANGULO ISOSCELES\n");
    }
    else if(A1<B1+C1)
    {
        printf("TRIANGULO ACUTANGULO\n");
        if(A == B&&A==C)
          printf("TRIANGULO EQUILATERO\n");
        else if(A==B||A==C||B==C)
          printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
