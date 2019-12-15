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
#define rep(i,a,b)   for(ll i=a;i<b;i++)
#define repb(i,a,b)  for(ll i=a;i>=b;i--)
#define debug(x,y)  cout<<x<<" "<<y<<"\n";
 
using namespace std;
bool checksubarraywithzerosum(ll *arr,ll n){
    unordered_set <int> s;
    int pre=0;
    rep(i,0,n){
        pre+=a[i];
        if(pre == 0 or s.find(pre)!=s.end()){
            return true;
        }
        s.insert(pre);
    }
    return false;
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
        if(checksubarraywithzerosum(a,n)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
