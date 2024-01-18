#include<bits/stdc++.h>
using namespace std;
int N_to_Zero(int N){
   int count = 0;
   int i = 2;
   while((i * i) <= N && N%i!=0){
      i++;
   }
   if((i * i) > N){
      i = N;
   }
   count = 1 + (N-i)/2;
   return count;
}
int main(){
   int n; cin>>n;
   cout<<N_to_Zero(n);
   return 0;
}