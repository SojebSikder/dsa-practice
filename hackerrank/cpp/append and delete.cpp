#include <bits/stdc++.h>

using namespace std;

string appendAndDelete(string s, string t, int k)
{
    if (k >= s.size() + t.size())
        return "Yes";
    int sim = 0; // sim - number of similar characters
    while (sim < s.size() && sim < t.size())
    {
        if (s[sim] != t[sim])
            break;
        sim++;
    }
    int del = s.size() - sim;
    int app = t.size() - sim;
    if (del + app > k || (k - app - del) & 1)
        return "No";
    else
        return "Yes";
}

int main()
{
    string s = "hackerhappy";
    string t = "hackerrank";
    int k = 9;

    string result;

    result = appendAndDelete(s, t, k);

    cout << result << endl; // Yes

    return 0;
}