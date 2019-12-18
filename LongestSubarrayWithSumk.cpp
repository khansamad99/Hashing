#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define po          pop_back
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pii>
#define mi          map<int,int>
#define ms          map<string,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define rep(i,a,b)   for(int i=a;i<b;i++)
#define repb(i,a,b)  for(ll i=a;i>=b;i--)
#define debug(x,y)  cout<<x<<" "<<y<<"\n";
 
using namespace std;
int longestSubarrayWithSumk(int *a,int n,int k){
    unordered_map <int,int> s;
    int pre=0;
    int len=0;
    rep(i,0,n){
       pre+=arr[i];
       if(pre==k)len=max(len,i+1)
       if(s.find(pre-k)!=s.end){
           len=max(len,i-s[pre-k]);
       }
       else{
           s[pre]=i;
       }
    }
   
}     
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        rep(i,0,n){
            cin>>a[i];
        }
        cout<<longestSubarrayWithSumK(a,n,k);
    }
    return 0;
}
