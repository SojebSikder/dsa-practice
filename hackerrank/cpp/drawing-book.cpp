#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p)
{
    int front, back;
    front = p / 2;

    if (n % 2 == 0)
    {
        n++;
    }
    back = (n - p) / 2;
    if (front <= back)
    {
        return front;
    }
    return back;
}

int main()
{
    int n = 5, p = 4;

    int result;

    result = pageCount(n, p); //0

    cout << result << endl;

    return 0;
}