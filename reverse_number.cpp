#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        
        int temp = N;
        int reverse = 0;

        while(temp != 0){
        int digit = temp % 10;
        reverse = (reverse * 10) + digit;
        temp = temp / 10;
        
        }
          cout<<reverse<<endl;
    }
    
}