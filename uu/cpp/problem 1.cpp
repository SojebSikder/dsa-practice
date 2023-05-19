// wap that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number).
// Then calculate sum of the integers based on following position pattern (consider only the boxed position during the sum).
// solve this using c++

#include <iostream>
using namespace std;

int main()
{
    // Initializing variables
    int n, sum = 0;
    cout << "Enter the value of n (odd number): ";
    cin >> n;
    int arr[n][n];

    // Input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Logic
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == n - j - 1 || j == n / 2 || i == n / 2)
            {
                sum += arr[i][j];
            }
        }
    }

    // Output
    cout << sum;

    return 0;
}