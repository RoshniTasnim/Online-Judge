#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll m,n,a,h,w,r;
    cin>>m>>n>>a;
    h = m/a;
    w = n/a;
    if(m%a != 0)
        h = h+1;
    if(n%a != 0)
        w = w+1;
    r = h*w;
    cout<<r<<endl;
    return 0;
}
