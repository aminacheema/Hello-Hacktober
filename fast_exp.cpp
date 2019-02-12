#include<bits/stdc++.h>
#define ll long long int
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
using namespace std;

ll MOD;

ll fast_exp(ll base, ll exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}

int main(){

	fast();
	
	ll base,exp;
	
	cin>>base>>exp>>MOD;
	
	ll ans=fast_exp(base,exp);
	
	cout<<ans;
}

