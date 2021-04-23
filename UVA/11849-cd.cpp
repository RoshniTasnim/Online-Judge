#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
long long a[10000000];
long long freq[100000000];

using namespace std;

int main()
{
    long long n,m,p,q,a;
    int i,j,k,l;

    while(scanf("%lld %lld",&n,&m))
    {
        if(n == 0 && m==0)
            break;
        int c = 0;
        for(i=0;i<n;i++)
        {
          scanf("%lld",&p);
          freq[p] = -1;
        }
        for(j = 0;j<m;j++)
        {
            scanf("%lld",&q);
            if(freq[q] == -1)
              c++;
        }


      printf("%d\n",c);
      memset(freq,0,sizeof(freq));
    }
}
