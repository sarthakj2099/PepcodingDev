#include<bits/stdc++.h>
using namespace std;

long long fact(long long n, long long a); 
  
long long nCr(long long n, long long r)
{	if(n==r) return 1;
 else if(r==1) return n;
  return fact(n,r+1) / fact(n - r,1); 
}
long long fact(long long n, long long a) 
{ 
    long long res = 1; 
    for (long long i = a; i <= n; i++) 
        res = res * i; 
    return res; 
}

int main()
{
  long long r,n;
  cin>>r>>n;
  long long l = n/r;
  long long k = n-l*r;
  long long sum=1,f=0;
  
  while(r--)
  {
  long long d =l;
      if(f<k)
      {
        d++;
        f++;
      }
     cout<<n<<" "<<d<<" ";
    sum*=nCr(n,d);
    cout<<sum<<endl;
    n-=d;
  }
  cout<<sum;
  
}
  
  