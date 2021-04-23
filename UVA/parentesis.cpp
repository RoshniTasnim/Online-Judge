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

        cin.ignore();
        getline(cin,s);
        stack<char>st;
        for(int i =0;i<s.length();i++)
        {
           if(st.size()>0 && s[i] == ')' && st.top == '(' )
            st.pop();
           else if(st.size()>0 && s[i] == ']' && st.top == '[' )
            st.pop();
           else
            st.push(s[i]);
        }
        if(st.size()==0)
            printf("correct\n");
        else
            printf("incorrect\n");
       s.clear();
    }
    return 0;
}
