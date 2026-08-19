#include <bits/stdc++.h>

using namespace std;
#define ll long long

int solve()
{
  string s;
  cin >> s;

  int consecutive = 1;
  bool dangerous = false;

  for (int i = 1l; i < s.size(); i++)
  {
    if (s[i] == s[i - 1])
    {
      consecutive++;
      if (consecutive >= 7)
      {
        dangerous = true;
        break;
      }
    }
    else
    {
      consecutive = 1;
    }
  }

  if (dangerous)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}

int main()
{
  solve();

  return 0;
}
