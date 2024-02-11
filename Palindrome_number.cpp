#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, Num, digit, reverse = 0;
    
    cin >> T;
    
    

    while (T--)
    {
        cin >> Num;
        int temp = Num;

        while (temp != 0)
        {
            
            digit = temp % 10;
            reverse = (reverse * 10) + digit;
            temp = temp / 10;
        }
        if (Num == reverse)
        {
            cout << "It Is Palindrome Number" << endl;
        }
        else
        {
            cout << "Not Palindrome Number" << endl;
        }
        reverse = 0; //Reset reverse For Next Iteration
    }
    
    return 0;
}