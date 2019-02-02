#include <iostream>

using namespace std;

int main()
{
  int t,n,i;
  cin>>t;
  while(t--)
  {
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
  cin>>arr[i];
  }
/*
  int small,sec_small;
  small=arr[0];
  for(i=1;i<n;i++)
  {

      if(small>arr[i])
        {small=arr[i];
        k=i;
        }
  }
   sec_small=arr[0];
  for(i=1;i<n;i++)
  {

      if((sec_small>arr[i])&&(i!=k))
        sec_small=arr[i];
  }*/
  int small=1000000;
  int sec_small=1000000;
  for(i=0;i<n;i++)
  {

      if(small>arr[i])
      {

          sec_small=small;
          small=arr[i];

      }
      else if((sec_small>arr[i])&&(arr[i]>small))
        sec_small=arr[i];
      }
  cout<<small+sec_small<<endl;
  }
    return 0;
}
