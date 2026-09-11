#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }

    unordered_set<int> setRows;
    unordered_set<int> setColumns;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                setRows.insert(i);
                setColumns.insert(j);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(setRows.count(i)>0 || setColumns.count(j)>0)
            {
                matrix[i][j]=0;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}