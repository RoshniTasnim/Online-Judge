#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
int freq[2001];
using namespace std;

int main()
{
    vector<int>v,v1;
    int i,j,k,l,n,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p);
        freq[p]++;
    }

    for(j=0;j<2001;j++)
    {
        for(k=0;k<freq[j];k++)
        {
            if(freq[j]>0)
                 printf("%d aparece %d vez(es)\n",j,freq[j]);
            break;
       }
    }
    return 0;
}
