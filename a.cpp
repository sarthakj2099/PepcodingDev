#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    //int e=3;
    for(int i=0;i<n/2;i++)
    {
    int j=1,k,q,l=4*(n-2*i)-4;
    int e=l/2,f=l/2;
    char ar2[l];
    if(arr[0][0]=='X'||arr[0][0]=='x') continue;
    for(k=1+i, q=0+i;k<n-i;k++)
    {
        ar2[j++]=arr[q][k];
        if(arr[q][k]=='X'||arr[q][k]=='x')
        {
            int p=j-1;
            if(j-1>l/2) p=l-j+1;
            if(p<f)
            {
                f=p;
                e=j-1;
            }
        }
    }
    for( k=n-1-i, q=1+i;q<n-i;q++)
    {
        ar2[j++]=arr[q][k];
        if(arr[q][k]=='X'||arr[q][k]=='x')
        {
            int p=j-1;
            if(j-1>l/2) p=l-j+1;
            if(p<f)
            {
                f=p;
                e=j-1;
            }
        }
    }
    for( k=n-2-i, q=n-1-i;k>=0+i;k--)
    {
        ar2[j++]=arr[q][k];
        if(arr[q][k]=='X'||arr[q][k]=='x')
        {
            int p=j-1;
            if(j-1>l/2) p=l-j+1;
            if(p<f)
            {
                f=p;
                e=j-1;
            }
        }
    }
    for( k=0+i, q=n-2-i;q>0+i;q--)
    {
        ar2[j++]=arr[q][k];
        if(arr[q][k]=='X'||arr[q][k]=='x')
        {
            int p=j-1;
            if(j-1>l/2) p=l-j+1;
            if(p<f)
            {
                f=p;
                e=j-1;
            }
        }
    }
    if(e==f) cout<<f<<" ";
     else cout<<"-"<<f<<" ";
     //if(e==0) continue;
    j=0;
    for(k=0+i, q=0+i;k<n-i;k++) arr[q][k]=ar2[((j++)+e)%l];
    for( k=n-1-i, q=1+i;q<n-i;q++) arr[q][k]=ar2[((j++)+e)%l];
    for( k=n-2-i, q=n-1-i;k>=0+i;k--) arr[q][k]=ar2[((j++)+e)%l];
    for( k=0+i, q=n-2-i;q>0+i;q--) arr[q][k]=ar2[((j++)+e)%l];
    
    //for(int D=0;D<4*(n-1-2*i);D++) cout<<ar2[D]<<" ";
    //cout<<endl;}
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}


