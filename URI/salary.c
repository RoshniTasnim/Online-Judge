#include<stdio.h>
int main()
{
    float s,n,e,p;
    scanf("%f",&s);
    if(s>= 0.00 && s<= 400.0)
    {
        e = (15*s)/100;
        n = s+e;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",n,e);
    }
    else if(s>=400.01 && s<= 800.00)
    {
        e = (12*s)/100;
        n = s+e;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",n,e);
    }
    else if(s>=800.01 && s<=1200)
    {
        e = (10*s)/100;
        n = s+e;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",n,e);
    }
    else if(s>=1200.01 && s<= 2000)
    {
        e = (7*s)/100;
        n = s+e;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",n,e);
    }
    else
    {
        e = (4*s)/100;
        n = s+e;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",n,e);
    }
    return 0;
}
