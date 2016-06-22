#include <bits/stdc++.h>
#define ll  long long int
#define M   10000
using namespace std;

int main()
{    int n,h,t;
       cin>>t;

      while(t--)
         {string a;

   cin>>n>>h;
  for(int i=0;i<n; i++)
      {        if(i<n-h)
            a.push_back('0');

     else
      a.push_back('1');}

     do
     {
           cout<<a<<endl;


     }while(next_permutation(a.begin(),a.end()));
     a.clear();
  if(t)cout<<"\n";
     }

}

