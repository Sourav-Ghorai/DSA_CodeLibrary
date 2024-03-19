#include<bits/stdc++.h>
#include<vector>
using namespace std;
int encoding(){
    char arr[26];
    for(int i = 0; i<26; i++){
        char n;
        cin>>n;
        arr[i] = n;
    }
    int n; cin>>n;
    vector<string> word;
    for(int i = 0; i<n; i++){
        string str;
        cin>>str;
        word.push_back(str);
    }
    unordered_map<string,int> mp;
    for(auto i: word){
        int m = i.length(); string str;
        for(int j = 0; j<m; j++){
            str += arr[i[j]-'A'];
        }
        if(mp[str]==1) return 1;
        mp[str] = 1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        int x = encoding();
        if(x){
            cout<<"Case #"<<i<<": YES"<<endl;
        }
        else cout<<"Case #"<<i<<": NO"<<endl;
    }
}