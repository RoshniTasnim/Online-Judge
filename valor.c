#include<stdio.h>

int main()
{
    int n1,n2,a1,a2;
    float p1,p2,v1,v2,T;

    scanf("%d%d%f\n",&n1,&a1,&p1);
    scanf("%d%d%f",&n2,&a2,&p2);

    v1 = (float)a1*p1;
    v2 = (float)a2*p2;
    T = v1+v2;

    printf("VALOR A PAGAR: R$ %.2f\n",T);
    return 0;
}
