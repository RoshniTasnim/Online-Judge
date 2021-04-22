#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int ar[1000];

int main()
{
    long long tes;
    int n,i,j, s,c;
    float av,r;
    scanf("%lld",&tes);
    while(tes--)
    {
        scanf("%d",&n);
        s = 0;
        r = 0;
        c = 0;
        memset(ar,0,sizeof ar);
        for(i = 0;i<n;i++)
        {
            scanf("%d",&ar[i]);
            s+=ar[i];
        }
        r = s/n;
        for(j = 0;j<n;j++)
        {
            if(ar[j]>r)
                c++;
        }
        av =float (c*100)/n;
        printf("%.3f%%\n",av);
    }

}
