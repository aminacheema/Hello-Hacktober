#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        int i,k;
        if(s.size()%2==0)
            k=s.size()/2-1;
        else
            k=s.size()/2;
     if(s[k]=='9')
        s[k]='0';
     s[k-1]++;


        for(i=0;i<=k;i++)
        {

            s[s.size()-i-1]=s[i];

        }
        cout<<s<<endl;

    }
    return 0;

}
