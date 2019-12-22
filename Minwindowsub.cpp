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
string minwindowsub(string s,string pat){
    int n1=sz(s);
    int n2=sz(pat);
    if(n1<n2){
        cout<<"No Window\n";
        return "";
    }
    int hash_pat[256] = {0};
    int hash_str[256] = {0};
    rep(i,0,n2){
        hash_pat[pat[i]]++;
    }
    int start=0,startindex=-1,min_len=INT_MAX,count=0;
    for(int j=0;j<n1;j++){
        hash_str[s[j]]++;
        if(hash_pat[s[j]]!=0 and hash_str[s[j]]<=hash_pat[s[j]]){
            count+=1;
        }
        if(count==n2){
            while(hash_str[s[start]]>hash_pat[s[start]] || hash_pat[s[start]]==0){
                if(hash_str[s[start]]>hash_pat[s[start]]){
                    hash_str[s[start]]--;
                }
                start+=1;
            }
            int len_min = j-start+1;
            if(min_len>len_min){
                min_len=len_min;
                startindex=start;
            }
        }
    }
    if(startindex==-1){
        cout<<"No window\n";
        return "";
    }
    return s.substr(startindex,min_len);
    
}     
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<minwindowsub(s1,s2);
    }
    return 0;
}
