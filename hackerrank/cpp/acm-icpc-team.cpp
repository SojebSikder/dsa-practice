#include <bits/stdc++.h>

using namespace std;

vector<int> acmTeam(vector<string> topic)
{
    vector<int> ans;

    for (int i = 0; i < topic.size(); i++)
    {
    }

    return ans;
}

int main()
{

    vector<string> topic = {"10101",
                            "11100",
                            "11010",
                            "00101"};

    vector<int> result;

    result = acmTeam(topic);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl; // 5, 2
    }

    return 0;
}