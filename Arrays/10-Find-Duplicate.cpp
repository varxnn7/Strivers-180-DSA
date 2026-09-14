#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << arr[i] << endl;
            break;
        }
    }
}

// using hashing
// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     unordered_map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         mp[arr[i]]++;
//     }
//     for (auto it : mp) {
//         if (it.second > 1) {
//             cout << it.first << endl;
//             break;
//         }
//     }
// }