#include<iostream>
#include<stack>
#include<stdio.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        stack<char>st;
        string s1 = "";
        for(int i =0;i<s.length();i++)
        {
            if(s[i]==')' || s[i]=='(')
              s1+=s[i];
        }

    for(int i =0;i<s1.length();i++)
    {
        if(st.size()>0 && s1[i]==')' && st.top()=='(')
            st.pop();
        else
            st.push(s1[i]);
    }
    if(st.size() == 0)
        printf("correct\n");
    else
        printf("incorrect\n");
    }
    return 0;
}
