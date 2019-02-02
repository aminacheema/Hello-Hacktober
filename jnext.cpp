#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{

    int t,n,i;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {

           cin>>a[i];

        }
        int j;

       for(i=n-2;i>=0;i--)
       {

           if(a[i]<a[i+1])
            break;

       }
       if(i==-1)
       {

           cout<<"-1"<<endl;
       }
       else  {
       for(j=i+1;j<n;j++)
           {

               if(a[j]<=a[i])
                break;
           }
           swap(a[i],a[j-1]);
           sort(a+i+1,a+n);

    for(i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;

    }
    }
    return 0;
}
