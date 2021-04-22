#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int arr[1001];
int main()
{
    int i,j,k,n;
    while(scanf("%d",&n)!= EOF)
    {
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
                cout<<arr[j]<<" "<<arr[k]<<" "<<c<<endl;
                cout<<j<<" "<<k<<" "<<endl;
            }
        }
    }
    printf("Minimum exchange operations : %d\n",c);
    memset(arr,0,sizeof(arr));
    }
   return 0;
}
