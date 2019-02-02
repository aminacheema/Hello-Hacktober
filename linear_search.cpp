#include<iostream>
using namespace std;
int main(){
	int n,j=0;
	cout<<"Enter no of elements"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter element  which you want to search"<<endl;
	int item,c=0;
	cin>>item;
	for(j=0;j<n;j++){
		if(a[j]==item){
			c++;
			break;
		}
			
	}
	if(c==1){
		cout<<item<<" found at ";
		cout<<j+1<<"th position"<<endl;
	}
	else
		cout<<"Not found"<<endl;
	return 0;
}
