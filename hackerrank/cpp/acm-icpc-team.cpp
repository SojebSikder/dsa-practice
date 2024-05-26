#include <bits/stdc++.h>

using namespace std;

vector<int> acmTeam(vector<string> topic)
{
    int n = topic.size();
    int m = topic[0].size();
    int max_topics = 0;
    int max_teams = 0;
    int topics;
    int teams;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            topics = 0;
            for (int k = 0; k < m; k++)
            {
                if (topic[i][k] == '1' || topic[j][k] == '1')
                {
                    topics++;
                }
            }
            if (topics > max_topics)
            {
                max_topics = topics;
                max_teams = 1;
            }
            else if (topics == max_topics)
            {
                max_teams++;
            }
        }
    }

    vector<int> result{max_topics, max_teams};

    return result;
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