#include<stdio.h>
int main()
{
    int i,j,su,a,n[4];
    //s = 0;
    for(i = 0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i = 0;i<5;i++)
    {
        if(n[i]%2 == 0)
         {
             //printf("even\n");
             a = n[i];
             su = su+a;
             //s++;
         }
        // else
            //s = 0;
    }
    printf("%d valores pares\n",su);
    return 0;
}
