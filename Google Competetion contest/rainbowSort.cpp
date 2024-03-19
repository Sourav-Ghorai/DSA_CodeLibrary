#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
int rainbow(){
    unordered_map<int,int> mp;
    int n,last = -1;
    cin>>n;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        if(a!=last){
            if(mp[a]==1) return 1;
            mp[a] = 1;
            ans.push_back(a);
        }
        last = a;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        int x = rainbow();
        if(x) cout<<"Case #"<<i<<": IMPOSSIBLE"<<endl;
        else{
            cout<<"Case #"<<i<<": ";
            for(auto j: ans){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
}