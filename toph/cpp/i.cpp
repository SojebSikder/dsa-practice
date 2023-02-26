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
    // transform(n.begin(), n.end(), n.begin(), ::tolower);
    string str1 = "SELISE";
    string str2 = "SELISE Digital Platforms";

    // transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    // transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    // Check if we can make SELISE or SELISE Digital Platforms from s
    bool hasSELISE = containsSubstring(n, str1);
    bool hasDigitalPlatforms = containsSubstring(n, str2);
    bool canMakeSELISE = containsSubstring(rearrangeString(n), str1);
    bool canMakeDigitalPlatforms = containsSubstring(rearrangeString(n), str2);

    // Print the result for this test case
    if (hasSELISE && hasDigitalPlatforms)
    {
        return "BOTH";
    }
    else if (hasSELISE && canMakeDigitalPlatforms)
    {
        return "SELISE Digital Platforms";
    }
    else if (hasDigitalPlatforms && canMakeSELISE)
    {
        return "SELISE";
    }
    else if (canMakeSELISE && canMakeDigitalPlatforms)
    {
        return "BOTH";
    }
    else if (canMakeSELISE)
    {
        return "SELISE";
    }
    else if (canMakeDigitalPlatforms)
    {
        return "SELISE Digital Platforms";
    }
    //
    else if (hasSELISE)
    {
        return "SELISE";
    }
    else if (hasDigitalPlatforms)
    {
        return "SELISE Digital Platforms";
    }
    //
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