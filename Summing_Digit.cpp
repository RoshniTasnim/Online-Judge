#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long n,s;
    while(cin>>n)
    {
        if(n == 0)
            break;
        while(1)
        {
            s = 0;
            while(n!= 0)
            {
                s+= n%10;
                n = n/10;
            }
            if(s/10 == 0)
                break;
            else
                {
                    n = s;
                    s = 0;
                }

        }
        cout<<s<<endl;
    }
    return 0;
}
