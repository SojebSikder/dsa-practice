#include <bits/stdc++.h>

using namespace std;

string catAndMouse(int x, int y, int z)
{

    int cata = abs(z - x);
    int catb = abs(z - y);

    if (cata > catb)
    {
        return "Cat B";
    }
    else if (cata < catb)
    {
        return "Cat A";
    }

    return "Mouse C";
}

int main()
{
    int x = 1;
    int y = 2;
    int z = 3;

    string result;

    result = catAndMouse(x, y, z);

    cout << result << endl;

    return 0;
}