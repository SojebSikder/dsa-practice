// not accepted
#include <bits/stdc++.h>

using namespace std;

bool containsSubstring(const string &s, const string &sub)
{
    // Check if s contains sub as a substring
    return s.find(sub) != string::npos;
}

string rearrangeString(const string &s)
{
    // Sort the characters in s to create a new string
    string sorted = s;
    sort(sorted.begin(), sorted.end());
    return sorted;
}

string solve(string n)
{
    string haystack = n;
    string needle1 = "SELISE";
    string needle2 = "SELISE Digital Platforms";

    if (haystack.find(needle1) != string::npos && haystack.find(needle2) != string::npos)
    {
        return "BOTH";
    }
    else if (haystack.find(needle1) != string::npos)
    {
        return needle1;
    }
    else if (haystack.find(needle2) != string::npos)
    {
        return needle2;
    }
    else
    {
        return "NONE";
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    int j = 1;

    while (t--)
    {
        string n;
        getline(cin, n);

        cout << "Case " << j << ": " << solve(n) << endl;
        j++;
    }

    return 0;
}