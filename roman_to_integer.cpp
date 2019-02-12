#include<bits/stdc++.h>
using namespace std;

int main(){

	
	string s;
	
	cin>>s;
	
	int n=s.length(),i,ans=0;
	
	map<char,int> m1,m2;
	
	m1['I']=1;m1['V']=2;m1['X']=3;m1['L']=4;m1['C']=5;m1['D']=6;m1['M']=7;
	
	m2['I']=1;m2['V']=5;m2['X']=10;m2['L']=50;m2['C']=100;m2['D']=500;m2['M']=1000;
	
	i=0;
	
	while(i<n){
		
		if(i+1<n && m1[s[i]]<m1[s[i+1]]){
			
			ans=ans+(m2[s[i+1]]-m2[s[i]]);
			
			i=i+2;
		}
		
		else if(i+1<n && m1[s[i]]>=m1[s[i+1]]){
			
			ans+=m2[s[i]];
			
			i++;
		}
		
		else if(i+1==n){
			
			ans+=m2[s[i]];
			
			i++;
		}
		
		//cout<<ans<<endl;
	}
	
	cout<<ans<<endl;
	

}







