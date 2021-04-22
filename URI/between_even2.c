#include<stdio.h>
int main()
{
    int i,s,n[5];
    s =0;
    for(i =0;i<5;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]%2 == 0)
            s++;
    }
    printf("%d valores pares\n",s);
    return 0;
}
