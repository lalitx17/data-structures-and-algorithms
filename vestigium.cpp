#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;

    cin >> t;
    for (int y = 1; y <= t; y++)
    {
        int m = 0, k = 0, r = 0, c = 0;
        cin >> m;
        int matrix[m][m];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        // computing the value of k
        for (int l = 0; l < m; l++)
        {
            k += matrix[l][l];
        }
        // computing the number of rows that has repeated elements
         for (int p = 0; p < m; p++)
         {
             int row[m] = {};
             for (int q = 0; q < m; q++)
             {
                 row[q] = matrix[p][q];
             }
         sort(row, row+m);
             for (int s = 1; s < m; s++)
             {
                 if (row[s - 1] == row[s])
                 {
                     r++;
                     break;
                 }
             }
         }
         // computing the number of column that has repeated elements
         for (int w = 0; w < m; w++)
         {
             int column[m] = {};
             for (int x = 0; x < m; x++)
             {
                 column[x] = matrix[x][w];
             }
             sort(column, column+m);
             for (int z = 1; z < m; z++)
             {
                 if (column[z - 1] == column[z])
                 {
                     c++;
                     break;
                 }
             }
         }
        cout << "Case #" << y << " : " << k << " " << r << " " << c << " " << endl;
    }
return 0;
}