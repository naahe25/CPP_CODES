#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

int i,n,a,S;

cin>>n;

std::vector<int>vec;

for(i=1;i<=n;i++){
    cin>>a;
    vec.push_back(a);
    sort(vec.begin(),vec.end());
    
    for(auto j : vec){
      cout<<j<<" ";
    }
    cout<<endl;
}

return 0;
}