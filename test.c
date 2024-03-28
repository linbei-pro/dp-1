#include<bits/stdc++.h>
using namespace std;
 
const int N = 100010;
typedef long long LL;
int a[N],b[N],dp[N];
 
 
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		int shuru;
		cin>>shuru;
		b[i]=shuru%10;
		while(shuru>10)shuru/=10;
		a[i]=shuru;
	}
	int maxzhi=0;
	for(int i=0;i<n;++i)
	{
		dp[i]=1;
		for(int j=0;j<i;++j)
		{
			if(b[j]==a[i])dp[i]=max(dp[i],dp[j]+1);
		}
		maxzhi=max(maxzhi,dp[i]);
	}
	cout<<n-maxzhi;
	return 0;
}
 
 
/*
5
11 121 22 12 2023
*/
