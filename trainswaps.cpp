#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int arr[1001];
int main()
{
    int i,j,k,n,t;
    scanf("%d",&t);
    while(t--)
    {


          scanf("%d",&n);
            for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int c = 0;
    for(k = 1;k<n ;k++)
    {
        for( j = 0;j<k;j++)
        {
            if(arr[j]>arr[k])
            {
                c++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",c);
    memset(arr,0,sizeof(arr));
      }

   return 0;
}

