#include<bits/stdc++.h>
using namespace std;
bool bs(int n,vector<int > v)
{

    int b=0,e=v.size()-1,m;
    while(b<=e)
    {
        m=(b+e)/2;
        if(v[m]>n)
            e=m-1;
        else if(v[m]<n)
        b=m+1;
        else
            return true;


    }
    return false;

}
int main()
{

    int t,l;
    cin>>t;
    l=1;
    while(t--)
    {

        int n,c=0,k=0;
        cin>>n;
        vector<int > v(n),a;

        int i,j;
        for(i=0;i<n;i++)
        {


        cin>>v[i];
        if(v[i]==1)
            k++;

        }
        for(i=0;i<n;i++)
        {

            for(j=i+1;j<n;j++)
            {

               if(v[i]*v[j]!=1&&bs(v[i]*v[j],v))

               {
                   c++;

               }
            }
        }
        cout<<"Case #"<<l<<": "<<c+(1?k>2:0)<<endl;
        l++;

    }
    return 0;

}
