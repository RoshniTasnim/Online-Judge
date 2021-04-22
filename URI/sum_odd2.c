#include<stdio.h>
int main()
{
    int x,y,x1,d,i,s;
    s =0;
    scanf("%d%d",&x,&y);
    x1 = x-1;
    d = x-y;
    for(i= 1;i<d;i++)
    {
        if(x1%2 == 1 || x1%2 == -1)
         {
            s = x1+s;
         }
          x1--;
    }
    printf("%d\n",s);
    return 0;
}
