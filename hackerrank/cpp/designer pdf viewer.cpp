#include <bits/stdc++.h>

using namespace std;

int maxNumber(vector<int> arr)
{
    int tmp = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (tmp < arr[i])
        {
            tmp = arr[i];
        }
    }
    return tmp;
}

int designerPdfViewer(vector<int> h, string word)
{
    map<char, int> mapAll;
    vector<char> letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < h.size(); i++)
    {
        mapAll[letters[i]] = h[i];
    }

    int ans = 0;
    vector<int> sizes;

    for (int i = 0; i < word.size(); i++)
    {
        sizes.push_back(mapAll[word[i]]);
    }

    ans = maxNumber(sizes) * word.size();
    return ans;
}

int main()
{
    vector<int> h = {1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7};
    string word = "zaba";

    int result;

    result = designerPdfViewer(h, word);
    cout << result << endl; // 28

    return 0;
}