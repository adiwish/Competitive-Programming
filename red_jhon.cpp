#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    int no;
    string name;
    string dl;
    float dis;
    cin>>no>>name>>dl>>dis;
    float bill=0;
    cout<<no<<endl;
    cout<<name<<endl;
    cout<<dl<<endl;
    
    if(dis<11){
        bill=5000+(15*dis);
    }
    else if(dis<=100){
        bill=5000+(15*10)+(14*(dis-10));
    }
    else if(dis<=500){
        bill=5000+(15*10)+(14*(90))+(12*dis-100);
    }
    else if(dis<=1000){
        bill=5000+(15*10)+(14*(90))+(12*dis-400)+(10*(dis-500));
    }
    else {
        bill=5000+(15*10)+(14*(90))+(12*dis-400)+(10*(500))+(9*(dis-1000d));
    }
    cout<<bill<<endl;
    float toll=(bill/100)*5;
    float gst=(bill/100)*18;
    cout<<toll<<" "<<gst<<" "<<bill+toll+gst;
    
}