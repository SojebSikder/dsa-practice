#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        string s;
        cin >> s;
        int runs = 0;
        int w = 0;
        int over;
        int rem;
        int x = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'W' || s[i] == 'w')
            {
                w++;
            }
            else if (s[i] >= 48 && s[i] <= 54)
            {
                runs += (s[i] - 48);
            }
            x++;
        }
        over = x / 6;
        rem = x % 6;
        string f;
        if (over > 1)
        {
            f = "Overs ";
        }
        else
        {
            f = "Over ";
        }
        string g;
        if (w > 1)
        {
            g = "Wickets.";
        }
        else
        {
            g = "Wicket.";
        }
        string e;
        if (runs > 1)
        {
            e = "Runs ";
        }
        else
        {
            e = "Run ";
        }
        cout << over << '.' << rem << ' ' << f << runs << ' ' << e << w << ' ' << g << '\n';
    }
}