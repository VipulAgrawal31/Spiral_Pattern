#include <iostream>
using namespace std;
int main()
{
    int n, k, size, start, i, j;
    cout << "Enter input (>0)" << endl;
    cin >> n;
    int array[n][n];
    k = 0;
    size = n - 1;
    start = 0;
    i = 0;
    j = 0;
    for (int l = 0; l < (n / 2) + 1; l++)
    {
        while (j < size)
        {
            array[i][j] = k % 10;
            j++;
            k++;
        }
        while (i < size)
        {
            array[i][j] = k % 10;
            i++;
            k++;
        }
        while (j > start)
        {
            array[i][j] = k % 10;
            j--;
            k++;
        }
        while (i > (start + 1))
        {
            array[i][j] = k % 10;
            i--;
            k++;
        }
        size -= 1;
        start += 1;
    }
    if (n % 2 != 0)
    {
        array[i][j] = k % 10;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    return 1;
}
