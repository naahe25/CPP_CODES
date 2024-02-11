#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k, i = 0, count = 0;
  int a[1000];
  cin >> n >> k;
  while (i < n)
  {
    cin >> a[i];
    i++;
  }
  i = 0;
  while (i < n)
  {
    if (a[i] >= a[k - 1] && a[i] > 0)
    {
      count++;
    }
    i++;
  }
  cout << count << endl;
  return 0;
}
