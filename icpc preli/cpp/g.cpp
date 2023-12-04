#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int wickets = 0;
    int runs = 0;
    int balls = 0;
    int extras = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W')
        {
            wickets++;
        }
        else
        {
            runs += (s[i] - '0');
        }

        balls++;
    }

    int newballs = balls / 6;
    extras = balls % 6;

    string over = to_string(newballs) + "." + to_string(extras);

    string over_text = "Overs";
    string run_text = "Runs";
    string wicket_text = "Wickets";

    if (runs <= 1)
    {
        run_text = "Run";
    }

    if (wickets <= 1)
    {
        wicket_text = "Wicket";
    }

    float over_float = stof(over);

    if (over_float <= 1.0)
    {
        over_text = "Over";
    }

    cout << over << " " << over_text << " " << runs << " " << run_text << " " << wickets << " " << wicket_text << "." << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}