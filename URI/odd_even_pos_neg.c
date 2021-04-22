#include<stdio.h>
int main()
{
    int o,e,p,ne,i,n[5];
    o =0;
    e = 0;
    p = 0;
    ne = 0;
    for(i =0;i<5;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]%2 == 0)
            e++;
        else
            o++;
        if(n[i]>0)
            p++;
        else if(n[i]<0)
            ne++;
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",ne);
    return 0;
}
