#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int a[101];

int main()
{
    int n,i,j,e,o,k,l;
    while(cin>>n)
    {
        e = 0;
        o = 0;
       for(i = 1;i<=n;i++)
      {
        scanf("%d",&a[i]);
      }
      for(j = 1; j<=n;j++ )
      {
        if(a[j]%2 == 0)
            e++;
        else
            o++;
      }
      if(e>o)
      {
        for(k = 1;k<=n;k++)
        {
            if(a[k]%2 != 0)
                printf("%d\n",k);
        }
      }
      else
       {
        for(l = 1;l<=n;l++)
        {
            if(a[l]%2 == 0)
                printf("%d\n",l);
        }
       }
       memset(a,0,sizeof(a));
    }
    return 0;
}
