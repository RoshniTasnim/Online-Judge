#include<stdio.h>
int main()
{
    int x,y,y2,t,i,s = 0;
    scanf("%d%d",&x,&y);
    y2 = y+1;
   for(i=y2;i<x;i++)
    {
      if(y2%2 == 1)
      {
          s = y2+i;
      }
    }
   /** t = x-y;
    while(t--)
    {
        x--;
        if(x%2 ==1)
            s = s+x;
    }**/
    printf("%d\n",s);
    return 0;
}
