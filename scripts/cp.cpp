/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=b&&a!=c)cout<<a<<endl;
    else if(b!=a&&b!=c)cout<<b<<endl;
    else cout<<c<<endl;
}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ char a[3][3];
      for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        cin>>a[i][j];
      } }for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
           if(a[i][j]=='?'){
            if(i==0){
                if((a[1][j]=='B'||a[1][j]=='C')&&)
            }
           }

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n];ll sum=0; ll ans=0;
for(int i=0;i<n;i++){
    cin>>a[i];sum+=a[i];


}ll s=sqrt(sum);
if(s*s==sum){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}
}
}*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string a="";a+=s[0];

        for(int i=1;i<s.size();i++){
            if(s[i]=='a'||s[i]=='b'){
                a+=s[i];
                a+='.';
            }else if(s[i]=='b'||s[i]=='c'||s[i]=='e'){
                if(s[i+1]=='a'||s[i+1]=='e'){
                    a+=s[i];
                    a+='.';
                }
            }
        }cout<<a<<endl;

    }

}