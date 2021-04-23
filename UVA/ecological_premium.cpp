#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main()
{
    int t,f,i,j,k;
    int pri,s = 0;
    float area,animal,env,av,pea;

    while(scanf("%d",&t)!=EOF)
    {
        for(j=0;j<t;j++)
        {
            cin>>f;
        for(i = 0; i<f; i++)
        {
           cin>>area>>animal>>env;
           //av = (area/animal);
          // pea = av*env;
           pri = area*env;
           s = s+pri;

        }
        cout<<s<<endl;
        s = 0;
     }
    }
    return 0;
}
