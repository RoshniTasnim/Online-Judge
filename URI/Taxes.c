#include<stdio.h>
int main()
{
    float a,d,rt,r1,r2,r3,r;
    scanf("%f",&a);
    if(a<= 2000.00)
        printf("Isento\n");
    else if(a>= 2000.01 && a<= 3000.00)
    {
        d = a-2000.00;
        r = (d*8)/100;
        printf("R$ %.2f\n",r);
    }
    else if(a>=3000.01 && a<= 4500.00)
    {
        d = a-2000.00;
        rt = d-1000.00;
        r =((1000*8)/100)+((rt*18)/100);
        printf("R$ %.2f\n",r);
    }
    else if(a>4500.00)
    {
        d = a-2000.00;
        rt = d -2500.00;
        r = ((1000*8)/100)+((1500*18)/100)+((rt*28)/100);
        printf("R$ %.2f\n",r);
    }
    return 0;
}
