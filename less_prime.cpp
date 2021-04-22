#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long int ll;
int prime[3000000],nprime;
int mark[10000002];

void sieve(int n)
{
    int i,j,c=0,limit = sqrt(n*1.)+2;
    mark[1]=1;
    for(int i =4;i<=n;i+=2)
    {
        mark[i]=1;
    }
    prime[nprime++]=2;

    for(i = 3; i<=n; i++)
    {
        if(mark[i]==0)
        {
            prime[nprime++]=i;
            if(i<=limit)
            {
                for(j = i*i; j<=n;j+=i*2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
   //cout<<nprime;
}
int Solve(int n) {
    int dif = 0, m;
    for (int i=0; i<10002 && prime[i]<=n; i++)
        {
        int p = n/prime[i];
        if (n - prime[i]*p > dif)
            {
            dif = n - prime[i]*p;
            m = prime[i];
        }
    }
    return m;
}
int main()
{
    sieve(100000);
    int n,tes;
    scanf("%d",&tes);
    while(tes--)
    {
        scanf("%d",&n);
        printf("%d\n", Solve(n));
    }
    return 0;
}
