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
int LongestConsecutiveSequence(int *a,int n){
    unordered_set <int> s;
    int ans = 0,x1,count=0;
    rep(i,0,n){
        s.insert(a[i]);
    }
    rep(i,0,n){
        if(s.find(a[i]-1)!=s.end()){
            continue;
        }
        else{
            count = 0;
            x1 = a[i];
            while(s.find(x1)!=s.end()){
                count++;
                x1++;
            }
            ans = max(ans,count);
            count = 0;
            
        }
    }
    return ans;
   
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
        cout<<LongestConsecutiveSequence(a,n);
    }
    return 0;
}
