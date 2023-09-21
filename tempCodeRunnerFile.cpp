#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N,i,temp,sum=0;
    cin>>N;
while(N--){
    cin >> temp ;
   sum += temp;  
}

if(sum%2==0){
         
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<< "NOT READY"<<endl;
    }
}