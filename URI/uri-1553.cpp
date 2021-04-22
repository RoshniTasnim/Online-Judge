#include<iostream>
#include<cstdio>
#include<cstring>
int a[1009];
using namespace std;

int main()
{
    int n,k,i,j,l,p;
    while(scanf("%d%d",&n,&k))
    {
         int c = 0;
        if(n==0&&k==0)
            break;
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&p);
                a[p]++;
            }
            for(j=0;j<1009;j++)
            {
              // for(l=0;l<a[j];l++)
               //{
                    if(a[j]>=k)
                      c++;
                      //break;
              // }
            }
        }
         printf("%d\n",c);
         memset(a,0,sizeof a);
    }
    return 0;
}
