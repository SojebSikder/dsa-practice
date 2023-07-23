#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> st;
    
    for (int i = 0; i < n; i++)
    {
        st.insert(tolower(s[i]));
    }
    if (st.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    solve();

    return 0;
}