#include <bits/stdc++.h>
using namespace std;

int main()
{
  int numRows;
  cin >> numRows;

  vector<vector<int>> ans;

  for (int row = 1; row <= numRows; row++)
  {
    long long val = 1;
    vector<int> ansRow;

    ansRow.push_back(1);

    for (int col = 1; col < row; col++)
    {
      val = val * (row - col);
      val = val / col;
      ansRow.push_back(val);
    }

    ans.push_back(ansRow);
  }

  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}