#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    string s,s1;
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int c = 0;
        stack<char>st;
        cin>>s;

        for(int i = 0;i<s.length();i++)
        {
            if(s[i] == '<' || s[i] == '>')
                s1+=s[i];
        }
        for(int i =0;i<s1.length();i++)
        {
            if(st.size()>0 && s1[i] == '>' && st.top() == '<')
            {
                st.pop();
                c++;

            }
            else
                st.push(s1[i]);
        }
        cout<<c<<endl;
        s.clear();
        s1.clear();
    }
    return 0;
}
