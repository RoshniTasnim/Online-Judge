#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for(int i = 1; i<= n; i++)
    {
        b = 0;
        cin>>a;
        if(a>10)
        {
            b = a-10;
            cout<<b<<" "<<a-b<<endl;
        }
        else if(a %2 == 0)
              printf("Case %d:%d %d\n",i,b,a);
    }
    return 0;
}
