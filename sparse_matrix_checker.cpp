#include <iostream>
using namespace std;
int main() {
	int m,n;
	cout<<"Enter m,n"<<endl;
	cin>>m;
	cin>>n;
	int a[m][n];
	cout<<"Enter Elements"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int count=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==0){
				count++;
			}
		}
	}
	int total=m*n;
	total=(2*total)/3;
	if(count>=total){
		cout<<"Sparse Matrix"<<endl;
	}
	else{
		cout<<"Not a Sparse Matrix"<<endl;
	}
	return 0;
}
