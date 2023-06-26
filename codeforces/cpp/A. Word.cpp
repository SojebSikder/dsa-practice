#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int upper = 0, lower = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }

    if (upper > lower)
    {
        for (int i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
    }

    cout << s << endl;
}

int main()
{
    solve();

    return 0;
}