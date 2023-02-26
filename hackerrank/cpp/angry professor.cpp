#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector<int> a)
{
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] <= 0)
        {
            count++;
        }
    }
    if (count < k)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int k = 3;
    vector<int> a = {-1, -3, 4, 2};

    string result;

    result = angryProfessor(k, a);
    cout << result << endl; // YES

    return 0;
}