#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++) cin>>a[i];
	    int currsum=a[0],maxsum=a[0];
	    for(i=1;i<n;i++){
	        currsum=max(currsum+a[i],a[i]);
	        maxsum=max(maxsum,currsum);
	    }
	    cout<<maxsum<<"\n";
	}
	return 0;
}
