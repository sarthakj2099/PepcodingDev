#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar1[n];
    int ar2[n];
    int ar3[n];
    
    for(int i=0;i<n;i++) cin>>ar1[i];
    for(int i=0;i<n;i++) cin>>ar2[i];
    for(int i=0;i<n;i++) cin>>ar3[i];
    
    int r;
    cin>>r;
    
    while(r--)
    {
        bool arr[5000]={0};
        int a,b,sum=0;
        cin>>a>>b;
        for(int i=a-1;i<b;i++)
        {
            if(!arr[ar1[i]])
            {
                sum++;
                arr[ar1[i]]=1;
            }
        }
        cin>>a>>b;
        for(int i=a-1;i<b;i++)
        {
            if(!arr[ar2[i]])
            {
                sum++;
                arr[ar2[i]]=1;
            }
        }
        cin>>a>>b;
        for(int i=a-1;i<b;i++)
        {
            if(!arr[ar3[i]])
            {
                sum++;
                arr[ar3[i]]=1;
            }
        }
        cout<<sum<<endl;
    }
}