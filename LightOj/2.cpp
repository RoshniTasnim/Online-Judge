
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
   {
      int n,i,a[23];
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        int b;
        scanf("%d",&b);
        if(b == 0)
            printf("0 0\n");
        else if(b == 20)
            printf("10 10\n");
        else if(b<11)
            printf("%d %d\n",a[b],abs(b-a[b]));
        else
        {
            int p =10-a[b];
            printf("%d %d\n",p,abs(b-p));
        }
        a[b]++;
    }
    return 0;
   }

