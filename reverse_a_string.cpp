#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	
	getline(cin,s);
	
	int n=s.length(),i;
	
	string fs="",sam;
	
	while(i<n){
		
		sam="";
		
		while(i<n && s[i]!=' '){
			
			sam+=s[i];
			
			i++;
		}
		
		if(sam!="") fs=" "+sam+fs;
		
		i++;
	
	}
	
	i=0;
	
	while(i<n && fs[i]==' ') i++;
	
	fs.erase(0,i);
	
	cout<<fs<<endl;
	
}






