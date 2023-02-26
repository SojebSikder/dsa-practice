#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n)
{
    int segment_a_occurences = count(s.begin(), s.end(), 'a');
    long first_amount = (n / s.size()) * segment_a_occurences;
    string second_segment = s.substr(0, n - (n / s.size()) * s.size());
    int second_amount = count(second_segment.begin(), second_segment.end(), 'a');
    return first_amount + second_amount;
}

int main()
{
    string s = "aba";
    long n = 10;

    long result;

    result = repeatedString(s, n);

    cout << result << endl; // 7

    return 0;
}