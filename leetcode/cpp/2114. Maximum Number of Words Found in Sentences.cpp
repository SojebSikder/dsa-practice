#include <bits/stdc++.h>

using namespace std;

vector<string> split(string str, char delimiter)
{
    vector<string> internal;
    stringstream ss(str);
    string tok;

    while (getline(ss, tok, delimiter))
    {
        internal.push_back(tok);
    }

    return internal;
}
class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int maxWords = 0;

        for (int i = 0; i < sentences.size(); i++)
        {
            vector<string> words = split(sentences[i], ' ');

            if (maxWords < words.size())
            {
                maxWords = words.size();
            }
        }

        return maxWords;
    }
};

int main()
{
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};

    int result;

    result = (new Solution())->mostWordsFound(sentences);

    cout << result << endl;

    return 0;
}
