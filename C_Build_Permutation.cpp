#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define sg string
#define vi vector<int>
#define vc vector<char>
#define mi unordered_map<int,int> 
#define mc unordered_map<char,char>
#define mic unordered_map<int,char>
#define mci unordered_map<char,int>
#define pb push_back
#define pf push_front
#define sz(a) a.size()
// for loop
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,a,b) for(int i=a;i>=b;i--) // reverse forloop

#define ret return
#define bk break
#define endl "\n"
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int mod(int n){
     return n % 1000000007;
}
bool isprime(int n){
     if(n==1) ret false;
     for(int i=2;i*i<=n;i++)
          if(n%i==0) ret false;
     ret true;
}
bool cmp(int a, int b){
     return a>b;
}
int power(int a,int b){
     int temp=1;
     while(b--)
          temp*=a;
     return temp;
}


void code(){
     int num; cin>>num;
     vi v;
    //  int a=1;
    //  while(a<1000000001){
    //       v.pb(a);
    //       a*=2;
    //  }
    v.pb(8);
    //  f(i,0,sz(v)) cout<<v[i]<<" ";
    //  cout<<endl;
     string n;
     while(num!=0){
          n.pb(num%10+'0');
          num/=10;
     }
     //reverse(n.begin(),n.end());
     //cout<<n<<endl;
     string x="adi";
     int y,z;
     int ans=INT_MAX;
     f(i,0,sz(v)){
          string s;
          while(v[i]!=0){
               s.pb(v[i]%10+'0');
               v[i]/=10;
          }
          
          //reverse(s.begin(),s.end());
          //cout<<s<<" ";
          int temp=0;
          int si=0,ni=0;
          //cout<<"NOOOOOO"<<endl;
          f(ni,0,sz(n)){
              cout<<"hello"<<endl;
              cout<<ni<<" "<<si<<endl;
               if(ni==sz(s)){
                    ni++; 
                    bk;
               }

               if(s[si]!=n[ni]) temp++;
               else si++;
               cout<<"lllll"<<endl;
               // cout<<ni<<" "<<si<<endl;
               
          }
          cout<<ni<<" "<<si<<endl;
          temp+=(sz(s)-si);
          //temp+=ni-si;
          if(ans>temp){
              ans=temp; 
              x=s; y=ni; z=si;
          }
     }
    //  cout<<ans<<" "<<x<<endl;
      //cout<<y<<" "<<z;

}

int32_t main(){
     //#ifndef ONLINE_JUDGE
          //freopen("input.txt", "r", stdin);
          //freopen("output.txt", "w", stdout);
     //#endif
     adiwish

     int t; cin>>t;
     while(t--){
          code();
          cout<<endl;
     }
}
/*

1. Wrong Ans?
     Did u read the Statement properly?
     Did u miss any constraints?
     Did u miss any corner case?
     Are u sure about your Solution?

2. No Idea?
     Try Greedy..
     Try DP...
     First Try Recursive DP..
     Then Try Iterative DP..
     If memory exceeds, then try to reduce it..
     If not possible then, try to solve it using following way..
     Try to solve it using Permutation ans Combination..
     Try to find Sequence..
     Try to Solve it using Algebra..
*/