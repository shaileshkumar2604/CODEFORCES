#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
int cnt,sum,sum1,arr[N],has[N];
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
   }

   for(int i=0;i<n;i++)
   {
       cin>>has[i];
       sum1+=has[i];

   }

   return 0;
}
//_4_4_3_//
