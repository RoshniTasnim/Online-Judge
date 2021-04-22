#include<bits/stdc++.h>
using namespace std;
int a[20];
char s[27];

int main()
{
    string s1,s2;
    vector<int>v;
    vector<char>str;
    char c;
    int i,j,k,l,n,t,x;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        cin>>s1;
        n=s1.length();
        printf("Case %d: ",i);
        for(j=0; j<n; j++)
        {
            x=0;
            if(s1[j]>='A'&&s1[j]<='Z')
                c=s1[j];
            else if(s1[j]>='0'&&s1[j]<='9')
            {
                x+=s1[j]-'0';
                j++;
                while(s1[j]>='0'&&s1[j]<='9')
                {
                    x=x*10+s1[j]-'0';
                    j++;
                }
                j--;
                for(k=0; k<x; k++)
                {
                    printf("%c",c);
                }
            }
            s1.clear();
            s2.clear();
            v.clear();
            str.clear();
        }
        cout<<endl;
    }
    return 0;
}
