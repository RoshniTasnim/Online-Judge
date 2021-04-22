#include<iostream>
 using namespace std;
  const int maxn=5004;
  int a[maxn];
  int main()
  {
      int n;
      while(cin>>n)
      {
         if(n==1)
         {
            cout<<1<<endl;
             cout<<1<<endl;
         }
         else if(n==2)
         {
             cout<<1<<endl;
             cout<<1<<endl;
         }
         else if(n==3)
         {
             cout<<2<<endl;
             cout<<"1 3"<<endl;
         }
         else if(n==4)
         {
             cout<<4<<endl;
            cout<<"3 1 4 2"<<endl;
         }
         else{
             cout<<n<<endl;
             for(int i=1;i<=n;i++)
                 a[i]=i;
             int k=(n+1)/2;
             int first=0;
             for(int i=1;i<=k;i++)
             {
                 if(first)
                    cout<<" ";
                 first++;
                 cout<<a[i];
                 if(i+k<=n){
                     cout<<" "<<a[i+k];
                 }
             }
             cout<<endl;
         }
     }
     return 0;
 }
