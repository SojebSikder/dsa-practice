#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            st.insert(s[i]);
        }
    }
    cout << st.size() << endl;
}

int main()
{

    solve();

    return 0;
}