#include<iostream>
#include<math.h>
using namespace std;
double power(double n,int p=2)
{
double t;
t=pow(n,p);
return t;
}

int main()
{
  double num,ans;
  int p;
  cout<<"Enter the number:"<<endl;
  cin>>num;
  cout<<"Enter the power:"<<endl;
  cin>>p;
  if(p==0)
    {
      ans=power(num);
      cout<<"Power of "<<num<<" is "<<ans<<endl;
    }
  else
    {
      ans=power(num,p);
      cout<<"Power of "<<num<<" is "<<ans<<endl;
    }
}
