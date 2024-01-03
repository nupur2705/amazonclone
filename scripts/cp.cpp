#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;cin>>s;
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a'||s[i]=='e'){
                ans+=s[i];
                ans+=s[i-1];
                ans+='.';
                i-=2;
            }else{
                ans+=s[i];
                ans+=s[i-1];
                ans+=s[i-2];
                ans+='.';
                i-=3;

            }
        }for(int i=ans.size();i>=0;i++){
            cout<<ans[i];
        }cout<<endl;
    }
}