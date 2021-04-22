#include<bits/stdc++.h>
using namespace std;

int n, k;
bool use[35];
char str[1005];
vector<char> res;

void backtrack(int idx)
{
    if(res.size()==k)
    {
        for(int j=0; j<k; j++)
            printf("%c", res[j]);
        printf("\n");
        return;
    }
    for(int i=idx; i<n; i++) {
        if(use[i]==0)
    {
        use[i]=1;
        res.push_back(str[i]);
        backtrack(i+1);
        use[i]=0;
        res.pop_back();
    }
    while(str[i]==str[i+1])i++;
    }
};

int main()
{
    int tn, tc=1;
    while(scanf("%s%d", str, &k)!=EOF)
    {
        memset(use, false, sizeof(use));
        n=strlen(str);
        sort(str, str+n);
        backtrack(0);
    }
    return 0;
}
