#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0;j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int rs = 0, re = m - 1;
    int cs = 0, ce = n - 1;
    while (rs <= re && cs <= ce) {
        //rs
        for (int col = cs;col <= ce;col++)
            cout << arr[rs][col] << ' ';
        cout << endl;
        rs++;
        //ce
        for (int row = rs;row <= re;row++)
            cout << arr[row][ce] << ' ';
        cout << endl;
        ce--;
        //re
        for (int col = ce;col >= cs;col--)
            cout << arr[re][col] << ' ';
        cout << endl;
        re--;
        //cs
        for (int row = re;row >= rs;row--)
            cout << arr[row][cs] << ' ';
        cout << endl;
        cs++;
    }
    return 0;
}