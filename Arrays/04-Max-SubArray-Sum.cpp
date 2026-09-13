#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    long long maxi = INT_MIN;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi << endl;
}

// For printing maximum subarray
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }
//     long long maxi = INT_MIN;
//     long long sum = 0;
//     // THIS IS FOR PRINTING MAXIMUM SUBARRAY
//     int start = 0;
//     int ansStart = 0;
//     int ansEnd = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (sum == 0)
//         {
//             start = i;
//         }
//         sum += nums[i];

//         if (sum > maxi)
//         {
//             maxi = sum;
//             ansStart = start;
//             ansEnd = i;
//         }

//         if (sum < 0)
//         {
//             sum = 0;
//         }
//     }
//     cout << "Maximum Sum: " << maxi << endl;
//     cout << "Maximum Subarray: ";
//     for (int i = ansStart; i <= ansEnd; i++)
//     {
//         cout << nums[i] << " ";
//     }
//     cout << endl;
// }