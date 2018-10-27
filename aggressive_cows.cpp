#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;
int fun(int ,int pos[],int ,int );

int main()
{
    int t,i,n,beg,end,c;
    cin>>t;
    while(t--)
    {

        cin>>n>>c;
        int pos[n];
        for(i=0;i<n;i++)
        {

            scanf("%d",&pos[i]);
        }
        sort(pos,pos+n);
        beg=pos[0];
        end=pos[n-1];
        int mid;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(fun(n,pos,c,mid))
            {
                beg=mid;

            }
            else
                end=mid-1;
        }
        printf("%d",mid);
    }
  return 0;
}
int fun(int n,int pos[],int c,int x)
    {
        int i;
        int last=pos[0];
        int cows_placed=1;
        for(i=1;i<n;i++)
        {

            if(pos[i]-last>=x)
            {

                last=pos[i];
                cows_placed+=1;
            }
        }
        if(cows_placed>=c)
            return 1;
            else return 0;
    }
