#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
		adiwish
	#define int long long
 
	int t;
	cin>>t;
	while(t--)
	{	
		int n;
		cin>>n;
		int a[n];
		float sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum = sum+a[i];
		}
		sum=sum/n;
		sum=sum*2;
		int x=sum;
		//cout<<sum<<" "<<x<<endl;
		if(sum-x>0)
			cout<<0<<endl;
		else
		{
			int ans =0;
			map<int,int> rem;
			for(int i=0;i<n;i++)
			{
				if(a[i]<=x)
					rem[a[i]]++;
			}
			int buf=0;
            for(auto it=rem.begin();it!=rem.end();it++){
                int l=it->first;
                if(rem.find(x-l)!=rem.end()){
                    if(l!=x-l) ans=ans+(rem[l]*rem[x-l]);
                    else buf=(rem[l]*(rem[l]-1))/2;
                }
            }
            ans=ans/2;
            ans+=buf;
			cout<<ans<<endl;
		}
 
	}
}