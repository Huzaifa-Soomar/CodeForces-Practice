#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int currLen = 1, maxLen = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            currLen++;
        }
        else
        {
            currLen = 1;
        }

        if (currLen > maxLen)
        {
            currLen = maxLen;
        }
    }
    cout << maxLen << endl;

    return 0;
}