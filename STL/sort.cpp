#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {

int n,i,a[n],b;

cout<<"How many Number You Want To Take:";
cin>>n;

cout<<"Enter Numbers :"<<endl;
for(i=1;i<=n;i++){
    cin>>a[i];
}

for(i=1;i<=n;i++){
cout<<"The Numbers Are:"<<a[i]<<endl;
}

std::sort(a,a+n);
cout<<"Sorted Numbers:";
for(i=1;i<=n;i++){
    cout<<" "<<a[i];
}

}