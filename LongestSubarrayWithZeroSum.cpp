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
int longestSubarrayWithSumZero(int *a,int n){
    unordered_map <int,int> s;
    int pre=0,len=0;
    rep(i,0,n){
        pre+=a[i];
        if(a[i] == 0 and len == 0)len=max(len,1);
        if(pre==0)len=max(len,i+1);
        if(s.find(pre)!=s.end()){
            len=max(len,i-s[pre]);
        }
        else{
            s[pre]=i;
        }
       
    }
    return len;
}     
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        rep(i,0,n){
            cin>>a[i];
        }
        cout<<longestSubarrayWithSumZero(a,n);
    }
    return 0;
}
