#include <bits/stdc++.h>

using namespace std;

struct Contestant
{
    string name;
    int penalty;
};

bool compareContestants(const Contestant &c1, const Contestant &c2)
{
    if (c1.penalty != c2.penalty)
    {
        // sort by ascending penalty
        return c1.penalty < c2.penalty;
    }
    else
    {
        // if penalties are equal, sort by name
        return c1.name < c2.name;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<Contestant> contestants(n);
    for (int i = 0; i < n; i++)
    {
        cin >> contestants[i].name >> contestants[i].penalty;
    }

    // sort contestants by penalty and name
    sort(contestants.begin(), contestants.end(), compareContestants);

    // output winners
    cout << "Selise Coding Challenge 2023 Winners\n";
    cout << "Winner: " << contestants[0].name << " => " << contestants[0].penalty << "\n";
    cout << "1st Runner Up: " << contestants[1].name << " => " << contestants[1].penalty << "\n";
    cout << "2nd Runner Up: " << contestants[2].name << " => " << contestants[2].penalty << "\n";

    return 0;
}