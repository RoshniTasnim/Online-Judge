#include<iostream>
#include<stack>
#include<stdio.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        stack<char>st;
        for(int i =0;i<s.length();i++)
        {
        if(st.size()>0 && (s[i]==')' || s[i]==']') && (st.top()=='(' || st.top()=='['))
            st.pop();
        else
            st.push(s[i]);
        }
        if(st.size()==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

