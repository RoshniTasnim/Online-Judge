#include<iostream>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;

int main()
{

    string s,s1;
    while(cin>>s)
    {
            stack<char>st;
            for(int i = 0;i<s.length();i++)
    {
        if(s[i] == '(' || s[i] == ')')
            s1+=s[i];
    }
    for(int i =0;i<s1.length();i++)
    {
        if(st.size()>0 && (s1[i] == ')' && st.top() == '('))
            st.pop();
        else
            st.push(s1[i]);
    }
    if(st.size() == 0)
        cout<<"correct"<<endl;
    else
        cout<<"incorrect"<<endl;
    s.clear();
    s1.clear();
    }
    return 0;
}
