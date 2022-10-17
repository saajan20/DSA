#include <bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define  pb push_back
#define  mp make_pair
using namespace std;


bool bIsCyclicOfA(ll a[],ll b[],ll n){
    
    ll startingPointInB=-1,i,j;
    
    for(i=0;i<n;i++){
        if(b[i]==a[0]){
            startingPointInB=i;
            break;
        }
    }

    if(startingPointInB>=0){
        for(i=0,j=startingPointInB;i<n;i++,j=(j+1)%n){
            //cout<<a[i]<<" "<<b[j]<<endl;
            if(a[i]!=b[j])
            break;
        }
        if(i==n)
        return true;
    }
    return false;
}

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	// your code goes here

ll t,ti;
cin>>t;
ti=1;
//cin.ignore();//to be used when using getline
while(t--)
{   
   ll n,k;
   cin>>n>>k;
   ll a[n],b[n],i;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
    for(i=0;i<n;i++){
       cin>>b[i];
   }
   
   if(bIsCyclicOfA(a,b,n)){
       if(k==0 and a[0]!=b[0])
        cout<<"Case #"<<ti<<": "<<"NO"<<endl;
       else
        cout<<"Case #"<<ti<<": "<<"YES"<<endl;
   }else{
       cout<<"Case #"<<ti<<": "<<"NO"<<endl;
   }
   
   ti++; 
}
 return 0;
}
