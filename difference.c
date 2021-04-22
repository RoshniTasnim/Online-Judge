#include<stdio.h>
int main()
{
    int A,B,C,D,DIFERENCA,x,y;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    x = A*B;
    y = C*D;
    DIFERENCA = x-y;
    printf("DIFERENCA = %d\n",DIFERENCA);
    return 0;
}
